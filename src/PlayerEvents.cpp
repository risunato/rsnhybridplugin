#include "RSNHybridPlugin.h"
#include "CombatHelper.h"
#include "ArtefactsHelper.h"
#include "WeaponsHelper.h"
#include "MoreOresHelper.h"
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
    // Get damager via DamageSource (confirmed from damage_source.h)
    auto* damager = event.getDamageSource().getActor();
    auto& target = event.getActor();

    if (!damager || !CombatHelper::isValidTarget(target)) return;

    // Example logic hook for Dungeons weapon effects
}

void RSNHybridPlugin::onPlayerInteract(endstone::PlayerInteractEvent& event) {
    auto& player = event.getPlayer();
    
    // Process MoreOres interact logic first
    MoreOresHelper::onPlayerInteract(event);

    // Fetch item in main hand
    auto item = player.getInventory().getItemInMainHand();
    if (item.has_value()) {
        std::string itemId = item->getType();
        ArtefactsHelper::handleArtefactUse(player, itemId);
    }
}
