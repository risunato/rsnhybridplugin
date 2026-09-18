#pragma once

#include <endstone/plugin/plugin.h>
#include <endstone/event/server/server_load_event.h>
#include <endstone/event/player/player_join_event.h>
#include <endstone/event/player/player_quit_event.h>
#include <endstone/event/actor/actor_damage_event.h>
#include <endstone/event/player/player_interact_event.h>
#include <endstone/event/block/block_break_event.h>


class RSNHybridPlugin : public endstone::Plugin {
public:
    void onLoad() override;
    void onEnable() override;
    void onDisable() override;

private:
    // Core setup
    void setupScoreboards();
    
    // Event handlers
    void onServerLoad(endstone::ServerLoadEvent& event);
    void onPlayerJoin(endstone::PlayerJoinEvent& event);
    void onPlayerQuit(endstone::PlayerQuitEvent& event);
    void onActorDamage(endstone::ActorDamageEvent& event);
    void onPlayerInteract(endstone::PlayerInteractEvent& event);
    void onBlockBreak(endstone::BlockBreakEvent& event);

    // Helpers
    void clearPlayerWarningTags(endstone::Player& player);
    void initializePlayerScores(endstone::Player& player);
};
