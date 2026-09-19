#include "RSNHybridPlugin.h"
#include "MoreOresHelper.h"
#include "DataStore.h"
#include <endstone/server.h>
#include <endstone/scoreboard/scoreboard.h>

void RSNHybridPlugin::onLoad() {
    getLogger().info("RSNHybridPlugin (Dungeons & Ores Core) is loading...");
}

void RSNHybridPlugin::onEnable() {
    getLogger().info("RSNHybridPlugin enabled. Initializing Hybrid Server Logic...");
    
    // Init DataStore
    getDataStore().init(getDataFolder());

    // Register events
    registerEvent(&RSNHybridPlugin::onServerLoad, *this);
    registerEvent(&RSNHybridPlugin::onPlayerJoin, *this);
    registerEvent(&RSNHybridPlugin::onPlayerQuit, *this);
    registerEvent(&RSNHybridPlugin::onActorDamage, *this);
    registerEvent(&RSNHybridPlugin::onActorDeath, *this);
    registerEvent(&RSNHybridPlugin::onPlayerInteract, *this);
    registerEvent(&RSNHybridPlugin::onBlockBreak, *this);
    registerEvent(&RSNHybridPlugin::onBlockPlace, *this);
    
    // Setup Scoreboards directly if server is already loaded, otherwise handled in onServerLoad
    setupScoreboards();

    // Schedule Haunted Bow Trail
    getServer().getScheduler().runTaskTimer(*this, [this]() {
        (void)getServer().dispatchCommand(getServer().getCommandSender(), "execute as @e[tag=dungeons:haunted_bow_fired_by] at @s run particle dungeons:haunted_arrow ~ ~ ~");
    }, 1, 1);
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

void RSNHybridPlugin::onBlockPlace(endstone::BlockPlaceEvent& event) {
    MoreOresHelper::onBlockPlace(event);
}

ENDSTONE_PLUGIN("rsnhybridplugin", "1.0.0", RSNHybridPlugin)
{
    description = "Hybrid Server Plugin migrating Dungeons & More Ores Addons";
}

