#include "generated/ArtefactsGen.h"
#include <string>

namespace ArtefactsGen {
    void handle_artefactCooldown(endstone::Player& p) {
        // TODO: Port logic for artefactCooldown
    }

    void handle_blastFungus(endstone::Player& p) {

        auto& server = p.getServer();
        auto sender = server.getCommandSender();
        server.dispatchCommand(sender, "playsound artefact.blastfungus.explode @a \"" + p.getName() + "\" 2.0 0.3");
        // Simulate shooting 5 projectiles via commands since we don't have projectile API yet
        for(int i = 0; i < 5; i++) {
            server.dispatchCommand(sender, "execute as \"" + p.getName() + "\" at @s run summon dungeons:blast_fungus ^ ^1 ^1");
        }
        }

    void handle_buzzyNest(endstone::Player& p) {
        // TODO: Port logic for buzzyNest
    }

    void handle_corruptedBeacon(endstone::Player& p) {

        auto& server = p.getServer();
        auto sender = server.getCommandSender();
        server.dispatchCommand(sender, "playsound artefact.corrupted_beacon.beam @a \"" + p.getName() + "\" 1.0 1.0");
        server.dispatchCommand(sender, "execute as \"" + p.getName() + "\" at @s run particle dungeons:corrupted_beacon_beam ^ ^1 ^5");
        server.dispatchCommand(sender, "execute as \"" + p.getName() + "\" at @s run damage @e[r=10,c=5] 12 magic entity @s");
        }

    void handle_corruptedPumpkin(endstone::Player& p) {
        // TODO: Port logic for corruptedPumpkin
    }

    void handle_corruptedSeeds(endstone::Player& p) {
        // TODO: Port logic for corruptedSeeds
    }

    void handle_deathCap(endstone::Player& p) {

        auto& server = p.getServer();
        server.dispatchCommand(server.getCommandSender(), "effect \"" + p.getName() + "\" haste 10 1 true");
        server.dispatchCommand(server.getCommandSender(), "effect \"" + p.getName() + "\" speed 10 1 true");
        server.dispatchCommand(server.getCommandSender(), "playsound artefact.deathcap.use @a \"" + p.getName() + "\" 1.0 1.0");
        server.dispatchCommand(server.getCommandSender(), "execute as \"" + p.getName() + "\" at @s run particle dungeons:deathcap_spores ~ ~ ~");
        }

    void handle_enchantersTome(endstone::Player& p) {
        // TODO: Port logic for enchantersTome
    }

    void handle_enchantedGrass(endstone::Player& p) {
        // TODO: Port logic for enchantedGrass
    }

    void handle_eyeGuardian(endstone::Player& p) {
        // TODO: Port logic for eyeGuardian
    }

    void handle_ghostCloak(endstone::Player& p) {
        // TODO: Port logic for ghostCloak
    }

    void handle_golemKit(endstone::Player& p) {
        // TODO: Port logic for golemKit
    }

    void handle_gongWeakening(endstone::Player& p) {
        // TODO: Port logic for gongWeakening
    }

    void handle_harvester(endstone::Player& p) {
        // TODO: Port logic for harvester
    }

    void handle_iceWand(endstone::Player& p) {
        // TODO: Port logic for iceWand
    }

    void handle_ironHide(endstone::Player& p) {
        // TODO: Port logic for ironHide
    }

    void handle_lightFeather(endstone::Player& p) {

        auto& server = p.getServer();
        server.dispatchCommand(server.getCommandSender(), "execute as \"" + p.getName() + "\" at @s run tp @s ^ ^1 ^4");
        server.dispatchCommand(server.getCommandSender(), "playsound artefact.lightfeather.dash @a \"" + p.getName() + "\" 1.0 1.0");
        server.dispatchCommand(server.getCommandSender(), "execute as \"" + p.getName() + "\" at @s run particle minecraft:cloud ~ ~ ~");
        // Stun nearby enemies
        server.dispatchCommand(server.getCommandSender(), "execute as \"" + p.getName() + "\" at @s run effect @e[r=3,rm=0.1] slowness 2 4 true");
        }

    void handle_lightningRod(endstone::Player& p) {
        // TODO: Port logic for lightningRod
    }

    void handle_powershaker(endstone::Player& p) {
        // TODO: Port logic for powershaker
    }

    void handle_satchelElements(endstone::Player& p) {
        // TODO: Port logic for satchelElements
    }

    void handle_satchelElixirs(endstone::Player& p) {
        // TODO: Port logic for satchelElixirs
    }

    void handle_satchelSnacks(endstone::Player& p) {
        // TODO: Port logic for satchelSnacks
    }

    void handle_scatterMines(endstone::Player& p) {
        // TODO: Port logic for scatterMines
    }

    void handle_shadowShifter(endstone::Player& p) {
        // TODO: Port logic for shadowShifter
    }

    void handle_shockPowder(endstone::Player& p) {
        // TODO: Port logic for shockPowder
    }

    void handle_soulHealer(endstone::Player& p) {
        // TODO: Port logic for soulHealer
    }

    void handle_soulLantern(endstone::Player& p) {
        // TODO: Port logic for soulLantern
    }

    void handle_spinblade(endstone::Player& p) {
        // TODO: Port logic for spinblade
    }

    void handle_swiftnessBoot(endstone::Player& p) {
        // TODO: Port logic for swiftnessBoot
    }

    void handle_totemCasting(endstone::Player& p) {
        // TODO: Port logic for totemCasting
    }

    void handle_totemShielding(endstone::Player& p) {
        // TODO: Port logic for totemShielding
    }

    void handle_totemRegeneration(endstone::Player& p) {
        // TODO: Port logic for totemRegeneration
    }

    void handle_updraftTome(endstone::Player& p) {
        // TODO: Port logic for updraftTome
    }

    void handle_vexingChant(endstone::Player& p) {
        // TODO: Port logic for vexingChant
    }

    void handle_windHorn(endstone::Player& p) {
        // TODO: Port logic for windHorn
    }

    void handle_tomeDuplication(endstone::Player& p) {
        // TODO: Port logic for tomeDuplication
    }

    void handle_loveMedallion(endstone::Player& p) {
        // TODO: Port logic for loveMedallion
    }

    void handle_totemSoulProtection(endstone::Player& p) {
        // TODO: Port logic for totemSoulProtection
    }

    void handle_tastyBone(endstone::Player& p) {
        // TODO: Port logic for tastyBone
    }

    void handle_wonderfulWheat(endstone::Player& p) {
        // TODO: Port logic for wonderfulWheat
    }

    void init() {}
}
