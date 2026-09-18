#pragma once

#include <endstone/entity/entity.h>
#include <endstone/player.h>
#include <vector>
#include <string>

namespace CombatHelper {

    bool isWearingSet(endstone::Player& player, const std::string& tag);
    
    float applyWeakness(float damageValue, endstone::Entity& attacker);
    float applyStrength(float damageValue, endstone::Entity& attacker);
    float applyMeleeEnchants(float damageValue, endstone::Entity& attacker, endstone::Entity& target);

    bool specialDamage(endstone::Entity& attacker, endstone::Entity& target, float damage, 
                       const std::string& cause, const std::vector<std::string>& properties);

    bool isValidTarget(endstone::Entity& target);

}
