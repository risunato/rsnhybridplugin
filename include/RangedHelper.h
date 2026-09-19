#pragma once
#include <endstone/player.h>
#include <endstone/actor/actor.h>
#include <string>

namespace RangedHelper {
    void handleProjectileHit(endstone::Player& player, endstone::Actor& target, const std::string& bowId);
}
