#include "generated/WeaponsGen.h"
#include "HybridEngine.h"
#include <iostream>
#include <cstdlib>

namespace WeaponsGen {
    void trigger_ambush(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:ambush ~ ~1 ~");
        p.performCommand("playsound random.anvil_land @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_busyBee(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:busy_bee_spawn ~ ~1 ~");
        p.performCommand("playsound artefact.buzzy_nest.spawn @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_chains(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:chain_connection ~ ~1 ~");
    }

    void trigger_committed(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        // Processed mathematically by HybridEngine properties
    }

    void trigger_criticalHit(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:skull_crit ~ ~1 ~");
        p.performCommand("particle dungeons:skull_burst ~ ~1 ~");
        p.performCommand("playsound random.anvil_land @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_criticalHitSpooky(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:spooky_skull_crit ~ ~1 ~");
        p.performCommand("particle dungeons:spooky_skull_burst ~ ~1 ~");
        p.performCommand("playsound random.anvil_land @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_echo(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        // Processed mathematically by HybridEngine properties
    }

    void trigger_enigmaResonator(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:enigma_skull_crit ~ ~1 ~");
        p.performCommand("particle dungeons:enigma_skull_burst ~ ~1 ~");
        p.performCommand("playsound random.anvil_land @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_exploding(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:explosion_smoke ~ ~1 ~");
        p.performCommand("particle dungeons:explosion_dust ~ ~1 ~");
        p.performCommand("playsound random.explode @a ~ ~ ~ 1.0 1.0");
        p.performCommand("playsound weapon.enchant.exploding @a ~ ~ ~ 1.0 1.0");
        HybridEngine::gravityTo(t, {0,0,0}, p.getServer());
    }

    void trigger_fireAspect(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        // Processed mathematically by HybridEngine properties
    }

    void trigger_freezing(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:element_freeze ~ ~1 ~");
        p.performCommand("playsound mob.player.hurt.freeze @a ~ ~ ~ 1.0 1.0");
        p.performCommand("effect @e[r=5,rm=0.1,c=3] slowness 100, { amplifier: 2 } 1 true");
    }

    void trigger_freezingSpooky(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:spooky_element_freeze ~ ~1 ~");
        p.performCommand("playsound mob.player.hurt.freeze @a ~ ~ ~ 1.0 1.0");
        p.performCommand("effect @e[r=5,rm=0.1,c=3] slowness 100, { amplifier: 2 } 1 true");
    }

    void trigger_golemDamage(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:smiting_1 ~ ~1 ~");
        p.performCommand("particle dungeons:smiting_1 ~ ~1 ~");
        p.performCommand("particle dungeons:smiting_1 ~ ~1 ~");
    }

    void trigger_gravity(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:gravity ~ ~1 ~");
        p.performCommand("playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
        HybridEngine::gravityTo(t, {0,0,0}, p.getServer());
    }

    void trigger_gravitySpooky(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:spooky_gravity ~ ~1 ~");
        p.performCommand("playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
        HybridEngine::gravityTo(t, {0,0,0}, p.getServer());
    }

    void trigger_illagersBane(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:illagers_bane_1 ~ ~1 ~");
        p.performCommand("particle dungeons:illagers_bane_2 ~ ~1 ~");
    }

    void trigger_leeching(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        // Processed mathematically by HybridEngine properties
    }

    void trigger_looting(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:radiance_aura2 ~ ~1 ~");
    }

    void trigger_poison(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("effect @e[r=5,rm=0.1,c=3] fatal_poison 100 1 true");
    }

    void trigger_poisonCloud(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:poison_cloud_smoke ~ ~1 ~");
        p.performCommand("particle dungeons:poison_cloud_swirls ~ ~1 ~");
        HybridEngine::gravityTo(t, {0,0,0}, p.getServer());
    }

    void trigger_prospector(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        // Processed mathematically by HybridEngine properties
    }

    void trigger_radiance(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:radiance_aura ~ ~1 ~");
        p.performCommand("particle dungeons:radiance_aura2 ~ ~1 ~");
    }

    void trigger_rampaging(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        // Processed mathematically by HybridEngine properties
    }

    void trigger_rushdown(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("playsound artefact.swiftness_boot.use @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_sharpened(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        // Processed mathematically by HybridEngine properties
    }

    void trigger_shockwave(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("playsound weapon.enchant.swirling @a ~ ~ ~ 1.0 1.0");
        HybridEngine::gravityTo(t, {0,0,0}, p.getServer());
    }

    void trigger_smiting(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:smiting_1 ~ ~1 ~");
        p.performCommand("particle dungeons:smiting_1 ~ ~1 ~");
        p.performCommand("particle dungeons:smiting_1 ~ ~1 ~");
    }

    void trigger_soulSiphon(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:soul_siphon_rings ~ ~1 ~");
        p.performCommand("playsound random.orb @a ~ ~ ~ 1.0 1.0");
        p.performCommand("playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
    }

    void trigger_stunning(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:stun_1s ~ ~1 ~");
        p.performCommand("playsound ambient.weather.lightning.impact @a ~ ~ ~ 1.0 1.0");
        p.performCommand("effect @e[r=5,rm=0.1,c=3] slowness 20, { amplifier: 9, showParticles: false } 1 true");
        p.performCommand("effect @e[r=5,rm=0.1,c=3] weakness 20, { amplifier: 9, showParticles: false } 1 true");
    }

    void trigger_swirling(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:swirling ~ ~1 ~");
        p.performCommand("playsound weapon.enchant.swirling @a ~ ~ ~ 1.0 1.0");
        HybridEngine::gravityTo(t, {0,0,0}, p.getServer());
    }

    void trigger_thundering(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("particle dungeons:lightning_wand_shock ~ ~1 ~");
        p.performCommand("particle dungeons:lightning_wand_shock ~ ~1 ~");
        p.performCommand("playsound weapon.enchant.thundering @a ~ ~ ~ 1.0 1.0");
        HybridEngine::gravityTo(t, {0,0,0}, p.getServer());
    }

    void trigger_voidStrike(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        // Processed mathematically by HybridEngine properties
    }

    void trigger_waterDamage(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        // Processed mathematically by HybridEngine properties
    }

    void trigger_weakening(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        p.performCommand("effect @e[r=5,rm=0.1,c=3] weakness 150 1 true");
    }

    void trigger_whip(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        HybridEngine::gravityTo(t, {0,0,0}, p.getServer());
    }

    void handle_alylicleaver(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_anchor(endstone::Player& p, endstone::Actor& t) {
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_specialDamage(p, t);
        }
    }

    void handle_axe(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_battlestaff(endstone::Player& p, endstone::Actor& t) {
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_setScore(p, t);
        }
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_setScore(p, t);
        }
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_specialDamage(p, t);
        }
    }

    void handle_boneClub(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_brokenSawblade(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_claymore(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_cutlass(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_daggers(endstone::Player& p, endstone::Actor& t) {
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_setScore(p, t);
        }
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_specialDamage(p, t);
        }
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_specialDamage(p, t);
        }
    }

    void handle_gauntlets(endstone::Player& p, endstone::Actor& t) {
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_setScore(p, t);
        }
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_specialDamage(p, t);
        }
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_specialDamage(p, t);
        }
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_setScore(p, t);
        }
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_specialDamage(p, t);
        }
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_specialDamage(p, t);
        }
    }

    void handle_glaive(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_hammer(endstone::Player& p, endstone::Actor& t) {
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_specialDamage(p, t);
        }
    }

    void handle_longsword(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_mace(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_obsidianClaymore(endstone::Player& p, endstone::Actor& t) {
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_specialDamage(p, t);
        }
    }

    void handle_rapier(endstone::Player& p, endstone::Actor& t) {
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_setScore(p, t);
        }
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_setScore(p, t);
        }
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_specialDamage(p, t);
        }
    }

    void handle_rushSpear(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_sickles(endstone::Player& p, endstone::Actor& t) {
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_setScore(p, t);
        }
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_specialDamage(p, t);
        }
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_specialDamage(p, t);
        }
    }

    void handle_soulScythe(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_spongeStriker(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }

    void handle_voidBlades(endstone::Player& p, endstone::Actor& t) {
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_setScore(p, t);
        }
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_specialDamage(p, t);
        }
        if (((float)rand()/(float)RAND_MAX) < 0.25f) {
            trigger_specialDamage(p, t);
        }
    }

    void handle_whip(endstone::Player& p, endstone::Actor& t) {
        // No effects bound
    }


    void init() {
        std::cout << "[WeaponsGen] Secure 1:1 ported weapons logic initialized!" << std::endl;
    }
}
