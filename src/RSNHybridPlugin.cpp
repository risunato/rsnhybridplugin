#include "RSNHybridPlugin.h"
#include "MoreOresHelper.h"
#include <endstone/server.h>
#include <endstone/scoreboard/scoreboard.h>

void RSNHybridPlugin::onLoad() {
    getLogger().info("RSNHybridPlugin (Dungeons & Ores Core) is loading...");
}

void RSNHybridPlugin::onEnable() {
    getLogger().info("RSNHybridPlugin enabled. Initializing Hybrid Server Logic...");
    
    // Register events
    registerEvent(&RSNHybridPlugin::onServerLoad, *this);
    registerEvent(&RSNHybridPlugin::onPlayerJoin, *this);
    registerEvent(&RSNHybridPlugin::onPlayerQuit, *this);
    registerEvent(&RSNHybridPlugin::onActorDamage, *this);
    registerEvent(&RSNHybridPlugin::onPlayerInteract, *this);
    registerEvent(&RSNHybridPlugin::onBlockBreak, *this);
    
    // Setup Scoreboards directly if server is already loaded, otherwise handled in onServerLoad
    setupScoreboards();
}

void RSNHybridPlugin::onDisable() {
    getLogger().info("RSNHybridPlugin disabled.");
}

void RSNHybridPlugin::setupScoreboards() {
    auto scoreboard = getServer().getScoreboard();
    if (!scoreboard) return;

    std::vector<std::string> objectives = {
        "cooldownMax", "cooldownTime", "hammerCD", "obsidianCD", "shadowTime",
        "shockwaveCD", "soulGauge", "sweepCD", "swirlCD", "anchorCD",
        "spongeStrikerCharge", "sawbladeCharge", "sawbladeCD", "powershaker_t",
        "powershaker_u", "glaiveCD", "echoCD", "tpCD", "dungeons:music"
    };

    for (const auto& obj : objectives) {
        if (!scoreboard->getObjective(obj)) {
            // In Endstone, creating objective might require DisplaySlot or Criteria.
            // Using dummy criteria for these internal scores.
            scoreboard->addObjective(obj, endstone::Criteria::Type::Dummy, obj);
        }
    }
    getLogger().info("Dungeons Scoreboards verified and initialized.");
}

void RSNHybridPlugin::onServerLoad(endstone::ServerLoadEvent& event) {
    setupScoreboards();
}

void RSNHybridPlugin::onBlockBreak(endstone::BlockBreakEvent& event) {
    MoreOresHelper::onBlockBreak(event);
}

ENDSTONE_PLUGIN("rsnhybridplugin", "1.0.0", RSNHybridPlugin)
{
    description = "Hybrid Server Plugin migrating Dungeons & More Ores Addons";
}

