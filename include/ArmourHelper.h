#pragma once

#include <endstone/player.h>
#include <endstone/entity/entity.h>
#include <string>

namespace ArmourHelper {
    bool isWearingSet(endstone::Player& player, const std::string& tag);
    void applyArmourEffects(endstone::Player& player);
    
    // Specific armour implementations
    void applyWitherArmour(endstone::Player& player);
    void applyPhantomArmour(endstone::Player& player);
    void applyEmeraldArmour(endstone::Player& player);
    void applyGhostlyArmour(endstone::Player& player);
}
