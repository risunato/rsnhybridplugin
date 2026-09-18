#pragma once

#include <endstone/player.h>
#include <endstone/entity/entity.h>
#include <string>

namespace WeaponsHelper {
    void handleWeaponAttack(endstone::Player& player, endstone::Entity& target, const std::string& weaponId);
    void triggerSwirling(endstone::Player& player);
    void triggerShockwave(endstone::Player& player);
    void triggerLeeching(endstone::Player& player, float damage);
    // Add more weapon abilities...
}
