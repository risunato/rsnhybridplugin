#pragma once

#include <endstone/actor/actor.h>
#include <endstone/player.h>
#include <vector>
#include <string>

namespace CombatHelper {

    bool isWearingSet(endstone::Player& player, const std::string& tag);
    
    float applyWeakness(float damageValue, endstone::Actor& attacker);
    float applyStrength(float damageValue, endstone::Actor& attacker);
    float applyMeleeEnchants(float damageValue, endstone::Actor& attacker, endstone::Actor& target);

    bool specialDamage(endstone::Actor& attacker, endstone::Actor& target, float damage, 
                       const std::string& cause, const std::vector<std::string>& properties);

    bool isValidTarget(endstone::Actor& target);

}
