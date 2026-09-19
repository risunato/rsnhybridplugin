#pragma once

#include <endstone/player.h>
#include <endstone/event/block/block_break_event.h>
#include <endstone/event/player/player_interact_event.h>

namespace MoreOresHelper {
    void onPlayerInteract(endstone::PlayerInteractEvent& event);
    void onBlockBreak(endstone::BlockBreakEvent& event);

    // Custom tool effects
    void applyDrillEffect(endstone::Player& player);
    void applyMagnetEffect(endstone::Player& player);
    void handleOreGeneration(endstone::BlockBreakEvent& event);
}
