#include "CombatHelper.h"
#include <cmath>

namespace CombatHelper {

    bool isWearingSet(endstone::Player& player, const std::string& tag) {
        // Mock implementation. Needs Endstone inventory API to check equipped items.
        // E.g. player.getInventory().getHelmet().hasScoreboardTag(tag)
        return false; 
    }

    float applyWeakness(float damageValue, endstone::Entity& attacker) {
        // Endstone does not yet expose getEffect directly, assuming a placeholder check
        // if (attacker.hasEffect("weakness")) {
        //    int weakness = attacker.getEffect("weakness").amplifier + 1;
        //    return damageValue * std::pow(0.8f, weakness) + ((std::pow(0.8f, weakness) - 1.0f) / 0.4f);
        // }
        return damageValue;
    }

    float applyStrength(float damageValue, endstone::Entity& attacker) {
        // Placeholder check
        // if (attacker.hasEffect("strength")) {
        //    int strength = attacker.getEffect("strength").amplifier + 1;
        //    return damageValue * std::pow(1.3f, strength) + ((std::pow(1.3f, strength) - 1.0f) / 0.3f);
        // }
        return damageValue;
    }

    float applyMeleeEnchants(float damageValue, endstone::Entity& attacker, endstone::Entity& target) {
        // Placeholder logic
        return damageValue;
    }

    bool specialDamage(endstone::Entity& attacker, endstone::Entity& target, float damage, 
                       const std::string& cause, const std::vector<std::string>& properties) {
        
        for (const auto& prop : properties) {
            if (prop == "apply_strength") damage = applyStrength(damage, attacker);
            if (prop == "apply_weakness") damage = applyWeakness(damage, attacker);
            if (prop == "apply_melee_enchants") damage = applyMeleeEnchants(damage, attacker, target);
            if (prop == "artefact" && attacker.isPlayer()) {
                auto& player = static_cast<endstone::Player&>(attacker);
                if (isWearingSet(player, "dungeons:piglin_armour")) damage *= 1.5f;
                if (isWearingSet(player, "dungeons:guard_armour")) damage *= 1.2f;
                if (isWearingSet(player, "dungeons:soulrobe_armour")) damage *= 1.3f;
            }
        }
        
        if (damage <= 0.0f) return false;
        
        // Apply damage to target using Endstone API. 
        // target.damage(damage, cause); // Conceptual Endstone API call
        return true;
    }

    bool isValidTarget(endstone::Entity& target) {
        if (!target.isValid()) return false;
        if (target.isPlayer()) {
            auto& p = static_cast<endstone::Player&>(target);
            // Ignore creative mode players
            // if (p.getGameMode() == GameMode::Creative) return false;
        }
        // Simplified family match checks
        return true;
    }

}
