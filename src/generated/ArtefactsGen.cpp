#include "generated/ArtefactsGen.h"

namespace ArtefactsGen {
    void handle_blastFungus(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound random.bow @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.blastfungus.explode @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:blast_fungus ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:blast_fungus_spore ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.blastfungus.explode @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] nausea 5 1 true");
    }

    void handle_buzzyNest(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:busy_bee_spawn ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.buzzy_nest.spawn @a ~ ~ ~ 1.0 1.0");
    }

    void handle_corruptedBeacon(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
    }

    void handle_corruptedPumpkin(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
    }

    void handle_corruptedSeeds(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.player.hurt_freeze @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:corrupted_seeds ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] fatal_poison 8 1 true");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] slowness 8 3 true");
    }

    void handle_deathCap(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound random.eat @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:death_cap_mushroom ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] strength 10 1 true");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] speed 10 1 true");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] strength 15 1 true");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] speed 15 1 true");
    }

    void handle_enchantedGrass(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.sheep.say @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.enchanted_grass.use @a ~ ~ ~ 1.0 1.0");
    }

    void handle_enchantersTome(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.enchanter.beam_on @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle minecraft:creaking_heart_trail ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:enchanted_tome ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.enchanter.enchant @a ~ ~ ~ 1.0 1.0");
    }

    void handle_eyeGuardian(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
    }

    void handle_ghostCloak(endstone::Player& p) {
        // No particle/sound logic extracted for ghostCloak
    }

    void handle_golemKit(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.golem_kit.use @a ~ ~ ~ 1.0 1.0");
    }

    void handle_gongWeakening(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound block.bell.hit @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:gong_of_weakening_1 ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:gong_of_weakening_2 ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] weakness 5 0 true");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] weakness 10 0 true");
    }

    void handle_harvester(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
    }

    void handle_iceWand(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.ice_wand @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:ice_wand ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound random.glass @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] slowness 1 8 true");
    }

    void handle_ironHide(endstone::Player& p) {
        // No particle/sound logic extracted for ironHide
    }

    void handle_lightFeather(endstone::Player& p) {
        // No particle/sound logic extracted for lightFeather
    }

    void handle_lightningRod(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:lightning_rod_area ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.lightningwand.use @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:lightning_wand_shock ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.lightningwand.strike @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
    }

    void handle_loveMedallion(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.love_medallion.fail @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.love_medallion.success @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:love_medallion_use ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:love_medallion_use_aura ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:love_medallion_aura ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:love_medallion_aura ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] speed 30 1 true");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] slowness 30 1 true");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] regeneration 2 2 true");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:love_medallion_aura ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:love_medallion_use_aura ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound random.explode @a ~ ~ ~ 1.0 1.0");
    }

    void handle_powershaker(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:powershaker_idle ~ ~1 ~");
    }

    void handle_satchelElements(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:satchel_elements_use_ice ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.player.hurt_freeze @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:satchel_elements_use_fire ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.ghast.fireball @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:satchel_elements_use_electric ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound ambient.weather.lightning.impact @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] slowness 8 2 true");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:satchel_elements_ice ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:satchel_elements_fire ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:lightning_wand_shock ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.lightningwand.strike @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:lightning_wand_shock ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.lightningwand.strike @a ~ ~ ~ 1.0 1.0");
    }

    void handle_satchelElixirs(endstone::Player& p) {
        // No particle/sound logic extracted for satchelElixirs
    }

    void handle_satchelSnacks(endstone::Player& p) {
        // No particle/sound logic extracted for satchelSnacks
    }

    void handle_scatterMines(endstone::Player& p) {
        // No particle/sound logic extracted for scatterMines
    }

    void handle_shadowShifter(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.endermen.portal @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:instant_teleport ~ ~1 ~");
    }

    void handle_shockPowder(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:shock_powder_strike ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:shock_powder ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound ambient.weather.lightning.impact @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:stun_ ~ ~1 ~");
    }

    void handle_soulHealer(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:soul_healer ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:soul_rings ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:soul2 ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:soul2 ~ ~1 ~");
    }

    void handle_soulLantern(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.soul_lantern.use @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:soul_wizard ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:soul_wizard ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:soul_wizard ~ ~1 ~");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:soul_wizard ~ ~1 ~");
    }

    void handle_spinblade(endstone::Player& p) {
        // No particle/sound logic extracted for spinblade
    }

    void handle_swiftnessBoot(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.swiftness_boot.use @a ~ ~ ~ 1.0 1.0");
    }

    void handle_tastyBone(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.tasty_bone.use @a ~ ~ ~ 1.0 1.0");
    }

    void handle_tomeDuplication(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.tome_of_duplication.use @a ~ ~ ~ 1.0 1.0");
    }

    void handle_totemCasting(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.totem_of_casting.use @a ~ ~ ~ 1.0 1.0");
    }

    void handle_totemRegeneration(endstone::Player& p) {
        // No particle/sound logic extracted for totemRegeneration
    }

    void handle_totemShielding(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] resistance 0 1 true");
    }

    void handle_totemSoulProtection(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound mob.evocation_illager.cast_spell @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.totem_of_soul_protection.use @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound random.totem @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.totem_of_soul_protection.use @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] regeneration 15 1 true");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run effect @e[r=5,rm=0.1,c=3] resistance 1 5 true");
    }

    void handle_updraftTome(endstone::Player& p) {
        // No particle/sound logic extracted for updraftTome
    }

    void handle_vexingChant(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.vexing_chant.use @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:humanoid_enchant ~ ~1 ~");
    }

    void handle_windHorn(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.wind_horn @a ~ ~ ~ 1.0 1.0");
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run particle dungeons:wind_horn ~ ~1 ~");
    }

    void handle_wonderfulWheat(endstone::Player& p) {
        p.getServer().dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound artefact.wonderful_wheat.use @a ~ ~ ~ 1.0 1.0");
    }

    void handle_artefactCooldown(endstone::Player& p) {}

    void init() {}
}
