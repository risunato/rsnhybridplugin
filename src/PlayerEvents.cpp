#include "RSNHybridPlugin.h"
#include "CombatHelper.h"
#include "ArtefactsHelper.h"
#include "WeaponsHelper.h"
#include "RangedHelper.h"
#include "MoreOresHelper.h"
#include "MiscHelper.h"
#include <endstone/player.h>
#include <endstone/inventory/player_inventory.h>
#include <endstone/inventory/item_stack.h>
#include <endstone/scoreboard/scoreboard.h>
#include <endstone/scoreboard/objective.h>
#include <endstone/scoreboard/score.h>
#include <endstone/server.h>

void RSNHybridPlugin::clearPlayerWarningTags(endstone::Player& player) {
    std::vector<std::string> tagsToRemove = {
        "dungeons:tempest_warn", "dungeons:guardian_warn", "dungeons:spooky_warn",
        "dungeons:vhoe_warn", "dungeons:sword_block", "dungeons:using_common_guardian",
        "dungeons:using_rare_guardian", "dungeons:using_common_beacon", "dungeons:using_rare_beacon"
    };
    
    for (const auto& tag : tagsToRemove) {
        player.removeScoreboardTag(tag);
    }
}

void RSNHybridPlugin::initializePlayerScores(endstone::Player& player) {
    auto scoreboard = getServer().getScoreboard();
    if (!scoreboard) return;

    std::vector<std::string> objectives = {
        "cooldownMax", "cooldownTime", "hammerCD", "obsidianCD", "shadowTime",
        "shockwaveCD", "soulGauge", "sweepCD", "swirlCD", "anchorCD",
        "spongeStrikerCharge", "sawbladeCharge", "sawbladeCD", "powershaker_t",
        "powershaker_u", "glaiveCD", "echoCD", "tpCD", "dungeons:music"
    };

    for (const auto& objName : objectives) {
        auto obj = scoreboard->getObjective(objName);
        if (obj) {
            auto score = obj->getScore(&player);
            if (!score->isScoreSet()) {
                score->setValue(0);
            }
        }
    }
}

void RSNHybridPlugin::onPlayerJoin(endstone::PlayerJoinEvent& event) {
    auto& player = event.getPlayer();
    
    clearPlayerWarningTags(player);
    initializePlayerScores(player);
    
    // Aly advancements compatibility 
    player.addScoreboardTag("aly:dungeons_enabled");

    getLogger().info(player.getName() + " joined! Dungeons tags & scores initialized.");
}

void RSNHybridPlugin::onPlayerQuit(endstone::PlayerQuitEvent& event) {
    // Cleanup logic if needed
}

void RSNHybridPlugin::onActorDamage(endstone::ActorDamageEvent& event) {
    auto* damager = event.getDamageSource().getActor(); // Direct cause (e.g. arrow, sword)
    auto* indirectDamager = event.getDamageSource().getDamagingActor(); // Shooter/Owner
    auto& target = event.getActor();

    if (!CombatHelper::isValidTarget(target)) return;
    
    endstone::Player* player = nullptr;
    if (damager && damager->asPlayer()) {
        player = damager->asPlayer();
    } else if (indirectDamager && indirectDamager->asPlayer()) {
        player = indirectDamager->asPlayer();
    }
    
    if (damager) getLogger().info("Actor " + target.getName() + " damaged by direct: " + damager->getType());
    if (indirectDamager) getLogger().info("Actor " + target.getName() + " damaged by indirect: " + indirectDamager->getType());

    if (player) {
        getLogger().info(player->getName() + " damaged actor: " + target.getName());
        // Handle Diamond Chest Loot
        if (target.getName() == "dungeons:diamond_chest" || target.getName() == "diamond_chest") {
            MiscHelper::handleSparklerLoot(*player, target);
        }

        auto item = player->getInventory().getItemInMainHand();
        if (item) {
            std::string weaponId = item->getType().getId();
            WeaponsHelper::handleWeaponAttack(*player, target, weaponId);
            RangedHelper::handleProjectileHit(*player, target, weaponId);
        }
    }
}

void RSNHybridPlugin::onActorDeath(endstone::ActorDeathEvent& event) {
    auto& target = event.getActor();
    auto* damager = event.getDamageSource().getDamagingActor();
    auto* player = (damager && damager->asPlayer()) ? damager->asPlayer() : nullptr;
    
    // GlobalData.js ports: Monsters killed, total deaths, players killed, kill streaks
    if (target.asPlayer()) {
        auto& victim = *target.asPlayer();
        auto scoreboard = getServer().getScoreboard();
        if (scoreboard) {
            auto total_deaths = scoreboard->getObjective("MOT_TOTAL_DEATHS");
            if (!total_deaths) total_deaths = scoreboard->addObjective("MOT_TOTAL_DEATHS", endstone::Criteria::Type::Dummy, "Total Deaths");
            auto score = total_deaths->getScore(&victim);
            score->setValue(score->getValue() + 1);

            if (player) {
                // Killed by player
                auto players_killed = scoreboard->getObjective("MOT_PLAYERS_KILLED");
                if (!players_killed) players_killed = scoreboard->addObjective("MOT_PLAYERS_KILLED", endstone::Criteria::Type::Dummy, "Players Killed");
                auto pk_score = players_killed->getScore(player);
                pk_score->setValue(pk_score->getValue() + 1);
                
                // Kill streak logic
                auto kill_streak = scoreboard->getObjective("MOT_KILL_STREAK");
                if (!kill_streak) kill_streak = scoreboard->addObjective("MOT_KILL_STREAK", endstone::Criteria::Type::Dummy, "Kill Streak");
                kill_streak->getScore(&victim)->setValue(0);
                auto ks_score = kill_streak->getScore(player);
                ks_score->setValue(ks_score->getValue() + 1);
            }
        }
    } else if (player) {
        // Monster killed by player
        auto scoreboard = getServer().getScoreboard();
        if (scoreboard) {
            auto monsters_killed = scoreboard->getObjective("MOT_MONSTERS_KILLED");
            if (!monsters_killed) monsters_killed = scoreboard->addObjective("MOT_MONSTERS_KILLED", endstone::Criteria::Type::Dummy, "Monsters Killed");
            auto score = monsters_killed->getScore(player);
            score->setValue(score->getValue() + 1);
        }
    }
}

void RSNHybridPlugin::onPlayerInteract(endstone::PlayerInteractEvent& event) {
    auto& player = event.getPlayer();
    
    // Process MoreOres interact logic first
    MoreOresHelper::onPlayerInteract(event);

    // Fetch item in main hand
    auto item = player.getInventory().getItemInMainHand();
    if (item) {
        std::string itemId = item->getType().getId();
        getLogger().info(player.getName() + " interacted with: " + itemId);
        
        if (itemId == "nps_mot:codex" || itemId == "nps_mot:tutorial_book") {
            event.setCancelled(true);
            MiscHelper::handleCodex(player);
        } else if (itemId == "nps_mot:server_tool") {
            event.setCancelled(true);
            MiscHelper::handleServerTool(player);
        } else if (itemId == "nps_mot:settings_tool") {
            event.setCancelled(true);
            MiscHelper::handleSettingsTool(player);
        } else {
            ArtefactsHelper::handleArtefactUse(player, itemId);
        }
    }
}
