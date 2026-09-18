#pragma once
#include <endstone/player.h>
#include <endstone/server.h>
#include <endstone/event/player/player_interact_event.h>
#include <endstone/block/block.h>

namespace MoreOresGen {
    void init();
    void handle_drill(endstone::PlayerInteractEvent& event);
    void handle_magnet(endstone::PlayerInteractEvent& event);
    void handle_emerald_sword(endstone::PlayerInteractEvent& event);
    void handle_ruby_pickaxe(endstone::PlayerInteractEvent& event);
}
