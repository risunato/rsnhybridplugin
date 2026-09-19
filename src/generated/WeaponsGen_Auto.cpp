#include "generated/WeaponsGen.h"
#include "HybridEngine.h"

namespace WeaponsGen {
    void trigger_ambush(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:ambush ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound random.anvil_land @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_busy_bee(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:busy_bee_spawn ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.buzzy_nest.spawn @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_chains(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:chain_connection ~ ~1 ~");
    }

    void trigger_committed(endstone::Player& p, endstone::Actor& t) {
        // No automatic translation could extract logic, requires manual port
    }

    void trigger_critical_hit(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:skull_crit ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:skull_burst ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound random.anvil_land @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_critical_hit_spooky(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:spooky_skull_crit ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:spooky_skull_burst ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound random.anvil_land @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_echo(endstone::Player& p, endstone::Actor& t) {
        // No automatic translation could extract logic, requires manual port
    }

    void trigger_enigma_resonator(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:enigma_skull_crit ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:enigma_skull_burst ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound random.anvil_land @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_exploding(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:explosion_smoke ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:explosion_dust ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound random.explode @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound weapon.enchant.exploding @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_fire_aspect(endstone::Player& p, endstone::Actor& t) {
        // No automatic translation could extract logic, requires manual port
    }

    void trigger_freezing(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:element_freeze ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.player.hurt.freeze @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] slowness 100, { amplifier: 2 } 1 true");
    }

    void trigger_freezing_spooky(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:spooky_element_freeze ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.player.hurt.freeze @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] slowness 100, { amplifier: 2 } 1 true");
    }

    void trigger_sharpened_pickaxe(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:smiting_1 ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:smiting_1 ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:smiting_1 ~ ~1 ~");
    }

    void trigger_gravity(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:gravity ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
        HybridEngine::gravityTo(t, {0,0,0}, p.getServer());
    }

    void trigger_gravity_spooky(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:spooky_gravity ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
        HybridEngine::gravityTo(t, {0,0,0}, p.getServer());
    }

    void trigger_illagers_bane(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:illagers_bane_1 ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:illagers_bane_2 ~ ~1 ~");
    }

    void trigger_leeching(endstone::Player& p, endstone::Actor& t) {
        // No automatic translation could extract logic, requires manual port
    }

    void trigger_looting(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:radiance_aura2 ~ ~1 ~");
    }

    void trigger_poison(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] fatal_poison 100 1 true");
    }

    void trigger_poison_cloud(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:poison_cloud_smoke ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:poison_cloud_swirls ~ ~1 ~");
    }

    void trigger_prospector(endstone::Player& p, endstone::Actor& t) {
        // No automatic translation could extract logic, requires manual port
    }

    void trigger_radiance(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:radiance_aura ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:radiance_aura2 ~ ~1 ~");
    }

    void trigger_rampaging(endstone::Player& p, endstone::Actor& t) {
        // No automatic translation could extract logic, requires manual port
    }

    void trigger_rushdown(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.swiftness_boot.use @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_sharpened(endstone::Player& p, endstone::Actor& t) {
        // No automatic translation could extract logic, requires manual port
    }

    void trigger_shockwave(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound weapon.enchant.swirling @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_smiting(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:smiting_1 ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:smiting_1 ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:smiting_1 ~ ~1 ~");
    }

    void trigger_soul_siphon(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:soul_siphon_rings ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound random.orb @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_stunning(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:stun_1s ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound ambient.weather.lightning.impact @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] slowness 20, { amplifier: 9, showParticles: false } 1 true");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] weakness 20, { amplifier: 9, showParticles: false } 1 true");
    }

    void trigger_swirling(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:swirling ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound weapon.enchant.swirling @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_thundering(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:lightning_wand_shock ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:lightning_wand_shock ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound weapon.enchant.thundering @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_void_strike(endstone::Player& p, endstone::Actor& t) {
        // No automatic translation could extract logic, requires manual port
    }

    void trigger_water_damage(endstone::Player& p, endstone::Actor& t) {
        // No automatic translation could extract logic, requires manual port
    }

    void trigger_weakening(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] weakness 150 1 true");
    }

    void trigger_whip(endstone::Player& p, endstone::Actor& t) {
        // No automatic translation could extract logic, requires manual port
    }

}
