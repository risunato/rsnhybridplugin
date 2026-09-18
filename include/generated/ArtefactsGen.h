#pragma once
#include <endstone/player.h>
#include <endstone/server.h>

namespace ArtefactsGen {
    void init();
    void handle_artefactCooldown(endstone::Player& p);
    void handle_blastFungus(endstone::Player& p);
    void handle_buzzyNest(endstone::Player& p);
    void handle_corruptedBeacon(endstone::Player& p);
    void handle_corruptedPumpkin(endstone::Player& p);
    void handle_corruptedSeeds(endstone::Player& p);
    void handle_deathCap(endstone::Player& p);
    void handle_enchantersTome(endstone::Player& p);
    void handle_enchantedGrass(endstone::Player& p);
    void handle_eyeGuardian(endstone::Player& p);
    void handle_ghostCloak(endstone::Player& p);
    void handle_golemKit(endstone::Player& p);
    void handle_gongWeakening(endstone::Player& p);
    void handle_harvester(endstone::Player& p);
    void handle_iceWand(endstone::Player& p);
    void handle_ironHide(endstone::Player& p);
    void handle_lightFeather(endstone::Player& p);
    void handle_lightningRod(endstone::Player& p);
    void handle_powershaker(endstone::Player& p);
    void handle_satchelElements(endstone::Player& p);
    void handle_satchelElixirs(endstone::Player& p);
    void handle_satchelSnacks(endstone::Player& p);
    void handle_scatterMines(endstone::Player& p);
    void handle_shadowShifter(endstone::Player& p);
    void handle_shockPowder(endstone::Player& p);
    void handle_soulHealer(endstone::Player& p);
    void handle_soulLantern(endstone::Player& p);
    void handle_spinblade(endstone::Player& p);
    void handle_swiftnessBoot(endstone::Player& p);
    void handle_totemCasting(endstone::Player& p);
    void handle_totemShielding(endstone::Player& p);
    void handle_totemRegeneration(endstone::Player& p);
    void handle_updraftTome(endstone::Player& p);
    void handle_vexingChant(endstone::Player& p);
    void handle_windHorn(endstone::Player& p);
    void handle_tomeDuplication(endstone::Player& p);
    void handle_loveMedallion(endstone::Player& p);
    void handle_totemSoulProtection(endstone::Player& p);
    void handle_tastyBone(endstone::Player& p);
    void handle_wonderfulWheat(endstone::Player& p);
}
