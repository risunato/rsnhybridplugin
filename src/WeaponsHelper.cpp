#include "WeaponsHelper.h"
#include <endstone/server.h>

namespace WeaponsHelper {

    void handleWeaponAttack(endstone::Player& player, endstone::Entity& target, const std::string& weaponId) {
        // Dispatch to specific weapon logic
        if (weaponId == "dungeons:longsword") {
            // trigger sharpened or critical hit
        } else if (weaponId == "dungeons:anchor") {
            // trigger poison
        } else if (weaponId == "dungeons:battlestaff") {
            // trigger exploding
        }
        // ... switch cases for all 100+ weapons
    }

    void triggerSwirling(endstone::Player& player) {
        // Logic for swirling enchant:
        // Spawn particles, damage entities in radius
    }

    void triggerShockwave(endstone::Player& player) {
        // Logic for shockwave:
        // Knockback entities in radius
    }

    void triggerLeeching(endstone::Player& player, float damage) {
        // Logic for leeching:
        // player.heal(damage * 0.1f) etc.
    }

}
