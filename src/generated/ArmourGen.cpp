#include "generated/ArmourGen.h"
#include <string>

namespace ArmourGen {
    void handle_dark(endstone::Player& p) {
        // TODO: Port logic for dark
    }

    void handle_titansShroud(endstone::Player& p) {
        // TODO: Port logic for titansShroud
    }

    void handle_thief(endstone::Player& p) {
        // TODO: Port logic for thief
    }

    void handle_spider(endstone::Player& p) {
        // TODO: Port logic for spider
    }

    void handle_grim(endstone::Player& p) {
        // TODO: Port logic for grim
    }

    void handle_wither(endstone::Player& p) {
        // TODO: Port logic for wither
    }

    void handle_spookyGourdian(endstone::Player& p) {

        auto& server = p.getServer();
        (void)server.dispatchCommand(p, "effect \"" + p.getName() + "\" resistance 2 1 true");
        (void)server.dispatchCommand(p, "effect \"" + p.getName() + "\" fire_resistance 2 1 true");
        }

    void handle_ghostly(endstone::Player& p) {
        // TODO: Port logic for ghostly
    }

    void handle_ghostKindler(endstone::Player& p) {
        // TODO: Port logic for ghostKindler
    }

    void handle_cloakedSkull(endstone::Player& p) {
        // TODO: Port logic for cloakedSkull
    }

    void handle_wolf(endstone::Player& p) {
        // TODO: Port logic for wolf
    }

    void handle_blackWolf(endstone::Player& p) {
        // TODO: Port logic for blackWolf
    }

    void handle_fox(endstone::Player& p) {
        // TODO: Port logic for fox
    }

    void handle_snow(endstone::Player& p) {
        // TODO: Port logic for snow
    }

    void handle_frost(endstone::Player& p) {
        // TODO: Port logic for frost
    }

    void handle_plate(endstone::Player& p) {
        // TODO: Port logic for plate
    }

    void handle_fullMetal(endstone::Player& p) {
        // TODO: Port logic for fullMetal
    }

    void handle_cauldron(endstone::Player& p) {
        // TODO: Port logic for cauldron
    }

    void handle_emberRobes(endstone::Player& p) {
        // TODO: Port logic for emberRobes
    }

    void handle_ocelot(endstone::Player& p) {
        // TODO: Port logic for ocelot
    }

    void handle_shadowWalker(endstone::Player& p) {
        // TODO: Port logic for shadowWalker
    }

    void handle_rootRot(endstone::Player& p) {
        // TODO: Port logic for rootRot
    }

    void handle_blackSpot(endstone::Player& p) {
        // TODO: Port logic for blackSpot
    }

    void handle_emerald(endstone::Player& p) {
        // TODO: Port logic for emerald
    }

    void handle_opulent(endstone::Player& p) {
        // TODO: Port logic for opulent
    }

    void handle_gildedGlory(endstone::Player& p) {
        // TODO: Port logic for gildedGlory
    }

    void handle_turtle(endstone::Player& p) {
        // TODO: Port logic for turtle
    }

    void handle_nimbleTurtle(endstone::Player& p) {
        // TODO: Port logic for nimbleTurtle
    }

    void handle_squid(endstone::Player& p) {
        // TODO: Port logic for squid
    }

    void handle_glowSquid(endstone::Player& p) {
        // TODO: Port logic for glowSquid
    }

    void handle_sprout(endstone::Player& p) {
        // TODO: Port logic for sprout
    }

    void handle_livingVines(endstone::Player& p) {
        // TODO: Port logic for livingVines
    }

    void handle_goldenPiglin(endstone::Player& p) {
        // TODO: Port logic for goldenPiglin
    }

    void handle_ender(endstone::Player& p) {
        // TODO: Port logic for ender
    }

    void handle_entertainersGarb(endstone::Player& p) {
        // TODO: Port logic for entertainersGarb
    }

    void handle_troubadour(endstone::Player& p) {
        // TODO: Port logic for troubadour
    }

    void handle_shulker(endstone::Player& p) {
        // TODO: Port logic for shulker
    }

    void handle_sturdyShulker(endstone::Player& p) {
        // TODO: Port logic for sturdyShulker
    }

    void handle_teleportationRobes(endstone::Player& p) {
        // TODO: Port logic for teleportationRobes
    }

    void handle_unstableRobes(endstone::Player& p) {
        // TODO: Port logic for unstableRobes
    }

    void handle_champions(endstone::Player& p) {
        // TODO: Port logic for champions
    }

    void handle_heros(endstone::Player& p) {
        // TODO: Port logic for heros
    }

    void handle_phantom(endstone::Player& p) {
        // TODO: Port logic for phantom
    }

    void handle_frostBite(endstone::Player& p) {
        // TODO: Port logic for frostBite
    }

    void handle_beenest(endstone::Player& p) {
        // TODO: Port logic for beenest
    }

    void handle_beehive(endstone::Player& p) {
        // TODO: Port logic for beehive
    }

    void handle_souldancer(endstone::Player& p) {
        // TODO: Port logic for souldancer
    }

    void init() {}
}
