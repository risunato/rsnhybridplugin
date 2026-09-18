#include "ArtefactsHelper.h"

namespace ArtefactsHelper {

    void handleArtefactUse(endstone::Player& player, const std::string& artefactId) {
        if (artefactId == "dungeons:blast_fungus") {
            useBlastFungus(player);
        } else if (artefactId == "dungeons:corrupted_beacon") {
            useCorruptedBeacon(player);
        } else if (artefactId == "dungeons:ghost_cloak") {
            useGhostCloak(player);
        } else if (artefactId == "dungeons:light_feather") {
            useLightFeather(player);
        } else if (artefactId == "dungeons:totem_of_regeneration") {
            useTotemOfRegeneration(player);
        }
    }

    void useBlastFungus(endstone::Player& player) {
        // Spawn blast fungus entity with velocity
    }

    void useCorruptedBeacon(endstone::Player& player) {
        // Drain soul gauge, emit beam, damage entities in line of sight
    }

    void useGhostCloak(endstone::Player& player) {
        // Apply ghost cloak buff, speed, damage resistance
    }

    void useLightFeather(endstone::Player& player) {
        // Apply jump boost, dash forward, stun nearby mobs
    }

    void useTotemOfRegeneration(endstone::Player& player) {
        // Spawn totem entity that heals players in radius
    }
}
