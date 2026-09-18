#include "generated/ArtefactsGen.h"

namespace ArtefactsGen {
    // ==========================================
    // Transpiled from: components\artefacts.js
    // ==========================================
    // // import "./artefacts/artefactCooldown.js";
    // // import "./artefacts/blastFungus.js";
    // // import "./artefacts/buzzyNest.js";
    // // import "./artefacts/corruptedBeacon.js";
    // // import "./artefacts/corruptedPumpkin.js";
    // // import "./artefacts/corruptedSeeds.js";
    // // import "./artefacts/deathCap.js";
    // // import "./artefacts/enchantersTome.js";
    // // import "./artefacts/enchantedGrass.js";
    // // import "./artefacts/eyeGuardian.js";
    // // import "./artefacts/ghostCloak.js";
    // // import "./artefacts/golemKit.js";
    // // import "./artefacts/gongWeakening.js";
    // // import "./artefacts/harvester.js";
    // // import "./artefacts/iceWand.js";
    // // import "./artefacts/ironHide.js";
    // // import "./artefacts/lightFeather.js";
    // // import "./artefacts/lightningRod.js";
    // // import "./artefacts/powershaker.js";
    // // import "./artefacts/satchelElements.js";
    // // import "./artefacts/satchelElixirs.js";
    // // import "./artefacts/satchelSnacks.js";
    // // import "./artefacts/scatterMines.js";
    // // import "./artefacts/shadowShifter.js";
    // // import "./artefacts/shockPowder.js";
    // // import "./artefacts/soulHealer.js";
    // // import "./artefacts/soulLantern.js";
    // // import "./artefacts/spinblade.js";
    // // import "./artefacts/swiftnessBoot.js";
    // // import "./artefacts/totemCasting.js";
    // // import "./artefacts/totemShielding.js";
    // // import "./artefacts/totemRegeneration.js";
    // // import "./artefacts/updraftTome.js";
    // // import "./artefacts/vexingChant.js";
    // // import "./artefacts/windHorn.js";
    // //eugh, this one..
    // // import "./artefacts/tomeDuplication.js";
    // ///..
    // // import "./artefacts/loveMedallion.js";
    // // import "./artefacts/totemSoulProtection.js";
    // // import "./artefacts/tastyBone.js";
    // // import "./artefacts/wonderfulWheat.js";

    // ==========================================
    // Transpiled from: components\artefacts\artefactCooldown.js
    // ==========================================
    // // import {
    //   system
    // } from "@minecraft/server";
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent("dungeons:artefact_cooldown", {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto cd = item.getComponent('cooldown');
    //       auto mult = 1;
    // 
    //       if (!item.hasTag('dungeons:tome_of_duplication')) {
    //         for (auto tag of player.getTags()) {
    //           if (tag.substring(0, 9) === 'tod:used_') {
    //             player.removeTag(tag)
    //           }
    //         }
    //         auto tagId = item.typeId.replace("dungeons:rare_", "tod:used_")
    //         tagId = tagId.replace("dungeons:", "tod:used_")
    //         player.addTag(tagId);
    //       }
    // 
    //       if (isWearingSet(player, "dungeons:evocation_robes")) {
    //         mult = mult * 0.7;
    //       }
    // 
    //       if (isWearingSet(player, "dungeons:guard_armour")) {
    //         mult = mult * 0.8;
    //       }
    // 
    //       auto totemCasting = player.dimension.getEntities({
    //         location: player.location,
    //         maxDistance: 5,
    //         families: ['totem_casting']
    //       });
    // 
    //       if (totemCasting.length == 1) {
    //         mult = mult * 0.3;
    //       } else if (totemCasting.length > 1) {
    //         mult = mult * (1 / (totemCasting.length * 2.5))
    //       }
    // 
    //       if (mult < 0.1) {
    //         mult = 0.1;
    //       }
    // 
    //       player.startItemCooldown(cd.cooldownCategory, std::floor(cd.cooldownTicks * mult));
    // 
    // 
    // 
    //       if (player.hasTag('dungeons:debug')) {
    //         player.sendMessage([{ text: "You have used: " }, { translate: item.localizationKey }]);
    //         player.sendMessage(`Cooldown :§e${cd.cooldownTicks / 20}s`);
    //         if (mult !== 1) {
    //           player.sendMessage(`Modified Cooldown :§e${std::floor(cd.cooldownTicks * mult) / 20}s`);
    //           player.sendMessage(`Cooldown Modifier :§b${mult}x`);
    //         }
    //       }
    //     }
    //   })
    // })

    // ==========================================
    // Transpiled from: components\artefacts\blastFungus.js
    // ==========================================
    // // import {
    //   world,
    //   system,
    //   EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget, specialDamage } from "main.js";
    // 
    // void clamp(val, min, max) {
    //   if (val < min) return min
    //   if (val > max) return max
    //   return val
    // }
    // 
    // void shoot(player) {
    //   auto direction = player.getViewDirection();
    //   player.dimension.playSound("random.bow", player.location, { pitch: 0.25 })
    //   auto ammo = player.dimension.spawnEntity('dungeons:blast_fungus', player.getHeadLocation());
    //   auto proj = ammo.getComponent('projectile');
    //   proj.owner = player;
    //   auto xOffset = clamp(direction.x + ((((float)rand()/RAND_MAX)() / 3) - 0.16), -1, 1)
    //   auto yOffset = clamp(direction.y + ((((float)rand()/RAND_MAX)() / 4)), -0.7, 1)
    //   auto zOffset = clamp(direction.z + ((((float)rand()/RAND_MAX)() / 2) - 0.16), -1, 1)
    //   direction = { x: xOffset, y: yOffset, z: zOffset }
    //   proj.shoot(direction)
    // }
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent("dungeons:blast_fungus", {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_blast_fungus')) return;
    //       }
    // 
    //       player.dimension.playSound("artefact.blastfungus.explode", player.location, { volume: 2, pitch: 0.3 })
    //       shoot(player)
    //       // system.runTimeout(() => {
    //         shoot(player)
    //         // system.runTimeout(() => {
    //           shoot(player)
    //           // system.runTimeout(() => {
    //             shoot(player)
    //             // system.runTimeout(() => {
    //               shoot(player)
    //             }, 3)
    //           }, 3)
    //         }, 3)
    //       }, 3)
    //     }
    //   });
    // 
    // });
    // 
    // 
    // 
    // void explosion(loc, dim, owner, entity) {
    //   dim.spawnParticle("dungeons:blast_fungus", loc)
    //   dim.spawnParticle("dungeons:blast_fungus_spore", loc)
    //   dim.playSound("artefact.blastfungus.explode", loc, { volume: 2, pitch: 1 })
    //   auto targets = dim.getEntities({ location: loc, maxDistance: 4 })
    //   for (auto target of targets) {
    //     if (isValidTarget(target) && target !== owner) {
    //       auto damage = specialDamage(owner, target, 11, EntityDamageCause.entityExplosion, ["artefact"])
    //       if (damage == true) {
    //         target.addEffect("nausea", 100)
    //       }
    //     }
    //   }
    //   // system.run(() => {
    //     entity.remove()
    //   })
    // }
    // 
    // // world.afterEvents.projectileHitBlock.subscribe((e) => {
    //   auto entity = e.projectile;
    //   auto loc = e.location;
    //   auto dim = e.dimension;
    //   if (entity.typeId == "dungeons:blast_fungus") {
    //     auto proj = entity.getComponent("minecraft:projectile")
    //     auto owner = proj.owner;
    //     if (!owner) return;
    //     explosion(loc, dim, owner, entity)
    //   }
    // })
    // // world.afterEvents.projectileHitEntity.subscribe((e) => {
    //   auto entity = e.projectile;
    //   auto hit = e.getEntityHit().entity
    //   if (!hit) return;
    //   if (!hit.isValid) return;
    //   auto dim = hit.dimension
    //   auto loc = e.location;
    //   if (entity.typeId == "dungeons:blast_fungus") {
    //     auto proj = entity.getComponent("minecraft:projectile")
    //     auto owner = proj.owner;
    //     if (!owner) return;
    //     explosion(loc, dim, owner, entity)
    //   }
    // })

    // ==========================================
    // Transpiled from: components\artefacts\buzzyNest.js
    // ==========================================
    // // import {
    //   world,
    //   system
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:buzzy_nest', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto dim = player.dimension;
    //       auto loc = player.location
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_buzzy_nest')) return;
    //       }
    // 
    //       dim.playSound('jump.stone', loc);
    //       auto spawnLoc = dim.getTopmostBlock({ x: loc.x, z: loc.z }, loc.y)
    //       if (spawnLoc == undefined) {
    //         spawnLoc = loc
    //       } else {
    //         spawnLoc = spawnLoc.above()
    //       }
    //       if (spawnLoc == undefined) spawnLoc = loc
    //       if (spawnLoc.y + 8 < loc.y) spawnLoc = { x: loc.x, y: loc.y - 4, z: loc.z }
    //       auto totem = player.dimension.spawnEntity('dungeons:buzzy_nest', { x: loc.x, y: spawnLoc.y, z: loc.z });
    //       auto tameable = totem.getComponent('minecraft:tameable')
    //       tameable.tame(player);
    //     }
    //   });
    // 
    // });
    // 
    // // world.afterEvents.dataDrivenEntityTrigger.subscribe((event) => {
    //   auto mob = event.entity;
    //   auto eventId = event.eventId;
    //   if (eventId !== 'dungeons:spawn_bee') {
    //     return;
    //   }
    //   auto owner = mob.getComponent('minecraft:tameable').tamedToPlayer;
    //   if (!owner) return;
    // 
    //   auto bee = mob.dimension.spawnEntity('dungeons:pet_bee', { x: mob.location.x, y: mob.location.y + 1, z: mob.location.z });
    // 
    //   auto tameable = bee.getComponent('minecraft:tameable')
    //   tameable.tame(owner);
    // 
    //   mob.dimension.spawnParticle("dungeons:busy_bee_spawn", mob.getHeadLocation())
    //   mob.dimension.playSound("artefact.buzzy_nest.spawn", mob.location)
    //   mob.playAnimation('animation.buzzy_nest.spawn_bee');
    // });

    // ==========================================
    // Transpiled from: components\artefacts\corruptedBeacon.js
    // ==========================================
    // // import {
    //   world,
    //   system
    // } from "@minecraft/server";
    // 
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:corrupted_beacon', {
    //     onUse(e, { params }) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto type = params.type;
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_corrupted_beacon')) return;
    //       }
    // 
    // 
    // 
    //       auto beam = // world.scoreboard.getObjective('dungeons:corrupted_beacon')
    //       if (!beam) {
    //         // world.scoreboard.addObjective('dungeons:corrupted_beacon')
    //         beam = // world.scoreboard.getObjective('dungeons:corrupted_beacon')
    //       }
    //       if (beam.getScore(player) > 0) {
    //         player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.already_using" }])
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //         return;
    //       }
    // 
    //       auto soulGauge = // world.scoreboard.getObjective('soulGauge').getScore(player);
    // 
    //       if (soulGauge < 1) {
    //         player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.collect_more_souls" }])
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //         return;
    //       }
    // 
    //       beam.setScore(player, 5);
    //       player.addTag('dungeons:using_' + type + '_beacon');
    //       player.dimension.playSound('beacon.activate', player.location, {
    //         pitch: 0.5
    //       });
    //     }
    //   });
    // 
    // });
    // 
    // // CORRUPTED BEACON
    // // system.runInterval(() => {
    //   for (auto player of // world.getPlayers({ scoreOptions: [{ objective: "dungeons:corrupted_beacon", minScore: 0 }] })) {
    //     auto beam = // world.scoreboard.getObjective('dungeons:corrupted_beacon')
    //     auto beamPlayer = beam.getScore(player);
    //     auto item = player.getComponent("minecraft:equippable").getEquipment("Mainhand");
    //     if (beamPlayer > 0) {
    //       if (!item) {
    //         beam.removeParticipant(player);
    //         player.removeTag('dungeons:using_common_beacon');
    //         player.removeTag('dungeons:using_rare_beacon');
    //         player.dimension.playSound('beacon.deactivate', player.location, {
    //           pitch: 0.5
    //         });
    //         return;
    //       }
    //       if ((player.hasTag('dungeons:using_common_beacon') && (item.typeId !== 'dungeons:corrupted_beacon' && item.typeId !== 'dungeons:tome_of_duplication')) || (player.hasTag('dungeons:using_rare_beacon') && (item.typeId !== 'dungeons:rare_corrupted_beacon' && item.typeId !== 'dungeons:rare_tome_of_duplication'))) {
    // 
    //         beam.removeParticipant(player);
    //         player.removeTag('dungeons:using_common_beacon');
    //         player.removeTag('dungeons:using_rare_beacon');
    //         player.dimension.playSound('beacon.deactivate', player.location, {
    //           pitch: 0.5
    //         });
    //         return;
    //       }
    //       if (beamPlayer == 1) {
    //         auto soulScore = // world.scoreboard.getObjective('soulGauge')
    //         auto soulGauge = soulScore.getScore(player);
    //         if (soulGauge < 1) {
    //           player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //           player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.collect_more_souls" }])
    // 
    //           beam.removeParticipant(player);
    //           player.removeTag('dungeons:using_common_beacon');
    //           player.removeTag('dungeons:using_rare_beacon');
    //           player.dimension.playSound('beacon.deactivate', player.location, {
    //             pitch: 0.5
    //           });
    //           return;
    //         } else if (player.hasTag('dungeons:using_common_beacon')) {
    //           beam.addScore(player, 4);
    //           soulScore.addScore(player, -1)
    // 
    //         } else if (player.hasTag('dungeons:using_rare_beacon')) {
    //           beam.addScore(player, 6);
    //           soulScore.addScore(player, -1)
    //         }
    //       }
    //       player.addEffect('slowness', 10, {
    //         amplifier: 3,
    //         showParticles: false
    //       });
    //       auto ammo = player.dimension.spawnEntity('dungeons:corrupted_beacon_ammo', player.getHeadLocation());
    //       auto proj = ammo.getComponent('projectile');
    //       proj.owner = player;
    //       proj.shoot(player.getViewDirection());
    //       // system.runTimeout(() => {
    //         ammo.remove()
    //       }, 25);
    //       beam.addScore(player, -1);
    //     } else {
    //       beam.removeParticipant(player);
    //       player.removeTag('dungeons:using_common_beacon');
    //       player.removeTag('dungeons:using_rare_beacon');
    //       player.dimension.playSound('beacon.deactivate', player.location, {
    //         pitch: 0.5
    //       });
    //     }
    //   }
    // }, 1);

    // ==========================================
    // Transpiled from: components\artefacts\corruptedPumpkin.js
    // ==========================================
    // // import {
    //   world,
    //   system
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:corrupted_pumpkin', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_corrupted_pumpkin')) return;
    //       }
    // 
    // 
    //       auto beam = // world.scoreboard.getObjective('dungeons:corrupted_pumpkin')
    //       if (!beam) {
    //         // world.scoreboard.addObjective('dungeons:corrupted_pumpkin')
    //         beam = // world.scoreboard.getObjective('dungeons:corrupted_pumpkin')
    //       }
    // 
    // 
    //       if (beam.getScore(player) > 0) {
    //         player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.already_using" }])
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //         return;
    //       }
    // 
    //       auto soulGauge = // world.scoreboard.getObjective('soulGauge').getScore(player);
    // 
    //       if (soulGauge < 1) {
    //         player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.collect_more_souls" }])
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //         return;
    //       }
    // 
    //       beam.setScore(player, 5);
    //       player.addTag('dungeons:using_corrupted_pumpkin');
    //       player.dimension.playSound('artefact.corrupted_pumpkin', player.location, {
    //         pitch: 1
    //       });
    //     }
    //   });
    // 
    // });
    // 
    // 
    // // CORRUPTED PUMPKIN PASSIVE
    // // system.runInterval(() => {
    //   for (auto player of // world.getPlayers({ scoreOptions: [{ objective: "dungeons:corrupted_pumpkin", minScore: 0 }] })) {
    //     auto beam = // world.scoreboard.getObjective('dungeons:corrupted_pumpkin')
    //     auto beamPlayer = beam.getScore(player);
    //     auto item = player.getComponent("minecraft:equippable").getEquipment("Mainhand");
    //     if (beamPlayer > 0) {
    //       if (!item) {
    //         beam.removeParticipant(player);
    //         player.removeTag('dungeons:using_corrupted_pumpkin');
    //         player.dimension.playSound('beacon.deactivate', player.location, {
    //           pitch: 0.5
    //         });
    //         return;
    //       }
    //       if ((player.hasTag('dungeons:using_corrupted_pumpkin') && (item.typeId !== 'dungeons:corrupted_pumpkin' && item.typeId !== 'dungeons:rare_tome_of_duplication' && item.typeId !== 'dungeons:tome_of_duplication'))) {
    // 
    //         beam.removeParticipant(player);
    //         player.removeTag('dungeons:using_corrupted_pumpkin');
    //         player.dimension.playSound('beacon.deactivate', player.location, {
    //           pitch: 0.5
    //         });
    //         return;
    //       }
    //       if (beamPlayer == 1) {
    //         auto soulScore = // world.scoreboard.getObjective('soulGauge')
    //         auto soulGauge = soulScore.getScore(player);
    //         if (soulGauge < 1) {
    //           player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //           player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.collect_more_souls" }])
    // 
    //           beam.removeParticipant(player);
    //           player.removeTag('dungeons:using_corrupted_pumpkin');
    //           player.dimension.playSound('beacon.deactivate', player.location, {
    //             pitch: 0.5
    //           });
    //           return;
    //         } else if (player.hasTag('dungeons:using_corrupted_pumpkin')) {
    //           beam.addScore(player, 6);
    //           soulScore.addScore(player, -1)
    //         }
    // 
    //       }
    //       player.addEffect('slowness', 10, {
    //         amplifier: 3,
    //         showParticles: false
    //       });
    //       auto ammo = player.dimension.spawnEntity('dungeons:corrupted_pumpkin_ammo', player.getHeadLocation());
    //       auto proj = ammo.getComponent('projectile');
    //       proj.owner = player;
    //       proj.shoot(player.getViewDirection());
    //       // system.runTimeout(() => {
    //         ammo.remove()
    //       }, 25);
    //       beam.addScore(player, -1);
    //     } else {
    //       player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //       player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.collect_more_souls" }])
    // 
    //       beam.removeParticipant(player);
    //       player.removeTag('dungeons:using_corrupted_pumpkin');
    //       player.dimension.playSound('beacon.deactivate', player.location, {
    //         pitch: 0.5
    //       });
    //     }
    //   }
    // }, 1);

    // ==========================================
    // Transpiled from: components\artefacts\corruptedSeeds.js
    // ==========================================
    // // import {
    //   system,
    //   EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget, specialDamage } from "main.js"
    // 
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:corrupted_seeds', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_corrupted_seeds')) return;
    //       }
    // 
    // 
    //       player.dimension.playSound("mob.player.hurt_freeze", player.location, { volume: 0.5, pitch: 0.4 })
    //       player.dimension.spawnParticle("dungeons:corrupted_seeds", player.location)
    // 
    //       auto targets = player.dimension.getEntities({ location: player.location, maxDistance: 5 })
    //       for (auto target of targets) {
    //         if (isValidTarget(target) && target !== player) {
    //           specialDamage(player, target, 1, EntityDamageCause.wither, ["poison", "artefact"])
    //           target.applyKnockback({ x: 0, z: 0 }, -0.2)
    //           target.addEffect("fatal_poison", 160)
    //           target.addEffect("slowness", 160, { amplifier: 3 })
    //         }
    //       }
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\deathCap.js
    // ==========================================
    // // import {
    //   system
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:death_cap_mushroom', {
    //     onUse(e, { params }) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_death_cap_mushroom')) return;
    //       }
    // 
    // 
    //       player.dimension.playSound("random.eat", player.location, { volume: 0.7, pitch: 0.5 })
    //       player.dimension.spawnParticle("dungeons:death_cap_mushroom", player.location)
    //       if (params.type == "common") {
    //         player.addEffect("strength", 200)
    //         player.addEffect("speed", 200)
    //       } else {
    //         player.addEffect("strength", 300)
    //         player.addEffect("speed", 300)
    // 
    //       }
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\enchantedGrass.js
    // ==========================================
    // // import {
    //   system
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:enchanted_grass', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_enchanted_grass')) return;
    //       }
    // 
    //       auto dim = player.dimension;
    //       auto loc = player.location;
    // 
    //       dim.playSound("mob.sheep.say", loc, { pitch: 0.4, volume: 0.4 })
    //       dim.playSound("artefact.enchanted_grass.use", loc)
    // 
    //       auto mob = dim.spawnEntity('dungeons:enchanted_sheep', loc);
    // 
    //       auto tameable = mob.getComponent('minecraft:tameable')
    //       tameable.tame(player);
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\enchantersTome.js
    // ==========================================
    // // import {
    //   system,
    //   MolangVariableMap
    // } from "@minecraft/server";
    // 
    // auto particleSpeed = 10
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:enchanters_tome', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_enchanters_tome')) return;
    //       }
    // 
    // 
    //       auto targets = player.dimension.getEntities({
    //         location: player.location,
    //         maxDistance: 16,
    //         families: ['enchantable_pet']
    //       });
    //       if (targets.length == 0) {
    // 
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //         return;
    //       }
    //       auto dim = player.dimension
    //       player.dimension.playSound('block.enchanting_table.use', player.location);
    //       for (auto mob of targets) {
    //         auto owner = mob.getComponent('minecraft:tameable').tamedToPlayer;
    //         if (!owner) continue;
    //         if (owner !== player) continue;
    //         // system.runTimeout(() => {
    //           dim.playSound("mob.enchanter.beam_on", player.location)
    //           for (auto i = 0; i < 40; i++) {
    //             // system.runTimeout(() => {
    //               if (!mob.isValid || !player.isValid) return;
    //               auto eLoc = player.location;
    //               auto viewDirection = player.getViewDirection()
    //               eLoc = { x: eLoc.x + viewDirection.x, y: eLoc.y + 1.5, z: eLoc.z + viewDirection.z }
    //               if (dim.isChunkLoaded(eLoc)) {
    //                 auto tLoc = mob.location;
    //                 tLoc = { x: tLoc.x, y: tLoc.y + 1, z: tLoc.z }
    //                 auto dx = tLoc.x - eLoc.x
    //                 auto dy = tLoc.y - eLoc.y
    //                 auto dz = tLoc.z - eLoc.z
    //                 auto length = Math.sqrt(std::pow(dx, 2) + std::pow(dy, 2) + std::pow(dz, 2))
    // 
    //                 dx = dx / length
    //                 dy = dy / length
    //                 dz = dz / length
    // 
    //                 auto lifetime = length / particleSpeed
    // 
    //                 auto map = new MolangVariableMap()
    //                 map.setColorRGB("variable.color", { red: 1, green: 0, blue: 1 })
    //                 map.setFloat("variable.particle_initial_speed", particleSpeed)
    //                 map.setFloat("variable.max_lifetime", lifetime)
    //                 map.setVector3("variable.direction", { x: dx, y: dy, z: dz })
    // 
    //                 auto xOffset = ((float)rand()/RAND_MAX)() * 0.4 - 0.2
    //                 auto yOffset = ((float)rand()/RAND_MAX)() * 0.4 - 0.2
    //                 auto zOffset = ((float)rand()/RAND_MAX)() * 0.4 - 0.2
    //                 dim.spawnParticle("minecraft:creaking_heart_trail", { x: eLoc.x + xOffset, y: eLoc.y + yOffset, z: eLoc.z + zOffset }, map)
    //               }
    //             }, i / 2)
    //           }
    //           // system.runTimeout(() => {
    //             if (mob.matches({ families: ["enchanted"] })) return;
    //             if (!mob.isValid || !player.isValid) return;
    //             dim.spawnParticle("dungeons:enchanted_tome", mob.location)
    //             dim.playSound("mob.enchanter.enchant", mob.location)
    //             mob.triggerEvent('dungeons:pet_become_enchanted');
    //             mob.addEffect('regeneration', 5, { amplifier: 4, showParticles: false });
    // 
    //           }, 20)
    //         })
    //       }
    //     }
    //   });
    // });

    // ==========================================
    // Transpiled from: components\artefacts\eyeGuardian.js
    // ==========================================
    // // import {
    //   world,
    //   system
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:eye_of_the_guardian', {
    //     onUse(e, { params }) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto type = params.type;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_eye_of_the_guardian')) return;
    //       }
    // 
    // 
    // 
    //       auto guardianEye = // world.scoreboard.getObjective('dungeons:guardian_eye')
    //       if (!guardianEye) {
    //         // world.scoreboard.addObjective('dungeons:guardian_eye')
    //         guardianEye = // world.scoreboard.getObjective('dungeons:guardian_eye')
    //       }
    //       if (guardianEye.getScore(player) > 0) {
    //         player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.already_using" }])
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //         return;
    //       }
    // 
    //       if (type == "common") {
    //         guardianEye.setScore(player, 70);
    //         player.addTag('dungeons:using_common_guardian');
    //         player.dimension.playSound('mob.guardian.death', player.location, { pitch: 1.6 });
    //       }
    //       if (type == "rare") {
    //         guardianEye.setScore(player, 121);
    //         player.addTag('dungeons:using_rare_guardian');
    //         player.dimension.playSound('mob.guardian.death', player.location, { pitch: 1.6 });
    //       }
    //     }
    //   });
    // 
    // });
    // 
    // 
    // // GUARDIAN EYE PASSIVE
    // // system.runInterval(() => {
    //   for (auto player of // world.getPlayers({ scoreOptions: [{ objective: "dungeons:guardian_eye", minScore: 0 }] })) {
    //     auto guardianEye = // world.scoreboard.getObjective('dungeons:guardian_eye')
    //     auto guardianEyePlayer = guardianEye.getScore(player);
    //     auto item = player.getComponent("minecraft:equippable").getEquipment("Mainhand");
    //     if (guardianEyePlayer > 0) {
    //       if (!item) {
    //         guardianEye.removeParticipant(player);
    //         player.removeTag('dungeons:using_common_guardian');
    //         player.removeTag('dungeons:using_rare_guardian');
    //         player.dimension.playSound('mob.guardian.death', player.location, {
    //           pitch: 0.6
    //         });
    //         return;
    //       }
    //       if ((player.hasTag('dungeons:using_common_guardian') && (item.typeId !== 'dungeons:eye_of_the_guardian' && item.typeId !== 'dungeons:tome_of_duplication')) || (player.hasTag('dungeons:using_rare_guardian') && (item.typeId !== 'dungeons:rare_eye_of_the_guardian' && item.typeId !== 'dungeons:rare_tome_of_duplication'))) {
    //         guardianEye.removeParticipant(player);
    //         player.removeTag('dungeons:using_common_guardian');
    //         player.removeTag('dungeons:using_rare_guardian');
    //         player.dimension.playSound('mob.guardian.death', player.location, {
    //           pitch: 0.6
    //         });
    //         return;
    //       }
    //       player.addEffect('slowness', 10, {
    //         amplifier: 3,
    //         showParticles: false
    //       });
    //       auto ammo = player.dimension.spawnEntity('dungeons:eye_guardian_ammo', player.getHeadLocation());
    //       auto proj = ammo.getComponent('projectile');
    //       proj.owner = player;
    //       proj.shoot(player.getViewDirection());
    //       // system.runTimeout(() => {
    //         ammo.remove()
    //       }, 25);
    //       guardianEye.addScore(player, -1);
    //     } else {
    //       guardianEye.removeParticipant(player);
    //       player.removeTag('dungeons:using_common_guardian');
    //       player.removeTag('dungeons:using_rare_guardian');
    //       player.dimension.playSound('mob.guardian.death', player.location, {
    //         pitch: 0.6
    //       });
    //     }
    //   }
    // }, 1);

    // ==========================================
    // Transpiled from: components\artefacts\ghostCloak.js
    // ==========================================
    // // import {
    //   system
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:ghost_cloak', {
    //     onUse(e, { params }) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto type = params.type
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_ghost_cloak')) return;
    //       }
    // 
    // 
    // 
    //       player.dimension.spawnParticle('dungeons:ambush', player.location)
    //       player.dimension.playSound('armor.equip_leather', player.location, {
    //         pitch: 1.5
    //       });
    // 
    //       if (type == "common") {
    //         player.addEffect('speed', 40, {
    //           amplifier: 0,
    //           showParticles: false
    //         });
    //       } else {
    //         player.addEffect('speed', 40, {
    //           amplifier: 1,
    //           showParticles: false
    //         });
    //       }
    //       player.addEffect('resistance', 40, {
    //         amplifier: 1,
    //         showParticles: true
    //       });
    //       player.addEffect('invisibility', 40, {
    //         amplifier: 0,
    //         showParticles: false
    //       });
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\golemKit.js
    // ==========================================
    // // import {
    //   system
    // } from "@minecraft/server";
    // 
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:golem_kit', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_golem_kit')) return;
    //       }
    // 
    // 
    // 
    //       auto dim = player.dimension;
    //       auto loc = player.location;
    //       dim.playSound("artefact.golem_kit.use", loc)
    // 
    //       auto mob = dim.spawnEntity('dungeons:pet_iron_golem', loc);
    // 
    //       auto tameable = mob.getComponent('minecraft:tameable')
    //       tameable.tame(player);
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\gongWeakening.js
    // ==========================================
    // // import {
    //   system
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget } from "main.js";
    // // import { addVoidedEffect } from "misc/voidedEffect.js"
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:gong_of_weakening', {
    //     onUse(e, { params }) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto type = params.type
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_gong_of_weakening')) return;
    //       }
    // 
    // 
    // 
    // 
    //       player.dimension.playSound("block.bell.hit", player.location, { volume: 1.3, pitch: 0.7 })
    //       player.dimension.spawnParticle("dungeons:gong_of_weakening_1", player.location)
    //       player.dimension.spawnParticle("dungeons:gong_of_weakening_2", player.location)
    //       auto targets = player.dimension.getEntities({ location: player.location, maxDistance: 6 })
    //       for (auto target of targets) {
    //         if (isValidTarget(target) && target !== player) {
    //           if (type == "common") {
    //             target.addEffect("weakness", 100, { amplifier: 0 })
    //             addVoidedEffect(target, 100)
    //           }
    //           if (type == "rare") {
    //             target.addEffect("weakness", 200, { amplifier: 0 })
    //             addVoidedEffect(target, 200)
    //           }
    //         }
    //       }
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\harvester.js
    // ==========================================
    // // import {
    //   world,
    //   system,
    //   ItemStack,
    //   EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget, specialDamage } from "main.js"
    // 
    // 
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:harvester', {
    //     onUse(e, { params }) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto dim = player.dimension;
    //       auto type = params.type;
    //       auto range
    //       auto damage
    //       if (type == "common") {
    //         range = 5
    //         damage = 15
    //       } else if (type == "rare") {
    //         range = 5.5
    //         damage = 20
    //       }
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_harvester')) return;
    //       }
    // 
    // 
    //       auto soulScore = // world.scoreboard.getObjective("soulGauge")
    //       auto soulGauge = soulScore.getScore(player)
    // 
    //       if (soulGauge < 15) {
    //         player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.collect_more_souls" }])
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //         return;
    //       } else {
    //         soulScore.addScore(player, -15)
    //       }
    // 
    //       dim.playSound('beacon.activate', player.location, {
    //         volume: 0.5,
    //         pitch: 1.8
    //       });
    // 
    //       dim.spawnParticle('dungeons:harvester_blast', player.location);
    //       dim.spawnParticle('dungeons:harvester_blast2', player.location);
    //       // system.runTimeout(() => {
    //         dim.spawnParticle('dungeons:harvester_flames', player.location);
    // 
    //         dim.playSound('shriek.sculk.shrieker', player.location, {
    //           volume: 0.9,
    //           pitch: 0.8
    //         });
    // 
    //         dim.playSound('random.explode', player.location, {
    //           volume: 1.1,
    //           pitch: 0.7
    //         });
    // 
    //         auto damageRange = dim.getEntities({
    //           location: player.location,
    //           maxDistance: range,
    //           excludeFamilies: ['ignore']
    //         });
    // 
    //         for (auto target of damageRange) {
    //           if (isValidTarget(target) == false) continue;
    //           if (target === player) continue;
    // 
    //           if (target.typeId === 'minecraft:player') {
    //             specialDamage(player, target, damage * 2 / 3, EntityDamageCause.entityExplosion, ["soul", "artefact"])
    //             specialDamage(player, target, damage * 1 / 3, EntityDamageCause.entityExplosion, ["soul", "artefact"])
    //           } else {
    //             specialDamage(player, target, damage, EntityDamageCause.entityExplosion, ["soul", "artefact"])
    //           }
    // 
    //         }
    // 
    //       }, 6)
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\iceWand.js
    // ==========================================
    // // import {
    //   system,
    //   world,
    //   EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget, specialDamage } from "main.js"
    // 
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:ice_wand', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_ice_wand')) return;
    //       }
    // 
    // 
    // 
    //       auto rayCast = player.getEntitiesFromViewDirection(({
    //         ignoreBlockCollision: true,
    //         includePassableBlocks: false,
    //         includeLiquidBlocks: true,
    //         maxDistance: 32
    //       }))
    //       if (rayCast == undefined || rayCast.length == 0) {
    //         rayCast = player.getBlockFromViewDirection({
    //           maxDistance: 32,
    //           includePassableBlocks: false,
    //           includeLiquidBlocks: true
    //         });
    //         if (!rayCast) {
    //           auto cd = item.getComponent("cooldown")
    //           player.startItemCooldown(cd.cooldownCategory, 10);
    //           return;
    //         } else {
    //           rayCast = rayCast.block.location;
    //         }
    //       } else {
    //         rayCast = rayCast[0].entity.location
    //       }
    //       player.dimension.playSound("artefact.ice_wand", player.location)
    //       player.dimension.spawnParticle("dungeons:ice_wand", player.location)
    //       auto chunk = player.dimension.spawnEntity('dungeons:ice_chunk_player', rayCast);
    //       auto tameable = chunk.getComponent('minecraft:tameable')
    //       tameable.tame(player);
    //     }
    //   });
    // });
    // 
    // 
    // // import { getDirection, makeVector } from "main.js"
    // 
    // // world.afterEvents.dataDrivenEntityTrigger.subscribe((e) => {
    //   if (e.eventId !== "dungeons:hit") return;
    //   auto entity = e.entity;
    //   if (entity.typeId !== "dungeons:ice_chunk_player") return;
    //   auto tameable = entity.getComponent('minecraft:tameable')
    //   if (!tameable) {
    //     entity.remove()
    //     return;
    //   }
    //   auto owner = tameable.tamedToPlayer;
    //   auto dim = entity.dimension;
    //   auto loc = entity.location;
    //   dim.playSound("random.glass", loc)
    // 
    //   auto damageRange = dim.getEntities({
    //     location: loc,
    //     maxDistance: 3,
    //     excludeFamilies: ['ignore']
    //   });
    // 
    //   for (auto target of damageRange) {
    //     if (isValidTarget(target) == false) continue;
    //     if (target === owner) continue;
    // 
    //     auto damagedone = specialDamage(owner, target, 10, EntityDamageCause.freezing, ["ice", "artefact"])
    //     if (damagedone) {
    //       target.applyKnockback({ x: 0, z: 0 }, 0.4)
    //       target.addEffect("slowness", 20, { amplifier: 8 })
    //       auto dir = getDirection(loc, target.location);
    //       target.applyKnockback(makeVector(dir, 2), 0.6)
    // 
    //     }
    // 
    //   }
    //   entity.remove()
    // })
    // 

    // ==========================================
    // Transpiled from: components\artefacts\ironHide.js
    // ==========================================
    // // import {
    //   world,
    //   system,
    //   ItemStack
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:iron_hide_amulet', {
    //     onUse(e, { params }) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto type = params.type
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_iron_hide_amulet')) return;
    //       }
    // 
    // 
    //       player.dimension.spawnParticle('dungeons:iron_hide_amulet_1', player.location)
    //       player.dimension.spawnParticle('dungeons:iron_hide_amulet_2', player.location)
    //       player.dimension.playSound('random.anvil_land', player.location, {
    //         volume: 0.7,
    //         pitch: 0.5
    //       });
    //       if (type == "common") {
    //         player.addEffect('resistance', 150, {
    //           amplifier: 1
    //         });
    //       } else {
    //         player.addEffect('resistance', 250, {
    //           amplifier: 1
    //         });
    //       }
    //     }
    //   });
    // });

    // ==========================================
    // Transpiled from: components\artefacts\lightFeather.js
    // ==========================================
    // // import {
    //   world,
    //   system
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget, makeVector } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:light_feather', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_light_feather')) return;
    //       }
    // 
    // 
    // 
    // 
    //       player.dimension.playSound('wind_charge.burst', player.location, {
    //         pitch: 1.5
    //       });
    //       if (// world.scoreboard.getObjective('shadowTime').getScore(player) == 0) {
    //         player.playAnimation('animation.player.roll', {
    //           blendOutTime: 2,
    //           nextState: 'lightFeather'
    //         });
    //       }
    //       player.dimension.spawnParticle('minecraft:wind_explosion_emitter', player.location);
    // 
    //       auto targets = player.dimension.getEntities({
    //         location: player.location,
    //         maxDistance: 3.5,
    //         excludeFamilies: ['ignore']
    //       });
    // 
    //       for (auto target of targets) {
    //         if (target === player) continue;
    //         if (!isValidTarget(target)) continue;
    // 
    //         target.addEffect('slowness', 25, {
    //           amplifier: 4
    //         });
    // 
    //       }
    //       player.addEffect('resistance', 25, {
    //         amplifier: 5,
    //         showParticles: false
    //       });
    // 
    //       auto velocity = player.getViewDirection();
    // 
    //       if (player.isGliding) {
    //         player.applyKnockback(makeVector(velocity, 2.5), 0.25);
    //       } else {
    //         player.applyKnockback(makeVector(velocity, 5), 0.5);
    //       }
    // 
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\lightningRod.js
    // ==========================================
    // // import {
    //   world,
    //   system,
    //   ItemStack,
    //   EntityDamageCause
    // } from "@minecraft/server";
    // 
    // 
    // // import { isValidTarget, specialDamage } from "main.js"
    // 
    // 
    // 
    // void strikeLightning(owner, dim, location, type) {
    //   auto range = 3.5
    //   auto damage = 15
    //   if (type == "rare") {
    //     range = 4.5
    //     damage = 20
    //   }
    // 
    //   auto floor = dim.getTopmostBlock({ x: location.x, z: location.z }, location.y).above()
    //   auto loc = floor.location
    //   dim.spawnParticle("dungeons:lightning_rod_area", loc)
    //   dim.playSound("artefact.lightningwand.use", loc)
    //   // system.runTimeout(() => {
    //     dim.spawnParticle("dungeons:lightning_wand_shock", loc)
    //     dim.playSound("artefact.lightningwand.strike", loc)
    // 
    //     auto damageRange = dim.getEntities({
    //       location: location,
    //       maxDistance: range,
    //       excludeFamilies: ['ignore']
    //     });
    // 
    //     for (auto target of damageRange) {
    //       if (isValidTarget(target) == false) continue;
    //       if (target === owner) continue;
    //       if (target.matches({ families: ["creeper"] })) {
    //         target.triggerEvent("minecraft:become_charged")
    //         auto damagedone = specialDamage(owner, target, damage / 2, EntityDamageCause.lightning, ["lightning", "soul", "artefact"])
    //         if (damagedone) {
    //           target.applyKnockback({ x: 0, z: 0 }, 0.4)
    //           target.setOnFire(1)
    //         }
    //       } else {
    //         auto damagedone = specialDamage(owner, target, damage, EntityDamageCause.lightning, ["lightning", "soul", "artefact"])
    //         if (damagedone) {
    //           target.applyKnockback({ x: 0, z: 0 }, 0.4)
    //           target.setOnFire(1)
    //         }
    //       }
    // 
    //     }
    //   }, 20)
    // }
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:lightning_rod', {
    //     onUse(e, { params }) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto type = params.type
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_lightning_rod')) return;
    //       }
    // 
    // 
    //       auto rayCast = player.getEntitiesFromViewDirection(({
    //         ignoreBlockCollision: true,
    //         includePassableBlocks: false,
    //         includeLiquidBlocks: true,
    //         maxDistance: 24
    //       }))
    //       if (rayCast == undefined || rayCast.length == 0) {
    //         rayCast = player.getBlockFromViewDirection({
    //           maxDistance: 24,
    //           includePassableBlocks: false,
    //           includeLiquidBlocks: true
    //         });
    //         if (!rayCast) {
    //           auto cd = item.getComponent("cooldown")
    //           player.startItemCooldown(cd.cooldownCategory, 10);
    //           return;
    //         } else {
    //           rayCast = rayCast.block.location;
    //         }
    //       } else {
    //         rayCast = rayCast[0].entity.location
    //       }
    // 
    //       auto soulScore = // world.scoreboard.getObjective("soulGauge")
    //       auto soulGauge = soulScore.getScore(player)
    // 
    //       if (soulGauge < 8) {
    //         player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.collect_more_souls" }])
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 0);
    //         return;
    //       } else {
    //         soulScore.addScore(player, -8)
    //       }
    //       strikeLightning(player, player.dimension, rayCast, type)
    //     }
    //   });
    // });

    // ==========================================
    // Transpiled from: components\artefacts\loveMedallion.js
    // ==========================================
    // // import {
    //   world,
    //   system,
    //   DimensionTypes
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget, specialDamage } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent("dungeons:love_medallion", {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_love_medallion')) return;
    //       }
    //       auto dim = player.dimension
    //       auto loc = player.location
    //       auto range = dim.getEntities({
    //         location: loc,
    //         maxDistance: 8,
    //         families: ['love_medallion_target'],
    //         excludeTags: ["dungeons:love_medallion_active"]
    //       });
    //       auto loveTargets = []
    //       for (auto target of range) {
    //         auto tameable = target.getComponent("tameable")
    //         if (tameable && tameable.isTamed == false) loveTargets.push(target)
    //       }
    //       if (loveTargets.length == 0) {
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.no_targets" }])
    //         dim.playSound("artefact.love_medallion.fail", loc, { volume: 1 })
    //         auto cd = item.getComponent('cooldown');
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //         return;
    //       } else {
    //         dim.playSound("artefact.love_medallion.success", loc, { volume: 1 })
    //         dim.spawnParticle("dungeons:love_medallion_use", { x: loc.x, y: loc.y + 1, z: loc.z })
    //         dim.spawnParticle("dungeons:love_medallion_use_aura", { x: loc.x, y: loc.y + 1, z: loc.z })
    //         for (auto i = 0; i < loveTargets.length && i < 2; i++) {
    //           auto target = loveTargets[i]
    //           auto tameable = target.getComponent('minecraft:tameable')
    //           dim.spawnParticle("dungeons:love_medallion_aura", target.location)
    //           dim.spawnParticle("dungeons:love_medallion_aura", target.getHeadLocation())
    //           tameable.tame(player);
    //           target.addTag("dungeons:love_medallion_active")
    //           target.addTag("dungeons:love_medallion_charmed_" + `${player.id}`)
    //           target.setDynamicProperty("dungeons:love_medallion_ticks", 400)
    //           target.addEffect("speed", 600, { showParticles: false })
    //           target.addEffect("slowness", 600, { showParticles: false })
    //           target.addEffect("regeneration", 40, { amplifier: 2, showParticles: false })
    //         }
    //       }
    //     }
    //   });
    // });
    // 
    // // system.runInterval(() => {
    //   for (auto dimId of DimensionTypes.getAll()) {
    //     auto dim = // world.getDimension(dimId.typeId)
    //     for (auto entity of dim.getEntities({ tags: ["dungeons:love_medallion_active"] })) {
    //       auto ticksLeft = entity.getDynamicProperty("dungeons:love_medallion_ticks")
    //       if (ticksLeft && ticksLeft > 0) {
    //         entity.setDynamicProperty("dungeons:love_medallion_ticks", ticksLeft - 1)
    // 
    //         if (dim.isChunkLoaded(entity.location)) {
    //           dim.spawnParticle("dungeons:love_medallion_aura", entity.location)
    //         }
    //       } else {
    //         if (dim.isChunkLoaded(entity.location)) {
    //           dim.spawnParticle("dungeons:love_medallion_use_aura", entity.getHeadLocation())
    //           dim.playSound("random.explode", entity.location, { volume: 0.2, pitch: 0.9 })
    //         }
    //         entity.kill()
    //         entity.remove()
    //       }
    //     }
    //   }
    // })
    // //attack boost
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //   auto damageSource = e.damageSource.damagingEntity;
    //   if (!damageSource) return;
    //   if (e.damageSource.cause == "override") return;
    //   if (damageSource.hasTag("dungeons:love_medallion_active")) {
    //     auto cause = e.damageSource.cause
    //     if (cause == "lightning") return;
    //     e.damage = e.damage * 1.2
    //   }
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\powershaker.js
    // ==========================================
    // // import {
    //   world,
    //   system,
    //   ItemStack,
    //   EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget, specialDamage } from "main.js"
    // 
    // 
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:powershaker', {
    //     onUse(e, { params }) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto type = params.type
    // 
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_powershaker')) return;
    //       }
    // 
    // 
    //       auto timeLeft = // world.scoreboard.getObjective('dungeons:powershaker_t');
    //       if (!timeLeft) {
    //         timeLeft = // world.scoreboard.addObjective('dungeons:powershaker_t');
    //       }
    //       auto usesLeft = // world.scoreboard.getObjective('dungeons:powershaker_u');
    //       if (!usesLeft) {
    //         usesLeft = // world.scoreboard.addObjective('dungeons:powershaker_u');
    //       }
    // 
    //       if (timeLeft.getScore(player) > 0) {
    //         player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.already_using" }])
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //         return;
    //       }
    // 
    //       player.dimension.spawnParticle('dungeons:party_flair', player.location)
    //       player.dimension.playSound('random.fuse', player.location, {
    //         volume: 0.7,
    //         pitch: 2.5
    //       });
    // 
    //       usesLeft.setScore(player, 5);
    //       if (type == "common") {
    //         timeLeft.setScore(player, 300);
    //       } else {
    //         timeLeft.setScore(player, 400);
    // 
    //       }
    //     }
    //   });
    // });
    // 
    // 
    // // TIMER
    // // system.runInterval(() => {
    //   for (auto player of // world.getPlayers()) {
    //     auto timeLeft = // world.scoreboard.getObjective('dungeons:powershaker_t');
    //     auto usesLeft = // world.scoreboard.getObjective('dungeons:powershaker_u');
    //     if (!timeLeft) return;
    //     if (!usesLeft) return;
    //     if (!player.scoreboardIdentity) continue;
    //     if (!timeLeft.hasParticipant(player.scoreboardIdentity) || !usesLeft.hasParticipant(player.scoreboardIdentity)) continue;
    //     auto duration = timeLeft.getScore(player);
    //     if (duration % 15 == 0) {
    //       player.dimension.spawnParticle("dungeons:powershaker_idle", player.location)
    //     }
    //     if (duration > 0) {
    //       timeLeft.addScore(player, -1);
    //       player.addEffect('strength', 1);
    //     }
    //     if (duration <= 0 || usesLeft.getScore(player) == 0) {
    //       timeLeft.removeParticipant(player)
    //       usesLeft.removeParticipant(player)
    //     }
    //   }
    // }, 1);
    // 
    // // world.afterEvents.entityHurt.subscribe((event) => {
    //   auto hurtEntity = event.hurtEntity;
    //   auto damageSource = event.damageSource.damagingEntity;
    //   auto cause = event.damageSource.cause
    //   if (!damageSource) {
    //     return;
    //   }
    //   if (damageSource.typeId !== "minecraft:player") {
    //     return;
    //   }
    //   if (hurtEntity == damageSource) {
    //     return;
    //   }
    //   if (cause != "entityAttack") {
    //     return;
    //   }
    // 
    //   if (damageSource.hasTag('powershaker_cooldown')) {
    //     // system.runTimeout(() => {
    //       damageSource.removeTag('powershaker_cooldown')
    //     }, 1)
    //     return;
    //   }
    // 
    //   auto timeLeft = // world.scoreboard.getObjective('dungeons:powershaker_t');
    //   auto usesLeft = // world.scoreboard.getObjective('dungeons:powershaker_u');
    //   if (!timeLeft) return;
    //   if (!usesLeft) return;
    //   if (!timeLeft.hasParticipant(damageSource.scoreboardIdentity) || !usesLeft.hasParticipant(damageSource.scoreboardIdentity)) return;
    //   auto uses = usesLeft.getScore(damageSource);
    //   if (uses == 0) {
    //     timeLeft.removeParticipant(damageSource)
    //     usesLeft.removeParticipant(damageSource)
    //     return;
    //   }
    // 
    //   hurtEntity.dimension.spawnParticle('dungeons:party_boom', hurtEntity.location);
    //   hurtEntity.dimension.spawnParticle('dungeons:powershaker_ring', hurtEntity.location);
    //   hurtEntity.dimension.playSound('random.explode', hurtEntity.location, {
    //     volume: 0.5,
    //     pitch: 1.5
    //   });
    // 
    //   auto damageRange = hurtEntity.dimension.getEntities({
    //     location: hurtEntity.location,
    //     maxDistance: 4,
    //     excludeFamilies: ['ignore']
    //   });
    // 
    //   for (auto target of damageRange) {
    //     if (isValidTarget(target) == false) continue;
    //     if (target === damageSource) continue;
    //     specialDamage(damageSource, target, 8, EntityDamageCause.entityExplosion, ["artefact"])
    //   }
    // 
    //   usesLeft.addScore(damageSource, -1);
    //   damageSource.addTag('powershaker_cooldown');
    //   // system.runTimeout(() => {
    //     damageSource.removeTag('powershaker_cooldown')
    //   }, 8)
    // });

    // ==========================================
    // Transpiled from: components\artefacts\satchelElements.js
    // ==========================================
    // // import {
    //   world,
    //   system,
    //   EntityDamageCause
    // } from "@minecraft/server";
    // 
    // 
    // // import { isValidTarget, specialDamage } from "main.js"
    // 
    // 
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:satchel_of_elements', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto dim = player.dimension
    //       auto loc = player.location
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_satchel_of_elements')) return;
    //       }
    //       auto damageRange = dim.getEntities({
    //         location: loc,
    //         maxDistance: 8,
    //         excludeFamilies: ['ignore']
    //       });
    //       auto isAnyTargets = false
    //       for (auto target of damageRange) {
    //         if (isValidTarget(target) && target !== player) isAnyTargets = true
    //       }
    //       if (isAnyTargets == false) {
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.no_targets" }])
    //         auto cd = item.getComponent('cooldown');
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //         return;
    //       }
    // 
    //       auto rand = ((float)rand()/RAND_MAX)()
    //       auto element = ""
    //       if (rand < 0.33) element = "ice"
    //       if (rand >= 0.33 && rand < 0.67) element = "fire"
    //       if (rand >= 0.67) element = "electric"
    // 
    //       if (element == "ice") {
    //         dim.spawnParticle("dungeons:satchel_elements_use_ice", loc)
    //         dim.playSound("mob.player.hurt_freeze", loc)
    //       } else if (element == "fire") {
    //         dim.spawnParticle("dungeons:satchel_elements_use_fire", loc)
    //         dim.playSound("mob.ghast.fireball", loc)
    // 
    //       } else {
    //         dim.spawnParticle("dungeons:satchel_elements_use_electric", loc)
    //         dim.playSound("ambient.weather.lightning.impact", loc, { pitch: 0.4 })
    //       }
    // 
    //       for (auto target of damageRange) {
    //         if (isValidTarget(target) == false) continue;
    //         if (target === player) continue;
    // 
    //         if (element == "ice") {
    //           target.addEffect("slowness", 160, { amplifier: 2 })
    //           dim.spawnParticle("dungeons:satchel_elements_ice", target.location)
    //         } else if (element == "fire") {
    //           auto damageDone = specialDamage(player, target, 2, EntityDamageCause.fire, ["fire", "artefact"])
    //           if (damageDone) {
    //             target.setOnFire(5 + ((float)rand()/RAND_MAX)() * 3, true)
    //             dim.spawnParticle("dungeons:satchel_elements_fire", target.location)
    //           }
    //         } else {
    //           if (target.matches({ families: ["creeper"] })) {
    //             target.triggerEvent("minecraft:become_charged")
    //             auto damagedone = specialDamage(player, target, 6, EntityDamageCause.lightning, ["lightning", "artefact"])
    //             if (damagedone) {
    //               target.applyKnockback({ x: 0, z: 0 }, 0.4)
    //               target.setOnFire(1)
    //               dim.spawnParticle("dungeons:lightning_wand_shock", target.location)
    //               dim.playSound("artefact.lightningwand.strike", target.location)
    //             }
    //           } else {
    //             auto damageDone = specialDamage(player, target, 12, EntityDamageCause.lightning, ["lightning", "artefact"])
    //             if (damageDone) {
    //               target.setOnFire(1, true)
    //               dim.spawnParticle("dungeons:lightning_wand_shock", target.location)
    //               dim.playSound("artefact.lightningwand.strike", target.location)
    //             }
    //           }
    //         }
    //       }
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\satchelElixirs.js
    // ==========================================
    // // import {
    //   world,
    //   system,
    //   ItemStack
    // } from "@minecraft/server";
    // 
    // // import { addShadowForm } from "misc/shadowForm.js"
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:satchel_of_elixirs', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_satchel_of_elixirs')) return;
    //       }
    // 
    // 
    //       auto potion = Math.ceil(((float)rand()/RAND_MAX)() * 3);
    //       if (potion <= 1 && player.getEffect("strength")) potion = Math.ceil(((float)rand()/RAND_MAX)() * 3);
    //       if (potion == 2 && player.getEffect("speed")) potion = Math.ceil(((float)rand()/RAND_MAX)() * 3);
    //       if (potion >= 3 && player.hasTag("dungeons:in_shadow_form")) potion = Math.ceil(((float)rand()/RAND_MAX)() * 3);
    //       auto dim = player.dimension;
    //       auto loc = player.location;
    //       dim.playSound('bottle.fill', loc);
    // 
    //       if (potion <= 1) {
    //         dim.spawnParticle('dungeons:elixir_strength', loc);
    //         player.addEffect('strength', 400);
    //       }
    //       if (potion == 2) {
    //         dim.spawnParticle('dungeons:elixir_speed', loc);
    //         player.addEffect('speed', 550);
    //       }
    //       if (potion == 3) {
    //         dim.spawnParticle('dungeons:elixir_shadow', loc);
    //         dim.spawnParticle('dungeons:instant_teleport', player.getHeadLocation());
    //         dim.playSound('mob.endermen.portal', loc, { pitch: 0.6 });
    //         addShadowForm(player, 180)
    //       }
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\satchelSnacks.js
    // ==========================================
    // // import {
    //   world,
    //   system,
    //   ItemStack
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:satchel_of_snacks', {
    //     onUse(e, { params }) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto type = params.type
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_satchel_of_snacks')) return;
    //       }
    // 
    // 
    //       auto healAmt = 0
    //       auto foodRand = 0
    //       if (type == "common") {
    //         healAmt = 2 + Math.ceil(((float)rand()/RAND_MAX)() * 3);
    //         foodRand = Math.ceil(((float)rand()/RAND_MAX)() * 3);
    //       } else {
    //         healAmt = 2 + Math.ceil(((float)rand()/RAND_MAX)() * 3);
    //         foodRand = 3 + Math.ceil(((float)rand()/RAND_MAX)() * 3);
    //       }
    // 
    //       auto hunger = player.getComponent("minecraft:player.hunger")
    //       if (!hunger) return;
    //       auto max = hunger.defaultValue
    //       auto current = hunger.currentValue;
    // 
    //       auto hp = player.getComponent("health")
    //       if (!hp) return;
    // 
    //       auto maxHP = hp.defaultValue
    //       auto currentHP = hp.currentValue;
    // 
    //       if (current >= max && currentHP >= maxHP) {
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.full_health_and_hunger" }])
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //         return;
    //       }
    // 
    //       if (healAmt + currentHP > maxHP) {
    //         hp.setCurrentValue(maxHP)
    //       } else {
    //         hp.setCurrentValue(currentHP + healAmt)
    //       }
    //       player.addEffect('saturation', foodRand, { showParticles: false });
    //       player.dimension.playSound('random.eat', player.location);
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\scatterMines.js
    // ==========================================
    // // import {
    //   world,
    //   system,
    //   EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget, specialDamage } from "main.js"
    // 
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:scatter_mines', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_scatter_mines')) return;
    //       }
    // 
    // 
    //       auto loc1 = player.dimension.getTopmostBlock({ x: player.location.x + 2, z: player.location.z }, player.location.y).bottomCenter();
    //       auto loc2 = player.dimension.getTopmostBlock({ x: player.location.x - 2, z: player.location.z - 2 }, player.location.y).bottomCenter();
    //       auto loc3 = player.dimension.getTopmostBlock({ x: player.location.x - 2, z: player.location.z + 2 }, player.location.y).bottomCenter();
    // 
    //       auto locations = [loc1, loc2, loc3]
    //       auto skipCooldown = true
    //       for (auto loc of locations) {
    //         if (loc.y - player.location.y <= 5 && loc.y - player.location.y >= -5) {
    //           auto mine = player.dimension.spawnEntity('dungeons:player_scatter_mine', { x: loc.x, y: loc.y + 1, z: loc.z });
    //           auto tame = mine.getComponent('minecraft:tameable')
    //           tame.tame(player);
    //           skipCooldown = false
    //         }
    //       }
    //       if (skipCooldown == true) {
    // 
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //       } else {
    //         player.dimension.playSound('weapon.enchant.exploding', player.location, {
    //           pitch: 1.5
    //         });
    //       }
    // 
    //     }
    //   });
    // 
    // });
    // 
    // // import { getDirection, makeVector } from "main.js"
    // 
    // // world.afterEvents.dataDrivenEntityTrigger.subscribe((e) => {
    //   if (e.eventId !== "dungeons:explode") return;
    //   auto entity = e.entity;
    //   if (entity.typeId !== "dungeons:player_scatter_mine") return;
    //   auto tameable = entity.getComponent('minecraft:tameable')
    //   if (!tameable) {
    //     entity.remove()
    //     return;
    //   }
    //   auto owner = tameable.tamedToPlayer;
    //   auto dim = entity.dimension;
    //   auto loc = entity.location;
    // 
    //   auto damageRange = dim.getEntities({
    //     location: loc,
    //     maxDistance: 3,
    //     excludeFamilies: ['ignore']
    //   });
    // 
    //   for (auto target of damageRange) {
    //     if (isValidTarget(target) == false) continue;
    //     if (target === owner) continue;
    // 
    //     auto damagedone = specialDamage(owner, target, 20, EntityDamageCause.entityExplosion, ["artefact"])
    //     if (damagedone) {
    //       auto dir = getDirection(loc, target.location);
    //       target.applyKnockback(makeVector(dir, 2), 1)
    // 
    //     }
    // 
    //   }
    //   entity.remove()
    // })
    // 

    // ==========================================
    // Transpiled from: components\artefacts\shadowShifter.js
    // ==========================================
    // // import {
    //   world,
    //   system
    // } from "@minecraft/server";
    // 
    // // import { addShadowForm } from "misc/shadowForm.js"
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:shadow_shifter', {
    //     onUse(e, { params }) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto type = params.type
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_shadow_shifter')) return;
    //       }
    // 
    // 
    //       if (player.hasTag("dungeons:in_shadow_form")) {
    //         player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.already_using" }])
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //         return;
    // 
    //       }
    // 
    //       auto soulScore = // world.scoreboard.getObjective("soulGauge")
    //       auto soulGauge = soulScore.getScore(player)
    // 
    //       if (soulGauge < 12) {
    //         player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.collect_more_souls" }])
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 0);
    //         return;
    //       } else {
    //         soulScore.addScore(player, -12)
    //       }
    //       auto dim = player.dimension
    //       auto loc = player.location
    //       dim.playSound("mob.endermen.portal", loc, { pitch: 0.65 })
    //       dim.spawnParticle("dungeons:instant_teleport", { x: loc.x, y: loc.y + 1.8, z: loc.z })
    //       if (type == "common") addShadowForm(player, 220)
    //       if (type == "rare") addShadowForm(player, 340)
    // 
    //     }
    //   });
    // });

    // ==========================================
    // Transpiled from: components\artefacts\shockPowder.js
    // ==========================================
    // // import {
    //   world,
    //   system,
    //   ItemStack
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:shock_powder', {
    //     onUse(e, { params }) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto type = params.type
    //       auto duration = 3.5
    //       if (type == "rare") duration = 6
    // 
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_shock_powder')) return;
    //       }
    // 
    // 
    //       auto dim = player.dimension
    //       auto loc = player.location
    //       auto damageRange = dim.getEntities({
    //         location: loc,
    //         maxDistance: 5,
    //         excludeFamilies: ['ignore']
    //       });
    //       dim.spawnParticle("dungeons:shock_powder_strike", loc)
    //       dim.spawnParticle("dungeons:shock_powder", { x: loc.x, y: loc.y + 1, z: loc.z })
    //       dim.playSound("ambient.weather.lightning.impact", loc, { pitch: 2.5 })
    // 
    // 
    //       for (auto target of damageRange) {
    //         if (isValidTarget(target) == false) continue;
    //         if (target === player) continue;
    //         target.addEffect("weakness", duration * 20, { amplifier: 9, showParticles: false })
    //         target.addEffect("slowness", duration * 20, { amplifier: 9, showParticles: false })
    //         target.addEffect("mining_fatigue", duration * 20, { amplifier: 9, showParticles: false })
    //         target.dimension.spawnParticle("dungeons:stun_" + duration + "s", target.location)
    //       }
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\soulHealer.js
    // ==========================================
    // 
    // 
    // // import {
    //   world,
    //   system
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:soul_healer', {
    //     onUse(e, { params }) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto type = params.type
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_soul_healer')) return;
    //       }
    // 
    // 
    // 
    //       auto hp = player.getComponent("health")
    //       if (!hp) return;
    //       auto maxHP = hp.defaultValue
    //       auto currentHP = hp.currentValue;
    //       if (currentHP == maxHP) {
    //         player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.full_health" }])
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //         return;
    // 
    //       }
    // 
    //       auto soulScore = // world.scoreboard.getObjective("soulGauge")
    //       auto soulGauge = soulScore.getScore(player)
    // 
    //       if (soulGauge < 10) {
    //         player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.collect_more_souls" }])
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //         return;
    //       } else {
    //         soulScore.addScore(player, -10)
    //       }
    //       auto dim = player.dimension
    //       auto loc = player.location
    //       dim.playSound("mob.evocation_illager.cast_spell", loc, { pitch: 1.1 })
    //       dim.spawnParticle("dungeons:soul_healer", { x: loc.x, y: loc.y + 1, z: loc.z })
    //       dim.spawnParticle("dungeons:soul_rings", { x: loc.x, y: loc.y + 0.2, z: loc.z })
    //       dim.spawnParticle("dungeons:soul2", { x: loc.x, y: loc.y + 0.0, z: loc.z })
    //       dim.spawnParticle("dungeons:soul2", { x: loc.x, y: loc.y + 0.5, z: loc.z })
    // 
    //       auto healAmt = 0
    //       if (type == "common") healAmt = 7
    //       if (type == "rare") healAmt = 11
    //       if (healAmt + currentHP > maxHP) {
    //         auto surplus = (healAmt + currentHP) - maxHP
    //         surplus = Math.ceil(surplus / 2)
    //         if (surplus > 4) surplus = 4
    //         soulScore.addScore(player, surplus)
    //         hp.setCurrentValue(maxHP)
    //       } else {
    //         hp.setCurrentValue(currentHP + healAmt)
    //       }
    // 
    //     }
    //   });
    // });
    // 

    // ==========================================
    // Transpiled from: components\artefacts\soulLantern.js
    // ==========================================
    // // import {
    //   world,
    //   system
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:soul_lantern', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_soul_lantern')) return;
    //       }
    // 
    // 
    //       auto soulScore = // world.scoreboard.getObjective("soulGauge")
    //       auto soulGauge = soulScore.getScore(player)
    // 
    //       if (soulGauge < 13) {
    //         player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.collect_more_souls" }])
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //         return;
    //       } else {
    //         soulScore.addScore(player, -13)
    //       }
    //       auto dim = player.dimension
    //       auto loc = player.location
    //       dim.playSound("artefact.soul_lantern.use", loc)
    //       dim.spawnParticle("dungeons:soul_wizard", { x: loc.x + 1, y: loc.y + 0.2, z: loc.z })
    //       dim.spawnParticle("dungeons:soul_wizard", { x: loc.x - 1, y: loc.y + 0.2, z: loc.z })
    //       dim.spawnParticle("dungeons:soul_wizard", { x: loc.x, y: loc.y + 0.2, z: loc.z + 1 })
    //       dim.spawnParticle("dungeons:soul_wizard", { x: loc.x, y: loc.y + 0.2, z: loc.z - 1 })
    // 
    // 
    //       auto nest = player.dimension.spawnEntity('dungeons:soul_wizard', player.location);
    // 
    //       auto tameable = nest.getComponent('minecraft:tameable')
    //       tameable.tame(player);
    //     }
    //   });
    // });
    // 

    // ==========================================
    // Transpiled from: components\artefacts\spinblade.js
    // ==========================================
    // // import {
    //   world,
    //   system,
    //   ItemStack
    // } from "@minecraft/server";
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:spinblade', {
    //     onUse(e, { params }) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto type = params.type;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_spinblade')) return;
    //       }
    // 
    //       auto entityId = "dungeons:spinblade_projectile"
    //       if (type == "rare") entityId = "dungeons:rare_spinblade_projectile"
    //       auto ammo = player.dimension.spawnEntity(entityId, player.getHeadLocation());
    //       auto proj = ammo.getComponent('projectile');
    //       proj.owner = player;
    //       proj.shoot(player.getViewDirection());
    //     }
    //   });
    // 
    // });
    // auto dimensionIds = ["overworld", "nether", "the_end"];
    // 
    // //Spinblade Return
    // // system.runInterval(() => {
    //   for (auto dimId of dimensionIds) {
    //     for (auto entity of // world.getDimension(dimId).getEntities({
    //       families: ["spinblade_projectile"]
    //     })) {
    // 
    //       auto proj = entity.getComponent('projectile');
    //       auto owner = proj.owner
    //       if (!owner) continue;
    //       if (entity.typeId.includes("rare")) {
    //         owner.startItemCooldown("spinblade_rare", 2400);
    //       } else {
    //         owner.startItemCooldown("spinblade_common", 2400);
    // 
    //       }
    //       if (entity.hasTag("dungeons:spinblade_returning")) {
    //         if (owner !== undefined) {
    //           entity.runCommand(`tp ^^0.2^1 facing ${owner.name}`)
    //         } else {
    //           entity.remove()
    //         }
    //       }
    //     }
    //   }
    // }, 1)
    // 
    // // world.afterEvents.dataDrivenEntityTrigger.subscribe((e) => {
    //   auto mob = e.entity;
    //   auto eventId = e.eventId;
    //   if (eventId !== 'dungeons:recieved') {
    //     return;
    //   }
    //   auto proj = mob.getComponent('projectile');
    //   auto owner = proj.owner
    //   if (!owner) return;
    //   if (mob.typeId == "dungeons:rare_spinblade_projectile") {
    //     owner.startItemCooldown("spinblade_rare", 8);
    //     mob.remove()
    //   } else if (mob.typeId == "dungeons:spinblade_projectile") {
    //     owner.startItemCooldown("spinblade_common", 8);
    //     mob.remove()
    // 
    //   }
    // })

    // ==========================================
    // Transpiled from: components\artefacts\swiftnessBoot.js
    // ==========================================
    // // import {
    //   world,
    //   system
    // } from "@minecraft/server";
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:boots_of_switfness', {
    //     onUse(e, { params }) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto type = params.type
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_boots_of_swiftness')) return;
    //       }
    // 
    //       auto loc = player.location
    //       auto dim = player.dimension;
    //       dim.spawnParticle('dungeons:swiftness', loc)
    //       dim.playSound('armor.equip_leather', loc, {
    //         pitch: 1.5,
    //         volume: 0.5
    //       });
    //       dim.playSound("artefact.swiftness_boot.use", loc)
    // 
    //       auto duration = 60
    //       if (type == "rare") duration = 90
    // 
    //       player.addEffect('speed', duration, {
    //         amplifier: 1
    //       });
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\tastyBone.js
    // ==========================================
    // // import {
    //   system
    // } from "@minecraft/server";
    // 
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:tasty_bone', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_tasty_bone')) return;
    //       }
    // 
    // 
    // 
    //       auto dim = player.dimension;
    //       auto loc = player.location;
    //       dim.playSound("artefact.tasty_bone.use", loc)
    // 
    //       auto mob = dim.spawnEntity('dungeons:pet_wolf', loc);
    // 
    //       auto tameable = mob.getComponent('minecraft:tameable')
    //       tameable.tame(player);
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\tomeDuplication.js
    // ==========================================
    // // import {
    //   system
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:tome_of_duplication', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto returnquestion = false
    //       for (auto tag of player.getTags()) {
    //         if (tag.substring(0, 9) === 'tod:used_') {
    //           returnquestion = true
    //           // system.runTimeout(() => {
    //             player.removeTag(tag)
    //           }, 2)
    //         }
    //       }
    //       if (returnquestion == true) {
    //         auto dim = player.dimension;
    //         auto loc = player.location;
    //         dim.playSound("artefact.tome_of_duplication.use", loc)
    //         return;
    //       }
    //       player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.no_artefact_to_copy" }])
    //       auto cd = item.getComponent('cooldown');
    //       player.startItemCooldown(cd.cooldownCategory, 10);
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\totemCasting.js
    // ==========================================
    // // import {
    //   world,
    //   system
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:totem_of_casting', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_totem_of_casting')) return;
    //       }
    // 
    // 
    //       auto soulScore = // world.scoreboard.getObjective("soulGauge")
    //       auto soulGauge = soulScore.getScore(player)
    // 
    //       if (soulGauge < 12) {
    //         player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.collect_more_souls" }])
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //         return;
    //       } else {
    //         soulScore.addScore(player, -12)
    //       }
    //       auto dim = player.dimension
    //       auto loc = player.location
    // 
    //       dim.playSound("artefact.totem_of_casting.use", loc)
    //       auto spawnLoc = dim.getTopmostBlock({ x: loc.x, z: loc.z }, loc.y)
    //       if (spawnLoc == undefined) {
    //         spawnLoc = loc
    //       } else {
    //         spawnLoc = spawnLoc.above()
    //       }
    //       if (spawnLoc == undefined) spawnLoc = loc
    //       if (spawnLoc.y + 8 < loc.y) spawnLoc = { x: loc.x, y: loc.y - 4, z: loc.z }
    //       auto totem = player.dimension.spawnEntity('dungeons:totem_of_casting', { x: loc.x, y: spawnLoc.y, z: loc.z });
    //       auto tameable = totem.getComponent('minecraft:tameable')
    //       tameable.tame(player);
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\totemRegeneration.js
    // ==========================================
    // // import {
    //   world,
    //   system
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:totem_of_regeneration', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto dim = player.dimension;
    //       auto loc = player.location
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_totem_of_regeneration')) return;
    //       }
    // 
    //       dim.playSound('mob.evocation_illager.cast_spell', loc);
    //       auto spawnLoc = dim.getTopmostBlock({ x: loc.x, z: loc.z }, loc.y)
    //       if (spawnLoc == undefined) {
    //         spawnLoc = loc
    //       } else {
    //         spawnLoc = spawnLoc.above()
    //       }
    //       if (spawnLoc == undefined) spawnLoc = loc
    //       if (spawnLoc.y + 8 < loc.y) spawnLoc = { x: loc.x, y: loc.y - 4, z: loc.z }
    //       auto totem = player.dimension.spawnEntity('dungeons:totem_of_regeneration', { x: loc.x, y: spawnLoc.y, z: loc.z });
    //       auto tameable = totem.getComponent('minecraft:tameable')
    //       tameable.tame(player);
    //     }
    //   });
    // 
    // });
    // 
    // 
    // // world.afterEvents.dataDrivenEntityTrigger.subscribe((event) => {
    //   auto mob = event.entity;
    //   auto eventId = event.eventId;
    //   if (eventId !== 'dungeons:heal') {
    //     return;
    //   }
    //   if (mob.typeId !== "dungeons:totem_of_regeneration") return;
    //   auto owner = mob.getComponent('minecraft:tameable').tamedToPlayer;
    //   if (!owner) return;
    // 
    //   auto players = mob.dimension.getPlayers({ location: mob.location, maxDistance: 4 })
    // 
    //   for (auto player of players) {
    //     auto healAmt = 0.4
    //     if (player.id == owner.id) healAmt + 0.6
    // 
    //     auto hp = player.getComponent("health")
    //     if (!hp) return;
    // 
    //     auto maxHP = hp.defaultValue
    //     auto currentHP = hp.currentValue;
    // 
    //     if (healAmt + currentHP > maxHP) {
    //       hp.setCurrentValue(maxHP)
    //     } else {
    //       hp.setCurrentValue(currentHP + healAmt)
    //     }
    //   }
    // });

    // ==========================================
    // Transpiled from: components\artefacts\totemShielding.js
    // ==========================================
    // // import {
    //   world,
    //   system
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:totem_of_shielding', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto dim = player.dimension;
    //       auto loc = player.location
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_totem_of_shielding')) return;
    //       }
    // 
    //       dim.playSound('mob.evocation_illager.cast_spell', loc);
    //       auto spawnLoc = dim.getTopmostBlock({ x: loc.x, z: loc.z }, loc.y)
    //       if (spawnLoc == undefined) {
    //         spawnLoc = loc
    //       } else {
    //         spawnLoc = spawnLoc.above()
    //       }
    //       if (spawnLoc == undefined) spawnLoc = loc
    //       if (spawnLoc.y + 8 < loc.y) spawnLoc = { x: loc.x, y: loc.y - 4, z: loc.z }
    //       auto totem = player.dimension.spawnEntity('dungeons:totem_of_shielding', { x: loc.x, y: spawnLoc.y, z: loc.z });
    //       auto tameable = totem.getComponent('minecraft:tameable')
    //       tameable.tame(player);
    //     }
    //   });
    // 
    // });
    // 
    // // world.afterEvents.dataDrivenEntityTrigger.subscribe((event) => {
    //   auto mob = event.entity;
    //   auto eventId = event.eventId;
    //   if (eventId !== 'dungeons:shield') {
    //     return;
    //   }
    //   if (mob.typeId !== "dungeons:totem_of_shielding") return;
    //   auto owner = mob.getComponent('minecraft:tameable').tamedToPlayer;
    //   if (!owner) return;
    // 
    //   auto players = mob.dimension.getPlayers({ location: mob.location, maxDistance: 4 })
    // 
    //   for (auto player of players) {
    //     player.addEffect("resistance", 15)
    //   }
    // 
    //   auto entities = mob.dimension.getEntities({ location: mob.location, maxDistance: 7 })
    //   for (auto entity of entities) {
    //     if (entity.hasTag("dungeons:effected_by_shielding")) continue;
    //     auto proj = entity.getComponent("projectile")
    //     if (!proj) continue;
    //     if (proj.owner !== undefined) {
    //       if (proj.owner == owner) continue;
    //       if (// world.gameRules.pvp == false && proj.owner.typeId == "minecraft:player") continue;
    //     }
    //     auto v = entity.getVelocity()
    //     proj.shoot({ x: -v.x * 1.5, y: -0.2, z: -v.z * 1.5 })
    //     if (entity.isOnGround || std::floor(entity.location.y) <= std::floor(mob.location.y)) entity.addTag("dungeons:effected_by_shielding")
    //   }
    // });

    // ==========================================
    // Transpiled from: components\artefacts\totemSoulProtection.js
    // ==========================================
    // // import {
    //   world,
    //   system
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:totem_of_soul_protection', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_totem_of_soul_protection')) return;
    //       }
    // 
    // 
    //       auto soulScore = // world.scoreboard.getObjective("soulGauge")
    //       auto soulGauge = soulScore.getScore(player)
    // 
    //       if (soulGauge < 5) {
    //         player.playSound("mob.evocation_illager.cast_spell", { pitch: 0.6, volume: 0.5 })
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.collect_more_souls" }])
    //         auto cd = item.getComponent("cooldown")
    //         player.startItemCooldown(cd.cooldownCategory, 5);
    //         return;
    //       } else {
    //         soulScore.addScore(player, -5)
    //       }
    //       auto dim = player.dimension
    //       auto loc = player.location
    // 
    //       dim.playSound("artefact.totem_of_soul_protection.use", loc)
    //       auto spawnLoc = dim.getTopmostBlock({ x: loc.x, z: loc.z }, loc.y)
    //       if (spawnLoc == undefined) {
    //         spawnLoc = loc
    //       } else {
    //         spawnLoc = spawnLoc.above()
    //       }
    //       if (spawnLoc == undefined) spawnLoc = loc
    //       if (spawnLoc.y + 8 < loc.y) spawnLoc = { x: loc.x, y: loc.y - 4, z: loc.z }
    //       auto totem = player.dimension.spawnEntity('dungeons:totem_of_soul_protection', { x: loc.x, y: spawnLoc.y, z: loc.z });
    //       auto tameable = totem.getComponent('minecraft:tameable')
    //       tameable.tame(player);
    //     }
    //   });
    // 
    // });
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //   auto hurt = e.hurtEntity;
    //   if (!hurt || !hurt.isValid) return;
    //   if (hurt.typeId !== "minecraft:player") return;
    //   auto equippable = hurt.getComponent("equippable")
    //   auto mainHand = equippable.getEquipment("Mainhand")
    //   if (mainHand !== undefined && mainHand.typeId == "minecraft:totem_of_undying") return;
    //   auto offhand = equippable.getEquipment("Offhand")
    //   if (offhand !== undefined && offhand.typeId == "minecraft:totem_of_undying") return;
    //   auto baseDmg = e.damage;
    //   if (!baseDmg) return;
    //   if (baseDmg <= 0) return;
    // 
    //   auto totemInRange = hurt.dimension.getEntities({ maxDistance: 3.66, location: hurt.location, type: "dungeons:totem_of_soul_protection" }).length > 0
    //   if (!totemInRange) return;
    // 
    //   auto soulScore = // world.scoreboard.getObjective("soulGauge")
    //   auto soulGauge = soulScore.getScore(hurt)
    // 
    //   if (soulGauge < 10) {
    //     return;
    //   }
    // 
    //   auto hp = hurt.getComponent("health")
    //   if (hp.currentValue > 0) return;
    //   e.damage = e.damage * 0.0
    //   e.cancel = true;
    //   // system.run(() => {
    //     auto dim = hurt.dimension
    //     auto loc = hurt.location
    //     dim.playSound("random.totem", loc, { pitch: 1.5 })
    //     dim.playSound("artefact.totem_of_soul_protection.use", loc, { pitch: 0.7 })
    //     hurt.runCommand("camerashake add @s 0.2 0.3")
    //     hurt.runCommand("camerashake add @s 0.2 0.5")
    //     hurt.runCommand("camerashake add @s 0.2 0.7")
    //     hurt.addEffect("regeneration", 300, { amplifier: 1 })
    //     hurt.addEffect("resistance", 30, { amplifier: 5 })
    //     if (hp.currentValue / 2 < 5) {
    //       hp.setCurrentValue(5)
    //     } else {
    //       hp.setCurrentValue(hp.currentValue / 2)
    //     }
    //     for (auto i = 0; i < 10; i++) {
    //       // system.runTimeout(() => {
    //         if (soulScore.getScore(hurt) > 0) {
    //           soulScore.addScore(hurt, -1)
    //           hurt.onScreenDisplay.setActionBar(`§s${soulScore.getScore(hurt)}§s Souls `)
    //         }
    //       }, i)
    //     }
    // 
    //     // system.runTimeout(() => {
    //       hurt.onScreenDisplay.setActionBar(`§b${soulScore.getScore(hurt)}§s Souls `)
    //     }, 11)
    //   })
    // })

    // ==========================================
    // Transpiled from: components\artefacts\updraftTome.js
    // ==========================================
    // // import {
    //   world,
    //   system,
    //   ItemStack,
    //   EntityDamageCause
    // } from "@minecraft/server";
    // // import { isValidTarget, specialDamage } from "main.js"
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:updraft_tome', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto dim = player.dimension;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_updraft_tome')) return;
    //       }
    //       auto testTargets = dim.getEntities({
    //         location: player.location,
    //         maxDistance: 7.5
    //       });
    //       auto isAnyTargets = false
    //       for (auto test of testTargets) {
    //         if (isValidTarget(test) && test !== player) isAnyTargets = true
    //       }
    //       if (isAnyTargets == false) {
    //         player.sendMessage([{ text: "§7§o" }, { translate: "dungeons.warn.no_targets" }])
    //         auto cd = item.getComponent('cooldown');
    //         player.startItemCooldown(cd.cooldownCategory, 10);
    //         return;
    //       }
    //       dim.playSound('artefact.updraft_tome.use', player.location);
    //       // system.runTimeout(() => {
    //         dim.playSound('wind_charge.burst', player.location, {
    //           volume: 0.9,
    //           pitch: 0.5
    //         });
    //         auto damageRange = dim.getEntities({
    //           location: player.location,
    //           maxDistance: 7.5
    //         });
    //         auto count = 7
    //         for (auto target of damageRange) {
    //           if (count == 0) return;
    //           if (isValidTarget(target) && target !== player) {
    //             target.dimension.spawnParticle('minecraft:wind_explosion_emitter', { x: target.location.x, y: target.location.y + 1, z: target.location.z });
    //             dim.playSound('wind_charge.burst', { x: target.location.x, y: target.location.y + 1, z: target.location.z }, {
    //               volume: 0.9,
    //               pitch: 1
    //             });
    //             auto damagedone = specialDamage(player, target, 5, EntityDamageCause.entityExplosion, ["wind", "artefact"])
    //             if (damagedone) {
    //               target.applyKnockback({ x: 0, z: 0 }, 1.1);
    //               count -= 1;
    //             }
    //           }
    //         }
    //       }, 10)
    //     }
    //   });
    // });

    // ==========================================
    // Transpiled from: components\artefacts\vexingChant.js
    // ==========================================
    // // import {
    //   world,
    //   system,
    //   ItemStack
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:vexing_chant', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto dim = player.dimension
    //       auto playerloc = player.location;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_vexing_chant')) return;
    //       }
    // 
    // 
    // 
    //       auto loc1 = { x: player.location.x + 2, y: playerloc.y + 1, z: player.location.z }
    //       auto loc2 = { x: player.location.x - 2, y: playerloc.y + 1, z: player.location.z - 2 }
    //       auto loc3 = { x: player.location.x - 2, y: playerloc.y + 1, z: player.location.z + 2 }
    // 
    //       auto locations = [loc1, loc2, loc3]
    // 
    //       dim.playSound("artefact.vexing_chant.use", playerloc)
    // 
    //       for (auto loc of locations) {
    //         dim.spawnParticle("dungeons:humanoid_enchant", loc)
    //         auto vex = player.dimension.spawnEntity('dungeons:guardian_vex', loc);
    //         auto tameable = vex.getComponent('minecraft:tameable')
    //         tameable.tame(player);
    //       }
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\windHorn.js
    // ==========================================
    // // import {
    //   world,
    //   system,
    //   ItemStack
    // } from "@minecraft/server";
    // 
    // // import { getDirection, makeVector, isValidTarget } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:wind_horn', {
    //     onUse(e, { params }) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    //       auto type = params.type
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_wind_horn')) return;
    //       }
    // 
    // 
    //       player.dimension.playSound("artefact.wind_horn", player.location, { volume: 0.8, pitch: 1 })
    //       player.dimension.spawnParticle("dungeons:wind_horn", player.location)
    // 
    //       auto power = 3
    //       if (type == "rare") power = 4.5
    // 
    //       auto targets = player.dimension.getEntities({ location: player.location, maxDistance: 7 })
    //       for (auto target of targets) {
    //         if (isValidTarget(target) && target !== player) {
    //           auto dir = getDirection(player.location, target.location);
    //           target.applyKnockback(makeVector(dir, power), 0.5)
    //           target.addEffect("slowness", power * 20 + 40)
    // 
    //         }
    //       }
    //     }
    //   });
    // 
    // });

    // ==========================================
    // Transpiled from: components\artefacts\wonderfulWheat.js
    // ==========================================
    // // import {
    //   world,
    //   system
    // } from "@minecraft/server";
    // 
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //   event.itemComponentRegistry.registerCustomComponent('dungeons:wonderful_wheat', {
    //     onUse(e) {
    //       auto player = e.source;
    //       auto item = e.itemStack;
    // 
    //       if (item.hasTag('dungeons:tome_of_duplication')) {
    //         if (!player.hasTag('tod:used_wonderful_wheat')) return;
    //       }
    // 
    // 
    // 
    //       auto dim = player.dimension;
    //       auto loc = player.location;
    //       dim.playSound("artefact.wonderful_wheat.use", loc)
    // 
    //       auto mob = dim.spawnEntity('dungeons:pet_llama', loc);
    // 
    //       auto tameable = mob.getComponent('minecraft:tameable')
    //       tameable.tame(player);
    //     }
    //   });
    // 
    // });
    // 
    // //attack boost
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //   auto damageSource = e.damageSource.damagingEntity;
    //   if (!damageSource) return;
    //   if (e.damageSource.cause == "override") return;
    //   if (damageSource.typeId == "dungeons:pet_llama") {
    //     auto cause = e.damageSource.cause
    //     if (cause == "lightning") return;
    //     e.damage = e.damage * 4
    //   }
    // 
    // });

    void init() {}
}
