#include "RSNHybridPlugin.h"
#include "CombatHelper.h"
#include "ArtefactsHelper.h"
#include "WeaponsHelper.h"
#include <endstone/player.h>
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
            auto score = obj->getScore(player);
            if (!score->isSet()) {
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

void RSNHybridPlugin::onEntityDamageByEntity(endstone::ActorDamageByEntityEvent& event) {
    auto* damager = event.getDamager();
    auto& target = event.getEntity();

    if (!damager || !CombatHelper::isValidTarget(target)) return;

    // Example logic hook for Dungeons weapon effects
    // if (damager->isPlayer()) {
    //    // Check weapon tags, apply special damage
    // }
}

void RSNHybridPlugin::onPlayerInteract(endstone::PlayerInteractEvent& event) {
    auto& player = event.getPlayer();
    
    // In Endstone API, you would typically check the item the player is holding or interacting with.
    // std::string itemId = player.getInventory().getItemInMainHand().getType();
    // ArtefactsHelper::handleArtefactUse(player, itemId);
}
