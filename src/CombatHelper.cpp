#include "CombatHelper.h"
#include <cmath>

namespace CombatHelper {

    bool isWearingSet(endstone::Player& player, const std::string& tag) {
        // Mock implementation. Needs Endstone inventory API to check equipped items.
        // E.g. player.getInventory().getHelmet().hasScoreboardTag(tag)
        return false; 
    }

    float applyWeakness(float damageValue, endstone::Actor& attacker) {
        // Asumsi API Endstone mendukung pengecekan efek (misal: weakness)
        // int weaknessLevel = attacker.getEffectLevel("weakness"); // Placeholder API
        int weaknessLevel = 0; // Ganti dengan API pemanggilan level efek asli nanti
        
        if (weaknessLevel > 0) {
            return damageValue * std::pow(0.8f, weaknessLevel) + ((std::pow(0.8f, weaknessLevel) - 1.0f) / 0.4f);
        }
        return damageValue;
    }

    float applyStrength(float damageValue, endstone::Actor& attacker) {
        // Asumsi API Endstone mendukung pengecekan efek (misal: strength)
        // int strengthLevel = attacker.getEffectLevel("strength"); // Placeholder API
        int strengthLevel = 0; // Ganti dengan API pemanggilan level efek asli nanti
        
        if (strengthLevel > 0) {
            return damageValue * std::pow(1.3f, strengthLevel) + ((std::pow(1.3f, strengthLevel) - 1.0f) / 0.3f);
        }
        return damageValue;
    }

    float applyMeleeEnchants(float damageValue, endstone::Actor& attacker, endstone::Actor& target) {
        // Placeholder logic
        return damageValue;
    }

    bool specialDamage(endstone::Actor& attacker, endstone::Actor& target, float damage, 
                       const std::string& cause, const std::vector<std::string>& properties) {
        
        for (const auto& prop : properties) {
            if (prop == "apply_strength") damage = applyStrength(damage, attacker);
            if (prop == "apply_weakness") damage = applyWeakness(damage, attacker);
            if (prop == "apply_melee_enchants") damage = applyMeleeEnchants(damage, attacker, target);
            if (prop == "artefact" && attacker.asPlayer() != nullptr) {
                auto& player = *attacker.asPlayer();
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

    bool isValidTarget(endstone::Actor& target) {
        if (!target.isValid()) return false;
        if (target.asPlayer() != nullptr) {
            auto* p = target.asPlayer();
            // Ignore creative mode players
            // if (p.getGameMode() == GameMode::Creative) return false;
        }
        // Simplified family match checks
        return true;
    }

}
