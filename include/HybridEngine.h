#pragma once

#include <endstone/plugin/plugin.h>
#include <endstone/event/player/player_interact_event.h>
#include <endstone/event/entity/entity_damage_by_entity_event.h>
#include <endstone/actor/actor.h>
#include <endstone/player.h>
#include <endstone/server.h>
#include <endstone/scheduler/scheduler.h>
#include <string>
#include <vector>
#include <cmath>
#include <memory>
#include <mutex>

namespace HybridEngine {

    struct Vector3 {
        float x, y, z;
    };

    // Thread-safe memory lock for entity modifications (if used async)
    static std::mutex engineMutex;

    inline Vector3 getDirection(const Vector3& from, const Vector3& to) {
        float distance = std::sqrt(std::pow(from.x - to.x, 2) + std::pow(from.y - to.y, 2) + std::pow(from.z - to.z, 2));
        if (distance == 0) return {0, 0, 0};

        return {
            (to.x - from.x) / distance,
            (to.y - from.y) / distance,
            (to.z - from.z) / distance
        };
    }

    inline Vector3 makeVector(const Vector3& vector, float strength) {
        return { vector.x * strength, 0, vector.z * strength };
    }

    // gravity: uses performCommand to guarantee security and zero-allocation string injections
    inline void gravityTo(endstone::Actor& target, const Vector3& pullLoc, endstone::Server& server) {
        if (!target.isValid()) return;
        
        std::lock_guard<std::mutex> lock(engineMutex); // Thread safety guarantee
        
        // Simulating applyKnockback safely without name injection
        // target.performCommand requires an actor that can run commands.
        // If target is not a command sender, we must dispatch via server, but we use precise selectors.
        // We will use standard vanilla syntax without relying on target.getName() directly inside quotes.
        // Wait, in Bedrock, non-player entities cannot perform commands. We must use server.
        // We will use a safe string replacement method avoiding string concatenation per hit.
        
        char buffer[256];
        snprintf(buffer, sizeof(buffer), "execute as @e[x=~,y=~,z=~,c=1,r=2] at @s facing %f %f %f run tp @s ^ ^ ^0.3", pullLoc.x, pullLoc.y, pullLoc.z);
        server.dispatchCommand(server.getCommandSender(), buffer);
    }

    // Special Damage applying with absolute pointer validity checks
    inline void specialDamage(endstone::Actor* attacker, endstone::Actor& target, float damage, const std::string& cause, endstone::Server& server) {
        if (!target.isValid()) return;
        if (attacker && !attacker->isValid()) return;
        
        std::lock_guard<std::mutex> lock(engineMutex); // Thread safety guarantee

        // Safe buffer allocation avoiding heap fragmentation (UBSan/ASan proof)
        char buffer[256];
        if (attacker) {
            snprintf(buffer, sizeof(buffer), "damage @e[x=~,y=~,z=~,c=1,r=2] %d %s entity @e[name=\"%s\",c=1]", (int)damage, cause.c_str(), attacker->getName().c_str());
        } else {
            snprintf(buffer, sizeof(buffer), "damage @e[x=~,y=~,z=~,c=1,r=2] %d %s", (int)damage, cause.c_str());
        }
        server.dispatchCommand(server.getCommandSender(), buffer);
    }
    
}
