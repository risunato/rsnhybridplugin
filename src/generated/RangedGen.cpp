#include "generated/RangedGen.h"
#include "HybridEngine.h"

namespace RangedGen {
    void handle_ancient_guardian(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:forge_core_dust ~ ~1 ~");
        (void)p.performCommand("particle dungeons:teleport_boom ~ ~1 ~");
        (void)p.performCommand("particle dungeons:teleport_boom_dust ~ ~1 ~");
        (void)p.performCommand("particle dungeons:poison_cloud_smoke ~ ~1 ~");
        (void)p.performCommand("particle dungeons:poison_cloud_swirls ~ ~1 ~");
        (void)p.performCommand("particle dungeons:teleport_in ~ ~1 ~");
        (void)p.performCommand("particle dungeons:guardian_spawn ~ ~1 ~");
        (void)p.performCommand("particle dungeons:guardian_spawn ~ ~1 ~");
        (void)p.performCommand("particle dungeons:teleport_out ~ ~1 ~");
        (void)p.performCommand("particle dungeons:guardian_spawn ~ ~1 ~");
        (void)p.performCommand("particle dungeons:teleport_out ~ ~1 ~");
        (void)p.performCommand("playsound mob.biomine.splash @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.ghast.fireball @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.explode @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.evocation_illager.prepare_summon @a ~ ~ ~ 1.0 1.0");
    }

    void handle_arch_illager(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:teleport_out ~ ~1 ~");
        (void)p.performCommand("particle dungeons:enchanted_tome ~ ~1 ~");
        (void)p.performCommand("particle dungeons:teleport_in ~ ~1 ~");
        (void)p.performCommand("particle dungeons:enchanted_tome ~ ~1 ~");
        (void)p.performCommand("particle dungeons:guardian_spawn ~ ~1 ~");
        (void)p.performCommand("particle dungeons:guardian_spawn ~ ~1 ~");
        (void)p.performCommand("particle dungeons:guardian_spawn ~ ~1 ~");
        (void)p.performCommand("particle minecraft:creaking_heart_trail ~ ~1 ~");
        (void)p.performCommand("particle dungeons:enchanted_tome ~ ~1 ~");
        (void)p.performCommand("playsound mob.arch_illager.magic_hit @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.arch_illager.magic_hit @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.enchanter.beam_on @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.enchanter.cast @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.enchanter.enchant @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.arch_illager.hurt @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.vindicator.death @a ~ ~ ~ 1.0 1.0");
    }

    void handle_arrow_effects(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:firework_arrow_2 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:firework_arrow_1 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:firework_arrow_0 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:lightning_wand_shock ~ ~1 ~");
        (void)p.performCommand("particle dungeons:lightning_wand_shock ~ ~1 ~");
        (void)p.performCommand("playsound random.explode @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound firework.twinkle @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound weapon.enchant.thundering @a ~ ~ ~ 1.0 1.0");
    }

    void handle_bubble_bow(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:bubble_effect_new ~ ~1 ~");
        (void)p.performCommand("playsound bubble_bow.spawn @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound bubble_bow.pop @a ~ ~ ~ 1.0 1.0");
    }

    void handle_burning(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:satchel_elements_use_fire ~ ~1 ~");
    }

    void handle_chains(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:chain_connection ~ ~1 ~");
    }

    void handle_chilling(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:satchel_elements_ice ~ ~1 ~");
        (void)p.performCommand("particle dungeons:satchel_elements_use_ice ~ ~1 ~");
    }

    void handle_corrupted_cauldron(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:wretched_wraith_fire_smoke ~ ~1 ~");
        (void)p.performCommand("particle dungeons:teleport_out ~ ~1 ~");
        (void)p.performCommand("particle dungeons:teleport_in ~ ~1 ~");
        (void)p.performCommand("particle dungeons:teleport_out ~ ~1 ~");
        (void)p.performCommand("playsound mob.wraith.fire @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound artefact.shadow_break @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
    }

    void handle_critical_hit(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:skull_crit ~ ~1 ~");
        (void)p.performCommand("particle dungeons:skull_burst ~ ~1 ~");
        (void)p.performCommand("playsound random.anvil_land @a ~ ~ ~ 1.0 1.0");
    }

    void handle_crossbow_loading(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("playsound crossbow.loading.start @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound crossbow.loading.middle @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound crossbow.loading.end @a ~ ~ ~ 1.0 1.0");
    }

    void handle_electrified(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:lightning_wand_shock ~ ~1 ~");
        (void)p.performCommand("particle dungeons:satchel_elements_use_electric ~ ~1 ~");
        (void)p.performCommand("playsound weapon.enchant.thundering @a ~ ~ ~ 1.0 1.0");
    }

    void handle_enchanted_mobs(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:enchanted_sparks ~ ~1 ~");
        (void)p.performCommand("particle dungeons:enchanted_smoke ~ ~1 ~");
    }

    void handle_enchanter(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:guardian_spawn ~ ~1 ~");
        (void)p.performCommand("particle minecraft:creaking_heart_trail ~ ~1 ~");
        (void)p.performCommand("particle dungeons:enchanted_tome ~ ~1 ~");
        (void)p.performCommand("playsound mob.enchanter.beam_on @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.enchanter.cast @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.enchanter.enchant @a ~ ~ ~ 1.0 1.0");
    }

    void handle_endersent(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:endersent_teleport_boom ~ ~1 ~");
        (void)p.performCommand("particle dungeons:endersent_teleport_boom_dust ~ ~1 ~");
        (void)p.performCommand("particle dungeons:teleport_out ~ ~1 ~");
        (void)p.performCommand("particle dungeons:teleport_in ~ ~1 ~");
        (void)p.performCommand("particle dungeons:guardian_spawn ~ ~1 ~");
        (void)p.performCommand("playsound mob.wraith.teleport @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.wraith.teleport @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.explode @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound armour.teleport.explode @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.wraith.teleport @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.wraith.teleport @a ~ ~ ~ 1.0 1.0");
    }

    void handle_enigma_resonator(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:enigma_skull_crit ~ ~1 ~");
        (void)p.performCommand("particle dungeons:enigma_skull_burst ~ ~1 ~");
        (void)p.performCommand("playsound random.anvil_land @a ~ ~ ~ 1.0 1.0");
    }

    void handle_fire_trail(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:wretched_wraith_fire_smoke ~ ~1 ~");
        (void)p.performCommand("playsound mob.wraith.fire @a ~ ~ ~ 1.0 1.0");
    }

    void handle_freezing(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:satchel_elements_ice ~ ~1 ~");
        (void)p.performCommand("playsound mob.player.hurt_freeze @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("effect @e[r=5,rm=0.1,c=3] slowness 120, { amplifier: 1 } 1 true");
    }

    void handle_freezing_strong(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:stun_1s ~ ~1 ~");
        (void)p.performCommand("particle dungeons:webbed_bow ~ ~1 ~");
        (void)p.performCommand("particle dungeons:element_freeze ~ ~1 ~");
        (void)p.performCommand("playsound ambient.weather.lightning.impact @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.player.hurt.freeze @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.player.hurt.freeze @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("effect @e[r=5,rm=0.1,c=3] slowness 20, { amplifier: 60 } 1 true");
        (void)p.performCommand("effect @e[r=5,rm=0.1,c=3] weakness 20, { amplifier: 60 } 1 true");
        (void)p.performCommand("effect @e[r=5,rm=0.1,c=3] slowness 60, { amplifier: 2 } 1 true");
    }

    void handle_fuse_shot(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:generic_boom ~ ~1 ~");
        (void)p.performCommand("particle dungeons:generic_boom_dust ~ ~1 ~");
        (void)p.performCommand("playsound random.explode @a ~ ~ ~ 1.0 1.0");
    }

    void handle_gravity(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:ranged_gravity ~ ~1 ~");
        (void)p.performCommand("playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
    }

    void handle_gravity_pulse(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:ranged_gravity ~ ~1 ~");
        (void)p.performCommand("playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
    }

    void handle_heal_allies(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle minecraft:creaking_heart_trail ~ ~1 ~");
        (void)p.performCommand("particle dungeons:radiance_aura2 ~ ~1 ~");
    }

    void handle_heart_of_ender(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:heart_of_ender_dangerous_area1 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:heart_of_ender_dangerous_area2 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:obsidian_lightning_strike ~ ~1 ~");
        (void)p.performCommand("particle dungeons:endersent_teleport_boom ~ ~1 ~");
        (void)p.performCommand("particle dungeons:endersent_teleport_boom_dust ~ ~1 ~");
        (void)p.performCommand("particle dungeons:heart_of_ender_beam_trail ~ ~1 ~");
        (void)p.performCommand("playsound weapon.enchant.exploding @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.explode @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound armour.teleport.explode @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.heart_of_ender.shoot_laser @a ~ ~ ~ 1.0 1.0");
    }

    void handle_hovering_inferno(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:wildfire_flames ~ ~1 ~");
        (void)p.performCommand("particle dungeons:wildfire_flames ~ ~1 ~");
        (void)p.performCommand("particle dungeons:wildfire_flames ~ ~1 ~");
        (void)p.performCommand("particle dungeons:wildfire_flames ~ ~1 ~");
        (void)p.performCommand("playsound random.explode @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.evocation_illager.prepare_summon @a ~ ~ ~ 1.0 1.0");
    }

    void handle_icy_creeper(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:ice_creeper_snow_aura ~ ~1 ~");
        (void)p.performCommand("particle dungeons:frost_boom ~ ~1 ~");
        (void)p.performCommand("particle dungeons:charged_frost_boom ~ ~1 ~");
    }

    void handle_illusioner(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:illusioner_spawn_clone ~ ~1 ~");
        (void)p.performCommand("particle dungeons:illusioner_despawn_clone ~ ~1 ~");
        (void)p.performCommand("particle dungeons:illusioner_despawn_clone ~ ~1 ~");
        (void)p.performCommand("playsound mob.illusioner.clone @a ~ ~ ~ 1.0 1.0");
    }

    void handle_item_glow(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:unique_item_glow ~ ~1 ~");
        (void)p.performCommand("particle dungeons:seasonal_item_glow ~ ~1 ~");
    }

    void handle_jungle_abomination(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle minecraft:critical_hit_emitter ~ ~1 ~");
        (void)p.performCommand("particle dungeons:abomination_slam_1 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:abomination_slam_2 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:abomination_warn_1 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:abomination_warn_2 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:abomination_warn_1 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:abomination_warn_2 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:abomination_roar ~ ~1 ~");
        (void)p.performCommand("particle dungeons:teleport_out ~ ~1 ~");
        (void)p.performCommand("particle dungeons:teleport_in ~ ~1 ~");
        (void)p.performCommand("playsound random.break @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
    }

    void handle_mooshroom_monstrosity(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:mooshroom_cracks ~ ~1 ~");
        (void)p.performCommand("particle dungeons:lava_particle_mooshroom ~ ~1 ~");
        (void)p.performCommand("particle dungeons:mooshroom_eruption_1 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:mooshroom_eruption_2 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:mooshroom_eruption_3 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:forge_core_dust ~ ~1 ~");
        (void)p.performCommand("particle dungeons:mooshroom_cracks_revert ~ ~1 ~");
        (void)p.performCommand("particle minecraft:critical_hit_emitter ~ ~1 ~");
        (void)p.performCommand("particle dungeons:mooshroom_eruption_3 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:mushroom_rocket_explosion ~ ~1 ~");
        (void)p.performCommand("particle dungeons:forge_core_dust ~ ~1 ~");
        (void)p.performCommand("particle dungeons:redstone_eruption_3 ~ ~1 ~");
        (void)p.performCommand("playsound mob.ghast.fireball @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.fuse @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.ghast.fireball @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.ghast.fireball @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.explode @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.break @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.explode @a ~ ~ ~ 1.0 1.0");
    }

    void handle_nameless_one(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:nameless_teleport_out ~ ~1 ~");
        (void)p.performCommand("particle dungeons:nameless_teleport_in ~ ~1 ~");
        (void)p.performCommand("particle dungeons:nameless_teleport_out ~ ~1 ~");
        (void)p.performCommand("particle dungeons:nameless_teleport_out ~ ~1 ~");
        (void)p.performCommand("playsound mob.nameless_one.teleport_out @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.nameless_one.teleport_in @a ~ ~ ~ 1.0 1.0");
    }

    void handle_necromancer(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:necromancer_zombie_spawn ~ ~1 ~");
        (void)p.performCommand("particle dungeons:wraith_teleport_out ~ ~1 ~");
        (void)p.performCommand("particle dungeons:necromancer_zombie_spawn ~ ~1 ~");
        (void)p.performCommand("particle dungeons:wraith_teleport_out ~ ~1 ~");
        (void)p.performCommand("playsound mob.zombie.death @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.evocation_illager.prepare_summon @a ~ ~ ~ 1.0 1.0");
    }

    void handle_obsidian_monstrosity(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:obsidian_lightning_strike ~ ~1 ~");
        (void)p.performCommand("particle dungeons:endersent_teleport_boom ~ ~1 ~");
        (void)p.performCommand("particle dungeons:endersent_teleport_boom_dust ~ ~1 ~");
        (void)p.performCommand("particle dungeons:obsidian_shockwave ~ ~1 ~");
        (void)p.performCommand("particle dungeons:endersent_teleport_boom ~ ~1 ~");
        (void)p.performCommand("particle dungeons:endersent_teleport_boom_dust ~ ~1 ~");
        (void)p.performCommand("particle minecraft:critical_hit_emitter ~ ~1 ~");
        (void)p.performCommand("particle dungeons:obsidian_shockwave ~ ~1 ~");
        (void)p.performCommand("particle dungeons:guardian_spawn ~ ~1 ~");
        (void)p.performCommand("particle dungeons:guardian_spawn ~ ~1 ~");
        (void)p.performCommand("playsound weapon.enchant.exploding @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.explode @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound armour.teleport.explode @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.explode @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound weapon.enchant.exploding @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.break @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
    }

    void handle_poison_cloud(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:enemy_poison_cloud_smoke ~ ~1 ~");
        (void)p.performCommand("particle dungeons:enemy_poison_cloud_swirls ~ ~1 ~");
    }

    void handle_poison_trail(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:poison_trail_bow ~ ~1 ~");
        (void)p.performCommand("effect @e[r=5,rm=0.1,c=3] fatal_poison 60, { amplifier: 2 } 1 true");
    }

    void handle_radiance(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:radiance_aura ~ ~1 ~");
        (void)p.performCommand("particle dungeons:radiance_aura2 ~ ~1 ~");
    }

    void handle_raid_mob(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound armor.equip_iron @a ~ ~ ~ 1.0 1.0");
    }

    void handle_redstone_monstrosity(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:redstone_cracks ~ ~1 ~");
        (void)p.performCommand("particle minecraft:lava_particle ~ ~1 ~");
        (void)p.performCommand("particle dungeons:redstone_eruption_1 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:redstone_eruption_2 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:redstone_eruption_3 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:forge_core_dust ~ ~1 ~");
        (void)p.performCommand("particle dungeons:redstone_cracks_revert ~ ~1 ~");
        (void)p.performCommand("particle dungeons:scatter_mine_boom ~ ~1 ~");
        (void)p.performCommand("particle minecraft:critical_hit_emitter ~ ~1 ~");
        (void)p.performCommand("particle dungeons:redstone_eruption_3 ~ ~1 ~");
        (void)p.performCommand("playsound mob.ghast.fireball @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.fuse @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.ghast.fireball @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.ghast.fireball @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.explode @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.explode @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound weapon.enchant.exploding @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.break @a ~ ~ ~ 1.0 1.0");
    }

    void handle_rush(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("playsound armour.rush.activate @a ~ ~ ~ 1.0 1.0");
    }

    void handle_shadow_form(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:shadow_break ~ ~1 ~");
        (void)p.performCommand("particle dungeons:potion_ambient ~ ~1 ~");
        (void)p.performCommand("playsound artefact.shadow_break @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound artefact.shadow_break @a ~ ~ ~ 1.0 1.0");
    }

    void handle_shadow_shot(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:elixir_shadow ~ ~1 ~");
        (void)p.performCommand("particle dungeons:elixir_shadow ~ ~1 ~");
    }

    void handle_shadow_shot_spooky(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:elixir_shadow_spooky ~ ~1 ~");
        (void)p.performCommand("particle dungeons:elixir_shadow_spooky ~ ~1 ~");
    }

    void handle_shockwave(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle minecraft:critical_hit_emitter ~ ~1 ~");
        (void)p.performCommand("playsound random.break @a ~ ~ ~ 1.0 1.0");
    }

    void handle_snareling(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("playsound mob.snareling.teleport @a ~ ~ ~ 1.0 1.0");
    }

    void handle_sparkler_loot(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:firework_arrow ~ ~1 ~");
        (void)p.performCommand("particle dungeons:sparkler_hit ~ ~1 ~");
        (void)p.performCommand("playsound random.birthday @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.birthday @a ~ ~ ~ 1.0 1.0");
    }

    void handle_spooky_monstrosity(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:spooky_cracks ~ ~1 ~");
        (void)p.performCommand("particle dungeons:lava_particle_soul ~ ~1 ~");
        (void)p.performCommand("particle dungeons:spooky_eruption_1 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:spooky_eruption_2 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:spooky_eruption_3 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:spooky_forge_core_dust ~ ~1 ~");
        (void)p.performCommand("particle dungeons:spooky_cracks_revert ~ ~1 ~");
        (void)p.performCommand("particle minecraft:critical_hit_emitter ~ ~1 ~");
        (void)p.performCommand("particle dungeons:spooky_eruption_3 ~ ~1 ~");
        (void)p.performCommand("playsound mob.ghast.fireball @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.fuse @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.ghast.fireball @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.ghast.fireball @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.explode @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.explode @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound weapon.enchant.exploding @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound random.break @a ~ ~ ~ 1.0 1.0");
    }

    void handle_target_dummy(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("effect @e[r=5,rm=0.1,c=3] regeneration 10, { amplifier: 5, showParticles: false } 1 true");
    }

    void handle_tempest_golem(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:tempest_zap_circle ~ ~1 ~");
        (void)p.performCommand("particle dungeons:tempest_zap_warn ~ ~1 ~");
        (void)p.performCommand("particle dungeons:lightning_wand_shock ~ ~1 ~");
        (void)p.performCommand("particle dungeons:tempest_golem_zap ~ ~1 ~");
        (void)p.performCommand("playsound block.bell.hit @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound artefact.lightningwand.strike @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound weapon.enchant.thundering @a ~ ~ ~ 1.0 1.0");
    }

    void handle_tempest_golem_totem(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle minecraft:wind_explosion_emitter ~ ~1 ~");
        (void)p.performCommand("playsound breeze_wind_charge.burst @a ~ ~ ~ 1.0 1.0");
    }

    void handle_tempo_theft(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("playsound artefact.swiftness_boot.use @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("effect @e[r=5,rm=0.1,c=3] slowness 60, { amplifier: 0 } 1 true");
        (void)p.performCommand("effect @e[r=5,rm=0.1,c=3] slowness slowTime, { amplifier: slowLevel } 1 true");
    }

    void handle_thorns(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("playsound damage.thorns @a ~ ~ ~ 1.0 1.0");
    }

    void handle_unchanting(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:illagers_bane_1 ~ ~1 ~");
        (void)p.performCommand("particle dungeons:illagers_bane_2 ~ ~1 ~");
    }

    void handle_voided_effect(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:voided_smoke ~ ~1 ~");
        (void)p.performCommand("particle dungeons:voided_stars ~ ~1 ~");
    }

    void handle_void_strike(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("playsound weapon.enchant.void_strike @a ~ ~ ~ 1.0 1.0");
    }

    void handle_watchling(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:teleport_out ~ ~1 ~");
        (void)p.performCommand("particle dungeons:instant_teleport ~ ~1 ~");
        (void)p.performCommand("particle dungeons:teleport_in ~ ~1 ~");
        (void)p.performCommand("playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
    }

    void handle_weakening(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("effect @e[r=5,rm=0.1,c=3] weakness 200, { amplifier: 1 } 1 true");
    }

    void handle_wraith(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:wraith_teleport_out ~ ~1 ~");
        (void)p.performCommand("particle dungeons:wraith_teleport_in ~ ~1 ~");
        (void)p.performCommand("particle dungeons:wraith_fire_smoke ~ ~1 ~");
        (void)p.performCommand("playsound mob.wraith.teleport @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.wraith.teleport @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.wraith.fire @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.wraith.fire @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.wraith.fire @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.wraith.fire @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.wraith.fire @a ~ ~ ~ 1.0 1.0");
    }

    void handle_wretched_wraith(endstone::Player& p, endstone::Actor& t) {
        if (!p.isValid() || !t.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);

        (void)p.performCommand("particle dungeons:teleport_out ~ ~1 ~");
        (void)p.performCommand("particle dungeons:teleport_in ~ ~1 ~");
        (void)p.performCommand("particle dungeons:wraith_ice_burst ~ ~1 ~");
        (void)p.performCommand("particle dungeons:wraith_teleport_out ~ ~1 ~");
        (void)p.performCommand("particle dungeons:wraith_teleport_in ~ ~1 ~");
        (void)p.performCommand("particle dungeons:wretched_wraith_fire_smoke ~ ~1 ~");
        (void)p.performCommand("playsound mob.wraith.teleport @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.wretched_wraith.bullethell @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.wraith.teleport @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.wraith.teleport @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.wraith.teleport @a ~ ~ ~ 1.0 1.0");
        (void)p.performCommand("playsound mob.wraith.fire @a ~ ~ ~ 1.0 1.0");
    }

}
