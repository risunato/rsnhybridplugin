#include "generated/WeaponsGen.h"

namespace WeaponsGen {
    void trigger_ambush(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:ambush ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound random.anvil_land @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_busyBee(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:busy_bee_spawn ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.buzzy_nest.spawn @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_chains(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:chain_connection ~ ~1 ~");
    }

    void trigger_committed(endstone::Player& p, endstone::Actor& t) {
        // No particle/sound logic extracted for committed
    }

    void trigger_criticalHit(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:skull_crit ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:skull_burst ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound random.anvil_land @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_criticalHitSpooky(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:spooky_skull_crit ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:spooky_skull_burst ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound random.anvil_land @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_echo(endstone::Player& p, endstone::Actor& t) {
        // No particle/sound logic extracted for echo
    }

    void trigger_enigmaResonator(endstone::Player& p, endstone::Actor& t) {
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

    void trigger_fireAspect(endstone::Player& p, endstone::Actor& t) {
        // No particle/sound logic extracted for fireAspect
    }

    void trigger_freezing(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] slowness 5 2 true");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:element_freeze ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.player.hurt.freeze @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_freezingSpooky(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] slowness 5 2 true");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:spooky_element_freeze ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.player.hurt.freeze @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_golemDamage(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:smiting_1 ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:smiting_1 ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:smiting_1 ~ ~1 ~");
    }

    void trigger_gravity(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:gravity ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_gravitySpooky(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:spooky_gravity ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_illagersBane(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:illagers_bane_1 ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:illagers_bane_2 ~ ~1 ~");
    }

    void trigger_leeching(endstone::Player& p, endstone::Actor& t) {
        // No particle/sound logic extracted for leeching
    }

    void trigger_looting(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:radiance_aura2 ~ ~1 ~");
    }

    void trigger_poison(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] fatal_poison 5 1 true");
    }

    void trigger_poisonCloud(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:poison_cloud_smoke ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:poison_cloud_swirls ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] poison 0 1 true");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] fatal_poison 0 1 true");
    }

    void trigger_prospector(endstone::Player& p, endstone::Actor& t) {
        // No particle/sound logic extracted for prospector
    }

    void trigger_radiance(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:radiance_aura ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:radiance_aura2 ~ ~1 ~");
    }

    void trigger_rampaging(endstone::Player& p, endstone::Actor& t) {
        // No particle/sound logic extracted for rampaging
    }

    void trigger_rushdown(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.swiftness_boot.use @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_sharpened(endstone::Player& p, endstone::Actor& t) {
        // No particle/sound logic extracted for sharpened
    }

    void trigger_shockwave(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound weapon.enchant.swirling @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_smiting(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:smiting_1 ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:smiting_1 ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:smiting_1 ~ ~1 ~");
    }

    void trigger_soulSiphon(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:soul_siphon_rings ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound random.orb @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_stunning(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:stun_1s ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound ambient.weather.lightning.impact @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] slowness 1 9 true");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] weakness 1 9 true");
    }

    void trigger_swirling(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:swirling ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound weapon.enchant.swirling @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_thundering(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound weapon.enchant.thundering @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:lightning_wand_shock ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:lightning_wand_shock ~ ~1 ~");
    }

    void trigger_voidStrike(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound weapon.enchant.void_strike @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_waterDamage(endstone::Player& p, endstone::Actor& t) {
        // No particle/sound logic extracted for waterDamage
    }

    void trigger_weakening(endstone::Player& p, endstone::Actor& t) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] weakness 7 1 true");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] weakness 5 1 true");
    }

    void trigger_whip(endstone::Player& p, endstone::Actor& t) {
        // No particle/sound logic extracted for whip
    }

    void handle_longsword(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_sharpened(p, t);
        }
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_criticalHit(p, t);
        }
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_criticalHitSpooky(p, t);
        }
    }

    void handle_anchor(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_poison(p, t);
        }
    }

    void handle_axe(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_fireAspect(p, t);
        }
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_stunning(p, t);
        }
    }

    void handle_backstabber(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_ambush(p, t);
        }
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_echo(p, t);
        }
    }

    void handle_battlestaff(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_exploding(p, t);
        }
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_committed(p, t);
        }
    }

    void handle_bone_club(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_boneClub(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_illagersBane(p, t);
        }
    }

    void handle_broken_sawblade(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_brokenSawblade(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_claymore(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_leeching(p, t);
        }
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_swirling(p, t);
        }
    }

    void handle_coral_blade(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_spongeStriker(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_waterDamage(p, t);
        }
    }

    void handle_cutlass(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_weakening(p, t);
        }
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_rampaging(p, t);
        }
    }

    void handle_daggers(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_freezing(p, t);
        }
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_enigmaResonator(p, t);
        }
    }

    void handle_doubleaxe(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_shockwave(p, t);
        }
    }

    void handle_gauntlets(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_glaive(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_smiting(p, t);
        }
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_poisonCloud(p, t);
        }
    }

    void handle_hammer(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_thundering(p, t);
        }
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_gravity(p, t);
        }
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_gravitySpooky(p, t);
        }
    }

    void handle_obsidian_claymore(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_obsidianClaymore(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_rapier(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_busyBee(p, t);
        }
    }

    void handle_soul_knife(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_soulSiphon(p, t);
        }
    }

    void handle_soul_scythe(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_soulScythe(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_freezingSpooky(p, t);
        }
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_chains(p, t);
        }
    }

    void handle_tempest_knife(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_rushdown(p, t);
        }
    }

    void handle_whip(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_whip(p, t);
        }
    }

    void handle_void_blades(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_voidBlades(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_voidStrike(p, t);
        }
    }

    void handle_spear(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_rushSpear(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_looting(p, t);
        }
    }

    void handle_mace(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_radiance(p, t);
        }
    }

    void handle_sickles(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_prospector(p, t);
        }
    }

    void handle_pickaxe(endstone::Player& p, endstone::Actor& t) {
        // chance execution logic wrapper
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_golemDamage(p, t);
        }
    }

    void handle_alylicleaver(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void init() {}
}
