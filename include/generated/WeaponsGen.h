#pragma once
#include <endstone/player.h>
#include <endstone/actor/actor.h>
#include <endstone/server.h>
#include <cmath>

namespace WeaponsGen {
    void init();
    void trigger_ambush(endstone::Player& p, endstone::Actor& t);
    void trigger_busyBee(endstone::Player& p, endstone::Actor& t);
    void trigger_chains(endstone::Player& p, endstone::Actor& t);
    void trigger_committed(endstone::Player& p, endstone::Actor& t);
    void trigger_criticalHit(endstone::Player& p, endstone::Actor& t);
    void trigger_criticalHitSpooky(endstone::Player& p, endstone::Actor& t);
    void trigger_echo(endstone::Player& p, endstone::Actor& t);
    void trigger_enigmaResonator(endstone::Player& p, endstone::Actor& t);
    void trigger_exploding(endstone::Player& p, endstone::Actor& t);
    void trigger_fireAspect(endstone::Player& p, endstone::Actor& t);
    void trigger_freezing(endstone::Player& p, endstone::Actor& t);
    void trigger_freezingSpooky(endstone::Player& p, endstone::Actor& t);
    void trigger_golemDamage(endstone::Player& p, endstone::Actor& t);
    void trigger_gravity(endstone::Player& p, endstone::Actor& t);
    void trigger_gravitySpooky(endstone::Player& p, endstone::Actor& t);
    void trigger_illagersBane(endstone::Player& p, endstone::Actor& t);
    void trigger_leeching(endstone::Player& p, endstone::Actor& t);
    void trigger_looting(endstone::Player& p, endstone::Actor& t);
    void trigger_poison(endstone::Player& p, endstone::Actor& t);
    void trigger_poisonCloud(endstone::Player& p, endstone::Actor& t);
    void trigger_prospector(endstone::Player& p, endstone::Actor& t);
    void trigger_radiance(endstone::Player& p, endstone::Actor& t);
    void trigger_rampaging(endstone::Player& p, endstone::Actor& t);
    void trigger_rushdown(endstone::Player& p, endstone::Actor& t);
    void trigger_sharpened(endstone::Player& p, endstone::Actor& t);
    void trigger_shockwave(endstone::Player& p, endstone::Actor& t);
    void trigger_smiting(endstone::Player& p, endstone::Actor& t);
    void trigger_soulSiphon(endstone::Player& p, endstone::Actor& t);
    void trigger_stunning(endstone::Player& p, endstone::Actor& t);
    void trigger_swirling(endstone::Player& p, endstone::Actor& t);
    void trigger_thundering(endstone::Player& p, endstone::Actor& t);
    void trigger_voidStrike(endstone::Player& p, endstone::Actor& t);
    void trigger_waterDamage(endstone::Player& p, endstone::Actor& t);
    void trigger_weakening(endstone::Player& p, endstone::Actor& t);
    void trigger_whip(endstone::Player& p, endstone::Actor& t);
    void handle_longsword(endstone::Player& p, endstone::Actor& t);
    void handle_anchor(endstone::Player& p, endstone::Actor& t);
    void handle_axe(endstone::Player& p, endstone::Actor& t);
    void handle_backstabber(endstone::Player& p, endstone::Actor& t);
    void handle_battlestaff(endstone::Player& p, endstone::Actor& t);
    void handle_bone_club(endstone::Player& p, endstone::Actor& t);
    void handle_boneClub(endstone::Player& p, endstone::Actor& t);
    void handle_broken_sawblade(endstone::Player& p, endstone::Actor& t);
    void handle_brokenSawblade(endstone::Player& p, endstone::Actor& t);
    void handle_claymore(endstone::Player& p, endstone::Actor& t);
    void handle_coral_blade(endstone::Player& p, endstone::Actor& t);
    void handle_spongeStriker(endstone::Player& p, endstone::Actor& t);
    void handle_cutlass(endstone::Player& p, endstone::Actor& t);
    void handle_daggers(endstone::Player& p, endstone::Actor& t);
    void handle_doubleaxe(endstone::Player& p, endstone::Actor& t);
    void handle_gauntlets(endstone::Player& p, endstone::Actor& t);
    void handle_glaive(endstone::Player& p, endstone::Actor& t);
    void handle_hammer(endstone::Player& p, endstone::Actor& t);
    void handle_obsidian_claymore(endstone::Player& p, endstone::Actor& t);
    void handle_obsidianClaymore(endstone::Player& p, endstone::Actor& t);
    void handle_rapier(endstone::Player& p, endstone::Actor& t);
    void handle_soul_knife(endstone::Player& p, endstone::Actor& t);
    void handle_soul_scythe(endstone::Player& p, endstone::Actor& t);
    void handle_soulScythe(endstone::Player& p, endstone::Actor& t);
    void handle_tempest_knife(endstone::Player& p, endstone::Actor& t);
    void handle_whip(endstone::Player& p, endstone::Actor& t);
    void handle_void_blades(endstone::Player& p, endstone::Actor& t);
    void handle_voidBlades(endstone::Player& p, endstone::Actor& t);
    void handle_spear(endstone::Player& p, endstone::Actor& t);
    void handle_rushSpear(endstone::Player& p, endstone::Actor& t);
    void handle_mace(endstone::Player& p, endstone::Actor& t);
    void handle_sickles(endstone::Player& p, endstone::Actor& t);
    void handle_pickaxe(endstone::Player& p, endstone::Actor& t);
    void handle_alylicleaver(endstone::Player& p, endstone::Actor& t);
}
