#pragma once

#include <endstone/player.h>
#include <string>

namespace ArtefactsHelper {
    void handleArtefactUse(endstone::Player& player, const std::string& artefactId);
    
    // Specific artefact logic
    void useBlastFungus(endstone::Player& player);
    void useCorruptedBeacon(endstone::Player& player);
    void useGhostCloak(endstone::Player& player);
    void useLightFeather(endstone::Player& player);
    void useTotemOfRegeneration(endstone::Player& player);
}
