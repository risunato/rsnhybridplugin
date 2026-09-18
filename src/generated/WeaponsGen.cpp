#include "generated/WeaponsGen.h"

namespace WeaponsGen {
    // ==========================================
    // Transpiled from: components\weapons.js
    // ==========================================
    // //longsword
    // // import "./weapons/longsword.js";
    // // import "./weaponEffects/sharpened.js";
    // // import "./weaponEffects/criticalHit.js";
    // // import "./weaponEffects/criticalHitSpooky.js";
    // 
    // //anchor
    // // import "./weapons/anchor.js";
    // // import "./weaponEffects/poison.js";
    // 
    // //axe
    // // import "./weapons/axe.js";
    // // import "./weaponEffects/fireAspect.js";
    // // import "./weaponEffects/stunning.js";
    // 
    // //backstabber
    // // import "./weaponEffects/ambush.js";
    // // import "./weaponEffects/echo.js";
    // 
    // //battlestaff
    // // import "./weapons/battlestaff.js";
    // // import "./weaponEffects/exploding.js";
    // // import "./weaponEffects/committed.js";
    // 
    // //bone club
    // // import "./weapons/boneClub.js";
    // // import "./weaponEffects/illagersBane.js";
    // 
    // //broken sawblade
    // // import "./weapons/brokenSawblade.js";
    // 
    // //claymore
    // // import "./weapons/claymore.js";
    // // import "./weaponEffects/leeching.js";
    // // import "./weaponEffects/swirling.js";
    // 
    // //coral blade
    // // import "./weapons/spongeStriker.js";
    // // import "./weaponEffects/waterDamage.js";
    // 
    // //cutlass
    // // import "./weapons/cutlass.js";
    // // import "./weaponEffects/weakening.js";
    // // import "./weaponEffects/rampaging.js";
    // 
    // //daggers
    // // import "./weapons/daggers.js";
    // // import "./weaponEffects/freezing.js";
    // // import "./weaponEffects/enigmaResonator.js";
    // 
    // //doubleaxe
    // // import "./weaponEffects/shockwave.js";
    // 
    // //gauntlets
    // // import "./weapons/gauntlets.js"; // this also handles triple hit
    // 
    // //glaive
    // // import "./weapons/glaive.js";
    // // import "./weaponEffects/smiting.js";
    // // import "./weaponEffects/poisonCloud.js";
    // 
    // //hammer
    // // import "./weapons/hammer.js";
    // // import "./weaponEffects/thundering.js";
    // // import "./weaponEffects/gravity.js";
    // // import "./weaponEffects/gravitySpooky.js";
    // 
    // //obsidian claymore
    // // import "./weapons/obsidianClaymore.js"; // this also handles shared pain
    // 
    // //rapier
    // // import "./weapons/rapier.js";
    // // import "./weaponEffects/busyBee.js";
    // 
    // //soul knife
    // // import "./weaponEffects/soulSiphon.js";
    // 
    // //soul scythe
    // // import "./weapons/soulScythe.js";
    // // import "./weaponEffects/freezingSpooky.js";
    // // import "./weaponEffects/chains.js";
    // 
    // //tempest knife
    // // import "./weaponEffects/rushdown.js";
    // 
    // //whip
    // // import "./weapons/whip.js";
    // // import "./weaponEffects/whip.js";
    // 
    // //void_blades
    // // import "./weapons/voidBlades.js";
    // // import "./weaponEffects/voidStrike.js";
    // 
    // //spear
    // // import "./weapons/rushSpear.js";
    // // import "./weaponEffects/looting.js";
    // 
    // //mace
    // // import "./weapons/mace.js";
    // // import "./weaponEffects/radiance.js";
    // 
    // //sickles
    // // import "./weapons/sickles.js";
    // // import "./weaponEffects/prospector.js";
    // 
    // //pickaxe
    // // import "./weaponEffects/golemDamage.js";
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // // import "./weapons/alylicleaver.js";

    // ==========================================
    // Transpiled from: components\weaponEffects\ambush.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:ambush"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     if (attacker.getEffect("invisibility")) {
    //         e.damage = e.damage * 1.3
    //         // system.run(() => {
    //             auto dim = hurt.dimension
    //             auto hurtLoc = hurt.location;
    //             dim.spawnParticle("dungeons:ambush", { x: hurtLoc.x, y: hurtLoc.y + 0.2, z: hurtLoc.z })
    //             dim.playSound("random.anvil_land", hurtLoc, { volume: 0.2, pitch: 1.5 })
    //         })
    //     }
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\busyBee.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:busy_bee"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     auto critical = std::floor(((float)rand()/RAND_MAX)() * 10);
    //     if (critical <= 3) {
    //         // system.run(() => {
    //             auto dim = hurt.dimension
    //             auto hurtLoc = hurt.getHeadLocation();
    //             auto pet = dim.spawnEntity('dungeons:pet_bee', hurtLoc);
    //             auto beeTameable = pet.getComponent('minecraft:tameable')
    //             beeTameable.tame(attacker);
    //             dim.spawnParticle("dungeons:busy_bee_spawn", hurtLoc)
    //             dim.playSound("artefact.buzzy_nest.spawn", hurtLoc)
    //         })
    //     }
    // 
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\chains.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause,
    //     MolangVariableMap
    // } from "@minecraft/server";
    // // import { specialDamage, isValidTarget } from "main.js";
    // 
    // auto effectId = "dungeons:chains"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     // system.run(() => {
    //         if (((float)rand()/RAND_MAX)() > 0.3) return;
    //         auto loc = hurt.location;
    //         auto dim = hurt.dimension;
    //         auto chainedTargets = [hurt]
    //         if (chainedTargets.length == 1) {
    //             auto target = findNewChainTarget(chainedTargets, attacker, chainedTargets[0].location, dim)
    //             if (target) chainedTargets.push(target)
    //         }
    //         if (chainedTargets.length == 2) {
    //             auto target = findNewChainTarget(chainedTargets, attacker, chainedTargets[1].location, dim)
    //             if (target) chainedTargets.push(target)
    //         }
    //         if (chainedTargets.length == 3) {
    //             auto target = findNewChainTarget(chainedTargets, attacker, chainedTargets[2].location, dim)
    //             if (target) chainedTargets.push(target)
    //         }
    //         auto length = 5 + chainedTargets.length * 10
    //         for (auto target of chainedTargets) {
    //             auto l = target.location
    //             auto map = new MolangVariableMap()
    //             map.setFloat("variable.duration", length / 20)
    //             dim.spawnParticle('dungeons:chain_point', { x: l.x, y: l.y + 0.1, z: l.z }, map)
    //         }
    //         dim.playSound('block.bell.hit', loc, { volume: 1, pitch: 2.5 });
    //         for (auto i = 0; i < chainedTargets.length; i++) {
    //             // system.runTimeout(() => {
    //                 dim.playSound('block.bell.hit', loc, { volume: 2 - (i / 5), pitch: 2.5 + (i / 4) });
    // 
    //             }, i * 2)
    // 
    //         }
    //         for (auto i = 0; i < length; i++) {
    //             // system.runTimeout(() => {
    //                 if (i % 15 == 0) {
    //                     if (chainedTargets.length > 1) {
    //                         for (auto target of chainedTargets) {
    //                             if (!target.isValid) {
    //                                 chainedTargets.pop(target)
    //                                 continue;
    //                             }
    //                             if (target.dimension !== dim) {
    //                                 chainedTargets.pop(target)
    //                                 continue;
    //                             }
    //                             if (target == chainedTargets[0]) continue;
    //                             connectChains(target.location, loc, dim)
    //                         }
    //                     }
    //                 }
    //                 for (auto target of chainedTargets) {
    //                     if (!target.isValid) {
    //                         chainedTargets.pop(target)
    //                         continue;
    //                     }
    //                     if (target.dimension !== dim) {
    // 
    //                         chainedTargets.pop(target)
    //                         continue;
    //                     }
    //                     target.tryTeleport(target.location)
    //                 }
    //             }, i)
    //         }
    //     })
    // });
    // 
    // void connectChains(targetLoc, originLoc, dim) {
    //     auto xDif = targetLoc.x - originLoc.x
    //     auto yDif = targetLoc.y - originLoc.y
    //     auto zDif = targetLoc.z - originLoc.z
    //     auto distanceBetween = Math.hypot(originLoc.x - targetLoc.x, originLoc.y - targetLoc.y, originLoc.z - targetLoc.z)
    //     for (auto i = 1; i < distanceBetween; i += 0.1) {
    //         dim.spawnParticle("dungeons:chain_connection", { x: originLoc.x + (xDif * (i / distanceBetween)), y: 1 + originLoc.y + (yDif * (i / distanceBetween)), z: originLoc.z + (zDif * (i / distanceBetween)) })
    // 
    //     }
    // }
    // 
    // void findNewChainTarget(chainedTargets, owner, loc, dim) {
    //     auto chainRange = dim.getEntities({
    //         location: loc,
    //         minDistance: 0.5,
    //         maxDistance: 7,
    //         excludeFamilies: ['ignore']
    //     });
    //     for (auto target of chainRange) {
    //         if (chainedTargets.includes(target)) continue
    //         if (isValidTarget(target) == false) continue;
    //         if (target === owner) continue;
    //         return target
    //     }
    //     return undefined
    // }

    // ==========================================
    // Transpiled from: components\weaponEffects\committed.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:committed"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     auto baseDamage = e.damage;
    //     auto hp = hurt.getComponent("health")
    //     auto mult = 2 - (((hp.currentValue + baseDamage) / hp.defaultValue))
    //     e.damage = e.damage * mult
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\criticalHit.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:critical_hit"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     auto critical = std::floor(((float)rand()/RAND_MAX)() * 10);
    //     if (critical == 1) {
    //         e.damage = e.damage * 2
    //         // system.run(() => {
    //             auto dim = hurt.dimension
    //             auto hurtLoc = hurt.location;
    //             dim.spawnParticle("dungeons:skull_crit", hurtLoc)
    //             dim.spawnParticle("dungeons:skull_burst", hurtLoc)
    //             dim.playSound("random.anvil_land", hurtLoc, { volume: 0.7, pitch: 1.5 })
    //         })
    //     }
    // 
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\criticalHitSpooky.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:critical_hit_spooky"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     auto critical = std::floor(((float)rand()/RAND_MAX)() * 10);
    //     if (critical == 1) {
    //         e.damage = e.damage * 2
    //         // system.run(() => {
    //             auto dim = hurt.dimension
    //             auto hurtLoc = hurt.location;
    //             dim.spawnParticle("dungeons:spooky_skull_crit", hurtLoc)
    //             dim.spawnParticle("dungeons:spooky_skull_burst", hurtLoc)
    //             dim.playSound("random.anvil_land", hurtLoc, { volume: 0.7, pitch: 0.75 })
    //         })
    //     }
    // 
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\echo.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // // import { specialDamage } from "main.js";
    // 
    // auto effectId = "dungeons:echo"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     auto hp = hurt.getComponent("health")
    //     if (hp) {
    //         if (hp.currentValue <= 0) return;
    //     }
    //     // system.run(() => {
    //         auto echoT = // world.scoreboard.getObjective('dungeons:echo_t');
    //         if (!echoT) {
    //             echoT = // world.scoreboard.addObjective('dungeons:echo_t');
    //         }
    //         if (echoT.hasParticipant(attacker.scoreboardIdentity)) return;
    //         echoT.setScore(attacker, 110);
    //         // system.runTimeout(() => {
    //             auto dim = hurt.dimension
    //             auto hurtLoc = hurt.location;
    //             dim.spawnParticle('dungeons:echo', hurtLoc);
    //             dim.playSound('weapon.daggers.hit', hurtLoc, {
    //                 volume: 0.6
    //             });
    //             auto diddamage = specialDamage(attacker, hurt, 7, cause, ["weapon", "apply_weakness", "apply_strength", "apply_melee_enchants"])
    //             if (diddamage == false) specialDamage(attacker, hurt, 1, cause, ["weapon"])
    //         }, 10)
    //     })
    // });
    // 
    // // TIMER
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers()) {
    //         auto timeLeft = // world.scoreboard.getObjective('dungeons:echo_t');
    //         if (!timeLeft) return;
    //         if (!player.scoreboardIdentity) continue;
    //         if (!timeLeft.hasParticipant(player.scoreboardIdentity)) continue;
    //         auto duration = timeLeft.getScore(player);
    // 
    //         if (duration > 0) {
    //             timeLeft.addScore(player, -1);
    //         }
    //         if (duration <= 0) {
    //             timeLeft.removeParticipant(player)
    //         }
    //     }
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\enigmaResonator.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:enigma_resonator"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     auto critical = std::floor(((float)rand()/RAND_MAX)() * 400);
    //     auto souls = // world.scoreboard.getObjective('soulGauge').getScore(attacker);
    //     if (souls > 100) souls = 100
    //     if (critical < souls) {
    //         e.damage = e.damage * 2
    //         // system.run(() => {
    //             auto dim = hurt.dimension
    //             auto hurtLoc = hurt.location;
    //             dim.spawnParticle("dungeons:enigma_skull_crit", hurtLoc)
    //             dim.spawnParticle("dungeons:enigma_skull_burst", hurtLoc)
    //             dim.playSound("random.anvil_land", hurtLoc, { volume: 0.7, pitch: 1.5 })
    //         })
    //     }
    // 
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\exploding.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // // import { specialDamage, isValidTarget } from "main.js";
    // 
    // auto effectId = "dungeons:exploding"
    // 
    // 
    // 
    // // world.afterEvents.entityDie.subscribe((e) => {
    //     auto hurt = e.deadEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     auto hp = hurt.getComponent('minecraft:health')
    // 
    //     if (!hp) {
    //         console.warn('Entity does not have health component');
    //         return;
    //     }
    //     // system.runTimeout(() => {
    //         if (!hurt.isValid) return;
    //         if (!attacker.isValid) return;
    //         auto dim = attacker.dimension;
    //         auto targetLoc = hurt.location
    //         auto damageRange = dim.getEntities({
    //             location: targetLoc,
    //             maxDistance: 5,
    //             excludeFamilies: ['ignore']
    //         });
    //         for (auto target of damageRange) {
    //             if (isValidTarget(target) == false) continue;
    //             if (target === hurt) continue;
    //             if (target === attacker) continue;
    //             target.addTag("dungeons:area_hit")
    //             // system.runTimeout(() => {
    //                 if (target.isValid) target.removeTag("dungeons:area_hit")
    //             }, 1)
    //             auto damageDone = specialDamage(attacker, target, hp.defaultValue * 0.33, EntityDamageCause.entityAttack, ["weapon"])
    //             if (!damageDone) continue;
    //             target.applyKnockback({ x: 0, z: 0 }, 0.3)
    //         }
    //         dim.spawnParticle("dungeons:explosion_smoke", { x: targetLoc.x, y: targetLoc.y + 0.5, z: targetLoc.z })
    //         dim.spawnParticle("dungeons:explosion_dust", { x: targetLoc.x, y: targetLoc.y + 0.5, z: targetLoc.z })
    //         dim.playSound("random.explode", targetLoc, { pitch: 0.7 })
    //         dim.playSound("weapon.enchant.exploding", targetLoc)
    //     }, 18) // waits 0.9 seconds for death to finish
    // 
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\fireAspect.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:fire_aspect"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     // system.run(() => {
    //         auto isFire = hurt.setOnFire(4 + e.damage * 1.2, true)
    //         if (!isFire) return;
    //         attacker.dimension.playSound('mob.ghast.fireball', hurt.location, {
    //             pitch: 1.05,
    //             volume: 0.33
    //         })
    //     })
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\freezing.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:freezing"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     // system.run(() => {
    //         if (hurt.getEffect("slowness")) return;
    //         hurt.addEffect("slowness", 100, { amplifier: 2 })
    //         auto dim = hurt.dimension;
    //         auto loc = hurt.location
    //         dim.spawnParticle("dungeons:element_freeze", { x: loc.x, y: loc.y + 1, z: loc.z })
    //         dim.playSound("mob.player.hurt.freeze", loc, {})
    //     })
    // });
    // 

    // ==========================================
    // Transpiled from: components\weaponEffects\freezingSpooky.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:freezing_spooky"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     // system.run(() => {
    //         if (hurt.getEffect("slowness")) return;
    //         hurt.addEffect("slowness", 100, { amplifier: 2 })
    //         auto dim = hurt.dimension;
    //         auto loc = hurt.location
    //         dim.spawnParticle("dungeons:spooky_element_freeze", { x: loc.x, y: loc.y + 1, z: loc.z })
    //         dim.playSound("mob.player.hurt.freeze", loc, { pitch: 0.3 })
    //     })
    // });
    // 

    // ==========================================
    // Transpiled from: components\weaponEffects\golemDamage.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:sharpened_pickaxe"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     if (golems.includes(hurt.typeId)) {
    //         auto dim = attacker.dimension;
    //         auto targetLoc = hurt.location;
    //         e.damage = e.damage * 1.3
    //         // system.run(() => {
    //             dim.spawnParticle("dungeons:smiting_1", { x: targetLoc.x - 0.2, y: targetLoc.y + 1, z: targetLoc.z - 0.2 })
    //             dim.spawnParticle("dungeons:smiting_1", { x: targetLoc.x - 0.2, y: targetLoc.y + 1, z: targetLoc.z + 0.2 })
    //             dim.spawnParticle("dungeons:smiting_1", { x: targetLoc.x + 0.2, y: targetLoc.y + 1, z: targetLoc.z })
    //         })
    //     }
    // });
    // 
    // auto golems = [
    //     "minecraft:iron_golem",
    //     "minecraft:copper_golem",
    //     "minecraft:snow_golem",
    //     "dungeons:redstone_golem",
    //     "dungeons:redstone_cube",
    //     "dungeons:redstone_monstrosity",
    //     "dungeons:squall_golem",
    //     "dungeons:tempest_golem",
    //     "dungeons:mooshroom_monstrosity",
    //     "dungeons:obsidian_monstrosity"
    // ]

    // ==========================================
    // Transpiled from: components\weaponEffects\gravity.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // // import { isValidTarget, gravityTo } from "main.js";
    // 
    // auto effectId = "dungeons:gravity"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (hurt.hasTag("dungeons:area_hit")) return;
    //     if (e.damage <= 0) return;
    //     // system.run(() => {
    //         auto cd = // world.scoreboard.getObjective('dungeons:gravity_t');
    //         if (!cd) {
    //             cd = // world.scoreboard.addObjective('dungeons:gravity_t');
    //         }
    //         if (cd.hasParticipant(attacker.scoreboardIdentity)) {
    //             cd.setScore(attacker, 10);
    //             return;
    //         }
    //         // system.run(() => {
    //             cd.setScore(attacker, 10);
    //             auto dim = attacker.dimension
    //             auto targetLoc = hurt.location;
    //             auto gravityTargets = dim.getEntities({
    //                 location: targetLoc,
    //                 maxDistance: 4,
    //                 minDistance: 0.5,
    //                 excludeFamilies: ['ignore', 'gravity_immune']
    //             });
    //             if (gravityTargets.length <= 0) return;
    //             hurt.applyKnockback({ x: 0, z: 0 }, 0.1)
    //             dim.spawnParticle("dungeons:gravity", { x: targetLoc.x, y: targetLoc.y + 0.5, z: targetLoc.z })
    //             dim.playSound("mob.endermen.portal", targetLoc, { pitch: 0.65 })
    //             for (auto target of gravityTargets) {
    //                 if (target == attacker || target == hurt || isValidTarget(target) == false) continue;
    //                 gravityTo(target, targetLoc)
    //             }
    //         })
    //     })
    // });
    // 
    // // TIMER
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers()) {
    //         auto timeLeft = // world.scoreboard.getObjective('dungeons:gravity_t');
    //         if (!timeLeft) return;
    //         if (!player.scoreboardIdentity) continue;
    //         if (!timeLeft.hasParticipant(player.scoreboardIdentity)) continue;
    //         auto duration = timeLeft.getScore(player);
    // 
    //         if (duration > 0) {
    //             timeLeft.addScore(player, -1);
    //         }
    //         if (duration <= 0) {
    //             timeLeft.removeParticipant(player)
    //         }
    //     }
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\gravitySpooky.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // // import { isValidTarget, gravityTo } from "main.js";
    // 
    // auto effectId = "dungeons:gravity_spooky"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (hurt.hasTag("dungeons:area_hit")) return;
    //     if (e.damage <= 0) return;
    //     // system.run(() => {
    //         auto cd = // world.scoreboard.getObjective('dungeons:gravity_t');
    //         if (!cd) {
    //             cd = // world.scoreboard.addObjective('dungeons:gravity_t');
    //         }
    //         if (cd.hasParticipant(attacker.scoreboardIdentity)) {
    //             cd.setScore(attacker, 10);
    //             return;
    //         }
    //         // system.run(() => {
    //             cd.setScore(attacker, 10);
    //             auto dim = attacker.dimension
    //             auto targetLoc = hurt.location;
    //             auto gravityTargets = dim.getEntities({
    //                 location: targetLoc,
    //                 maxDistance: 4,
    //                 minDistance: 0.5,
    //                 excludeFamilies: ['ignore', 'gravity_immune']
    //             });
    //             if (gravityTargets.length <= 0) return;
    //             hurt.applyKnockback({ x: 0, z: 0 }, 0.1)
    //             dim.spawnParticle("dungeons:spooky_gravity", { x: targetLoc.x, y: targetLoc.y + 0.5, z: targetLoc.z })
    //             dim.playSound("mob.endermen.portal", targetLoc, { pitch: 0.65 })
    //             for (auto target of gravityTargets) {
    //                 if (target == attacker || target == hurt || isValidTarget(target) == false) continue;
    //                 gravityTo(target, targetLoc)
    //             }
    //         })
    //     })
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\illagersBane.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:illagers_bane"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     if (hurt.matches({ families: ["illager"] })) {
    //         auto dim = attacker.dimension;
    //         auto targetLoc = hurt.location;
    //         e.damage = e.damage * 1.35
    //         // system.run(() => {
    // 
    //             dim.spawnParticle("dungeons:illagers_bane_1", { x: targetLoc.x, y: targetLoc.y + 1, z: targetLoc.z })
    //             dim.spawnParticle("dungeons:illagers_bane_2", { x: targetLoc.x, y: targetLoc.y + 1, z: targetLoc.z })
    //         })
    //     }
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\leeching.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause,
    //     MolangVariableMap
    // } from "@minecraft/server";
    // // import { specialDamage, isValidTarget } from "main.js";
    // 
    // auto effectId = "dungeons:leeching"
    // 
    // 
    // 
    // // world.afterEvents.entityDie.subscribe((e) => {
    //     auto hurt = e.deadEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     auto hp = attacker.getComponent('minecraft:health')
    // 
    //     if (!hp) {
    //         console.warn('Entity does not have health component');
    //         return;
    //     }
    //     auto hurtHp = hurt.getComponent('minecraft:health')
    // 
    //     if (!hurtHp) {
    //         console.warn('Entity does not have health component');
    //         return;
    //     }
    //     // system.runTimeout(() => {
    //         auto maxHeal = 5
    //         auto minHeal = 0.5
    // 
    //         auto hurtMaxHP = hurtHp.defaultValue
    //         auto maxHP = hp.defaultValue
    //         auto currentHP = hp.currentValue;
    // 
    //         auto amountHealed = hurtMaxHP * 0.05
    //         if (amountHealed > maxHeal) amountHealed = maxHeal
    //         if (amountHealed < minHeal) amountHealed = minHeal
    //         if ((amountHealed + currentHP) > maxHP) {
    //             hp.setCurrentValue(maxHP)
    //         } else {
    //             hp.setCurrentValue(currentHP + amountHealed)
    //         }
    //         auto dim = hurt.dimension;
    //         auto loc = hurt.location;
    //         auto map = new MolangVariableMap()
    //         map.setFloat("variable.particle_count", amountHealed)
    //         dim.spawnParticle('dungeons:leeching_particle', { x: loc.x, y: loc.y + 0.2, z: loc.z }, map)
    // 
    //     }, 18) // waits 0.9 seconds for death to finish
    // 
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\looting.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:looting"
    // 
    // auto noLootingItems = [
    //     "minecraft:nether_star",
    //     "minecraft:totem_of_undying",
    //     "minecraft:saddle",
    //     "dungeons:redstone_key",
    //     "dungeons:nameless_key",
    //     "dungeons:questionable_key",
    //     "dungeons:wretched_key",
    //     "dungeons:corrupted_key",
    //     "dungeons:jungle_key",
    //     "dungeons:tempest_key",
    //     "dungeons:ancient_key",
    //     "dungeons:blaze_key",
    //     "dungeons:echo_key",
    //     "dungeons:skeleton_key",
    //     "dungeons:void_key",
    //     "dungeons:obsidian_key"
    // ]
    // 
    // // world.afterEvents.entityDie.subscribe((e) => {
    //     auto hurt = e.deadEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     auto loc = hurt.location
    //     auto dim = hurt.dimension
    //     auto lootManager = // world.getLootTableManager()
    //     auto loot = lootManager.generateLootFromEntity(hurt, heldItem)
    //     if (!loot) return;
    //     for (auto item of loot) {
    //         if (noLootingItems.includes(item.typeId)) continue;
    //         if (item.hasTag("dungeons:ignore_looting")) continue;
    //         auto spawned = dim.spawnItem(item, loc)
    //         auto x = ((float)rand()/RAND_MAX)() * 0.5 - 0.5
    //         auto z = ((float)rand()/RAND_MAX)() * 0.5 - 0.5
    //         spawned.applyImpulse({ x: x / 5, y: 0.01, z: z / 5 })
    //     }
    //     if (loot.length > 0) {
    //         dim.spawnParticle("dungeons:radiance_aura2", { x: loc.x, y: loc.y + 1, z: loc.z })
    //     }
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\poison.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:poison"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     // system.run(() => {
    //         if (hurt.getEffect("fatal_poison")) return;
    //         hurt.addEffect("fatal_poison", 100)
    //     })
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\poisonCloud.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // // import { specialDamage, isValidTarget } from "main.js";
    // 
    // auto effectId = "dungeons:poison_cloud"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     auto critical = std::floor(((float)rand()/RAND_MAX)() * 3);
    //     if (critical == 1) {
    //         // system.run(() => {
    //             auto cd = // world.scoreboard.getObjective('dungeons:poison_cloud_t');
    //             if (!cd) {
    //                 cd = // world.scoreboard.addObjective('dungeons:poison_cloud_t');
    //             }
    //             if (cd.hasParticipant(attacker.scoreboardIdentity)) {
    //                 return;
    //             }
    //             auto dim = hurt.dimension
    //             auto hurtLoc = hurt.location;
    //             cd.setScore(attacker, 80)
    //             dim.playSound('weapon.enchant.poison', hurtLoc)
    //             createPoisonCloud(5 * 2, dim, hurtLoc, attacker)
    //         })
    //     }
    // 
    // });
    // 
    // // TIMER
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers()) {
    //         auto timeLeft = // world.scoreboard.getObjective('dungeons:poison_cloud_t');
    //         if (!timeLeft) return;
    //         if (!player.scoreboardIdentity) continue;
    //         if (!timeLeft.hasParticipant(player.scoreboardIdentity)) continue;
    //         auto duration = timeLeft.getScore(player);
    // 
    //         if (duration > 0) {
    //             timeLeft.addScore(player, -1);
    //         }
    //         if (duration <= 0) {
    //             timeLeft.removeParticipant(player)
    //         }
    //     }
    // });
    // 
    // // cloud
    // void createPoisonCloud(timeLeft, dim, loc, owner) {
    //     if (timeLeft <= 0) return;
    //     if (timeLeft > 1) {
    //         dim.spawnParticle("dungeons:poison_cloud_smoke", loc)
    //         dim.spawnParticle("dungeons:poison_cloud_swirls", loc)
    //     }
    //     auto damageRange = dim.getEntities({
    //         location: loc,
    //         maxDistance: 4,
    //         excludeFamilies: ['ignore']
    //     });
    //     for (auto target of damageRange) {
    //         if (isValidTarget(target) == false) continue;
    //         if (target === owner) continue;
    //         auto damage = 3
    //         if (target.typeId !== "minecraft:player") damage += 1
    //         auto damageDone = specialDamage(owner, target, damage, EntityDamageCause.magic, ["poison"])
    //         if (damageDone) {
    //             target.applyKnockback({ x: 0, z: 0 }, -0.1)
    //             if (damage <= 3) target.addEffect("poison", 11)
    //             if (damage > 3) target.addEffect("fatal_poison", 11)
    //         }
    //     }
    //     // system.runTimeout(() => {
    //         createPoisonCloud(timeLeft - 1, dim, loc, owner)
    //     }, 10)
    // }

    // ==========================================
    // Transpiled from: components\weaponEffects\prospector.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:prospector"
    // 
    // 
    // 
    // // world.afterEvents.entityDie.subscribe((e) => {
    //     auto hurt = e.deadEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    // 
    //     if (!hurt.matches({ families: ["player"] }) && !hurt.matches({ families: ["monster"] })) return;
    // 
    //     hurt.dimension.spawnParticle('dungeons:emerald', hurt.location)
    //     attacker.playSound('artefact.shadow_break',
    //         {
    //             pitch: 1.5,
    //             volume: 0.3
    //         });
    //     auto hp = hurt.getComponent('minecraft:health')
    //     auto expAdded = hp.defaultValue * 0.2
    //     for (auto i = 0; i < std::floor(hp.defaultValue * 0.8); i++) {
    //         if (((float)rand()/RAND_MAX)() > 0.5) expAdded += 1
    //     }
    //     expAdded = Math.round(expAdded)
    //     auto increments = std::floor(1 + expAdded / 20)
    //     auto delay = 0
    //     for (auto i = 0; i < expAdded; i += increments) {
    //         // system.runTimeout(() => {
    //             attacker.addExperience(increments)
    //         }, delay)
    //         delay += 1
    //         if (i > expAdded * 0.6) delay += 1
    //         if (i > expAdded * 0.9) delay += 1
    //     }
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\radiance.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:radiance"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     auto critical = std::floor(((float)rand()/RAND_MAX)() * 4);
    //     if (critical == 1) {
    //         // system.run(() => {
    //             auto dmg = e.damage;
    //             auto amountHealed = e.damage * 0.15
    //             auto dim = attacker.dimension
    //             auto loc = attacker.location;
    //             dim.spawnParticle("dungeons:radiance_aura", loc)
    //             dim.spawnParticle("dungeons:radiance_aura2", loc)
    //             auto targets = dim.getEntities({ location: loc, maxDistance: 4 })
    //             for (auto target of targets) {
    //                 auto heal = false;
    //                 if (!target || !target.isValid) continue;
    //                 if (target == attacker) heal = true;
    //                 auto tameable = target.getComponent("tameable")
    //                 if (tameable) {
    //                     auto owner = tameable.tamedToPlayer;
    //                     if (owner == attacker) heal = true
    //                 }
    //                 if (heal == true) {
    //                     auto hp = target.getComponent("health")
    //                     auto maxHeal = 5
    //                     auto minHeal = 1
    // 
    //                     auto maxHP = hp.defaultValue
    //                     auto currentHP = hp.currentValue;
    //                     if (amountHealed > maxHeal) amountHealed = maxHeal
    //                     if (amountHealed < minHeal) amountHealed = minHeal
    //                     if ((amountHealed + currentHP) > maxHP) {
    //                         hp.setCurrentValue(maxHP)
    //                     } else {
    //                         hp.setCurrentValue(currentHP + amountHealed)
    //                     }
    //                 }
    //             }
    //         })
    //     }
    // 
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\rampaging.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:rampaging"
    // 
    // 
    // 
    // // world.afterEvents.entityDie.subscribe((e) => {
    //     auto hurt = e.deadEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if ((hurt.matches({
    //         families: ['monster']
    //     }) || hurt.matches({
    //         families: ['mob']
    //     }) || hurt.matches({
    //         families: ['player']
    //     }))) {
    //         if (heldItem.typeId == "dungeons:sparkler") {
    // 
    //             attacker.dimension.spawnParticle('dungeons:sparkler_hit', attacker.location)
    //         } else {
    //             attacker.dimension.spawnParticle('dungeons:death_cap_mushroom', attacker.location)
    //         }
    //         attacker.addEffect('strength', 140)
    //         attacker.addEffect('speed', 140)
    //     }
    // 
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\rushdown.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:rushdown"
    // 
    // 
    // 
    // // world.afterEvents.entityDie.subscribe((e) => {
    //     auto hurt = e.deadEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    // 
    //     auto dim = attacker.dimension;
    //     auto loc = attacker.location
    //     dim.playSound("artefact.swiftness_boot.use", loc)
    //     dim.spawnParticle('dungeons:swiftness', loc)
    //     attacker.addEffect('speed', 60, { amplifier: 2 })
    // 
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\sharpened.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:sharpened"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     e.damage = e.damage * (1 + (2 / Math.round(1 + e.damage)))
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\shockwave.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause,
    //     MolangVariableMap
    // } from "@minecraft/server";
    // // import { specialDamage, isValidTarget, getDirection, makeVector } from "main.js";
    // 
    // void getDistance(target, entity) {
    //     auto tloc = target.location
    //     auto eloc = entity.location
    //     return Math.hypot(eloc.x - tloc.x, eloc.y - tloc.y, eloc.z - tloc.z)
    // }
    // 
    // auto effectId = "dungeons:shockwave"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     // system.run(() => {
    //         auto shockwaveCD = // world.scoreboard.getObjective('dungeons:shockwave_t');
    //         if (!shockwaveCD) {
    //             shockwaveCD = // world.scoreboard.addObjective('dungeons:shockwave_t');
    //         }
    //         if (shockwaveCD.hasParticipant(attacker.scoreboardIdentity)) {
    //             return;
    //         }
    //         // system.run(() => {
    //             auto vd = attacker.getViewDirection()
    //             shockwaveCD.setScore(attacker, 100);
    //             auto dim = attacker.dimension
    //             auto targets = []
    //             for (auto i = 2; i < 5; i++) {
    //                 auto loc = attacker.location;
    //                 loc = { x: loc.x + (vd.x * 6), y: loc.y + (vd.y * 6), z: loc.z + (vd.z * 6) }
    //                 auto damageRange = dim.getEntities({
    //                     location: loc,
    //                     maxDistance: 1 + i * 0.5,
    //                     excludeFamilies: ['ignore']
    //                 });
    //                 for (auto target of damageRange) {
    //                     if (isValidTarget(target) == false) continue;
    //                     if (target === hurt) continue;
    //                     if (target === attacker) continue;
    //                     if (targets.includes(target)) continue;
    //                     targets.push(target)
    //                 }
    //             }
    //             auto loc = attacker.location;
    //             dim.playSound("weapon.enchant.swirling", loc, { pitch: 2 })
    //             auto map = new MolangVariableMap()
    //             map.setFloat("variable.direction_x", vd.x)
    //             map.setFloat("variable.direction_y", vd.y)
    //             map.setFloat("variable.direction_z", vd.z)
    //             dim.spawnParticle('dungeons:shockwave_melee', { x: loc.x, y: loc.y + 1.2, z: loc.z }, map)
    //             dim.spawnParticle('dungeons:shockwave_melee_stars', { x: loc.x, y: loc.y + 1.2, z: loc.z }, map)
    //             for (auto target of targets) {
    //                 auto distance = getDistance(target, attacker)
    //                 // system.runTimeout(() => {
    //                     if (target.isValid == true) {
    //                         auto shockDamage = e.damage * 0.7
    //                         shockDamage = (shockDamage * ((10 - distance) / 5)) + (e.damage / 2)
    // 
    //                         auto damageDone = specialDamage(attacker, target, shockDamage, EntityDamageCause.entityAttack, ["weapon"])
    //                         if (damageDone) {
    //                             auto dir = getDirection(loc, target.location);
    //                             target.applyKnockback(makeVector(dir, 2 + ((10 - distance) / 5)), 0.35)
    //                         }
    //                     }
    //                 }, 1 + Math.ceil(distance))
    //             }
    // 
    //         })
    //     })
    // });
    // 
    // // TIMER
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers()) {
    //         auto timeLeft = // world.scoreboard.getObjective('dungeons:shockwave_t');
    //         if (!timeLeft) return;
    //         if (!player.scoreboardIdentity) continue;
    //         if (!timeLeft.hasParticipant(player.scoreboardIdentity)) continue;
    //         auto duration = timeLeft.getScore(player);
    // 
    //         if (duration > 0) {
    //             timeLeft.addScore(player, -1);
    //         }
    //         if (duration <= 0) {
    //             timeLeft.removeParticipant(player)
    //         }
    //     }
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\smiting.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:smiting"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     if (hurt.matches({ families: ["undead"] })) {
    //         auto dim = attacker.dimension;
    //         auto targetLoc = hurt.location;
    //         e.damage = e.damage * 1.35
    //         // system.run(() => {
    //             dim.spawnParticle("dungeons:smiting_1", { x: targetLoc.x - 0.2, y: targetLoc.y + 1, z: targetLoc.z - 0.2 })
    //             dim.spawnParticle("dungeons:smiting_1", { x: targetLoc.x - 0.2, y: targetLoc.y + 1, z: targetLoc.z + 0.2 })
    //             dim.spawnParticle("dungeons:smiting_1", { x: targetLoc.x + 0.2, y: targetLoc.y + 1, z: targetLoc.z })
    //         })
    //     }
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\soulSiphon.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { grantPlayerSoul } from "misc/soulManager.js"
    // // import { isWearingSet } from "components/armour.js"
    // 
    // auto effectId = "dungeons:soul_siphon"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (hurt.typeId == "dungeons:target_dummy") return;
    //     if (e.damage <= 0) return;
    //     auto odds = ((float)rand()/RAND_MAX)()
    //     if (odds > 0.2) return;
    //     // system.run(() => {
    // 
    //         auto soulsGenerated = 0
    //         for (auto i = 0; i < 5; i++) {
    //             if (std::floor(((float)rand()/RAND_MAX)() * 2) == 1) soulsGenerated += 1
    //         }
    //         if (isWearingSet(attacker, "dungeons:verdant_robes")) soulsGenerated += soulsGenerated
    //         if (// world.scoreboard.getObjective('soulGauge').getScore(attacker) + soulsGenerated > 100) {
    //             soulsGenerated = 100 - // world.scoreboard.getObjective('soulGauge').getScore(attacker)
    //         }
    //         if (soulsGenerated < 1) return;
    //         for (auto i = 0; i < soulsGenerated; i++) {
    //             // system.runTimeout(() => {
    // 
    //                 grantPlayerSoul(hurt, attacker)
    //                 attacker.onScreenDisplay.setActionBar(`§s${// world.scoreboard.getObjective('soulGauge').getScore(attacker)}§s Souls `)
    //             }, i)
    //         }
    //         // system.runTimeout(() => {
    // 
    //             attacker.onScreenDisplay.setActionBar(`§b${// world.scoreboard.getObjective('soulGauge').getScore(attacker)}§s Souls `)
    //         }, soulsGenerated + 1)
    //         auto loc = attacker.location;
    //         auto dim = attacker.dimension;
    //         dim.spawnParticle("dungeons:soul_siphon_rings", loc)
    //         dim.playSound("random.orb", loc, { volume: 0.6 })
    //         dim.playSound("mob.evocation_illager.cast_spell", loc, { volume: 0.7, pitch: 2 })
    //     })
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\stunning.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:stunning"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     // system.run(() => {
    //         auto stunDuration = // world.scoreboard.getObjective('dungeons:stun_t');
    //         if (!stunDuration) {
    //             stunDuration = // world.scoreboard.addObjective('dungeons:stun_t');
    //         }
    //         if (stunDuration.hasParticipant(attacker.scoreboardIdentity)) return;
    //         auto stunChance = std::floor(((float)rand()/RAND_MAX)() * 4);
    //         if (stunChance == 1) {
    //             // system.run(() => {
    //                 stunDuration.setScore(attacker, 100);
    //                 auto dim = hurt.dimension
    //                 auto hurtLoc = hurt.location;
    //                 dim.spawnParticle("dungeons:stun_1s", hurtLoc)
    //                 dim.playSound("ambient.weather.lightning.impact", hurtLoc, { volume: 0.33, pitch: 2.5 })
    //                 hurt.addEffect("slowness", 20, { amplifier: 9, showParticles: false })
    //                 hurt.addEffect("weakness", 20, { amplifier: 9, showParticles: false })
    //                 hurt.applyImpulse({ x: 0, y: -1, z: 0 })
    //             })
    //         }
    //     })
    // });
    // 
    // // TIMER
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers()) {
    //         auto timeLeft = // world.scoreboard.getObjective('dungeons:stun_t');
    //         if (!timeLeft) return;
    //         if (!player.scoreboardIdentity) continue;
    //         if (!timeLeft.hasParticipant(player.scoreboardIdentity)) continue;
    //         auto duration = timeLeft.getScore(player);
    // 
    //         if (duration > 0) {
    //             timeLeft.addScore(player, -1);
    //         }
    //         if (duration <= 0) {
    //             timeLeft.removeParticipant(player)
    //         }
    //     }
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\swirling.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // // import { specialDamage, isValidTarget, getDirection, makeVector } from "main.js";
    // 
    // auto effectId = "dungeons:swirling"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     // system.run(() => {
    //         auto swirlingCD = // world.scoreboard.getObjective('dungeons:swirling_t');
    //         if (!swirlingCD) {
    //             swirlingCD = // world.scoreboard.addObjective('dungeons:swirling_t');
    //         }
    //         if (swirlingCD.hasParticipant(attacker.scoreboardIdentity)) {
    //             swirlingCD.setScore(attacker, 22);
    //             return;
    //         }
    //         // system.run(() => {
    //             swirlingCD.setScore(attacker, 20);
    //             auto dim = attacker.dimension
    //             auto loc = attacker.location;
    //             dim.spawnParticle("dungeons:swirling", { x: loc.x, y: loc.y + 1, z: loc.z })
    //             dim.playSound("weapon.enchant.swirling", loc)
    //             auto damageRange = dim.getEntities({
    //                 location: loc,
    //                 maxDistance: 4,
    //                 excludeFamilies: ['ignore']
    //             });
    //             for (auto target of damageRange) {
    //                 if (isValidTarget(target) == false) continue;
    //                 if (target === hurt) continue;
    //                 if (target === attacker) continue;
    //                 auto damageDone = specialDamage(attacker, target, e.damage * 7 / 9, EntityDamageCause.entityAttack, ["weapon"])
    //                 if (!damageDone) continue;
    //                 auto dir = getDirection(loc, target.location);
    //                 target.applyKnockback(makeVector(dir, 1), 0.5)
    //             }
    //         })
    //     })
    // });
    // 
    // // TIMER
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers()) {
    //         auto timeLeft = // world.scoreboard.getObjective('dungeons:swirling_t');
    //         if (!timeLeft) return;
    //         if (!player.scoreboardIdentity) continue;
    //         if (!timeLeft.hasParticipant(player.scoreboardIdentity)) continue;
    //         auto duration = timeLeft.getScore(player);
    // 
    //         if (duration > 0) {
    //             timeLeft.addScore(player, -1);
    //         }
    //         if (duration <= 0) {
    //             timeLeft.removeParticipant(player)
    //         }
    //     }
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\thundering.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // // import { specialDamage, isValidTarget } from "main.js";
    // 
    // auto effectId = "dungeons:thundering"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (hurt.hasTag("dungeons:area_hit")) return;
    //     if (e.damage <= 0) return;
    //     auto critical = std::floor(((float)rand()/RAND_MAX)() * 10);
    //     if (critical <= 4) {
    //         // system.run(() => {
    //             auto dim = hurt.dimension
    //             auto hurtLoc = hurt.location;
    // 
    // 
    //             auto damageRange = dim.getEntities({
    //                 location: hurtLoc,
    //                 maxDistance: 8,
    //                 excludeFamilies: ['ignore']
    //             });
    //             auto count = 0
    //             for (auto target of damageRange) {
    //                 if (count > 3) break;
    //                 if (isValidTarget(target) == false) continue;
    //                 if (target === hurt) continue;
    //                 if (target === attacker) continue;
    //                 auto damageDone = specialDamage(attacker, target, 12, EntityDamageCause.lightning, ["lightning"])
    //                 if (damageDone) {
    //                     target.applyKnockback({ x: 0, z: 0 }, -0.1)
    //                     count += 1
    //                     dim.playSound("weapon.enchant.thundering", target.location)
    //                     dim.spawnParticle("dungeons:lightning_wand_shock", target.location)
    //                 }
    //             }
    //             if (count > 0) {
    //                 dim.spawnParticle("dungeons:lightning_wand_shock", hurtLoc)
    //             }
    //         })
    //     }
    // 
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\voidStrike.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // // import { addVoidedEffect } from "misc/voidedEffect.js"
    // 
    // auto effectId = "dungeons:void_strike"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     auto hp = hurt.getComponent("health")
    //     if (hp) {
    //         if (hp.currentValue <= 0) return;
    //     }
    //     // system.run(() => {
    //         auto cd = // world.scoreboard.getObjective('dungeons:void_strike_t');
    //         if (!cd) {
    //             cd = // world.scoreboard.addObjective('dungeons:void_strike_t');
    //         }
    //         if (cd.hasParticipant(attacker.scoreboardIdentity)) return;
    //         cd.setScore(attacker, 80);
    //         addVoidedEffect(hurt, 80)
    //         hurt.dimension.playSound("weapon.enchant.void_strike", hurt.location)
    //     })
    // });
    // 
    // // TIMER
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers()) {
    //         auto timeLeft = // world.scoreboard.getObjective('dungeons:void_strike_t');
    //         if (!timeLeft) return;
    //         if (!player.scoreboardIdentity) continue;
    //         if (!timeLeft.hasParticipant(player.scoreboardIdentity)) continue;
    //         auto duration = timeLeft.getScore(player);
    // 
    //         if (duration > 0) {
    //             timeLeft.addScore(player, -1);
    //         }
    //         if (duration <= 0) {
    //             timeLeft.removeParticipant(player)
    //         }
    //     }
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\waterDamage.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // auto effectId = "dungeons:water_damage"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     if (hurt.isInWater) {
    //         e.damage = e.damage * 1.8
    //         // system.run(() => {
    //             hurt.dimension.spawnParticle('dungeons:coral_blade', hurt.location);
    //         })
    //     }
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\weakening.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // // import { isValidTarget } from "main.js";
    // 
    // auto effectId = "dungeons:weakening"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     // system.run(() => {
    //         if (hurt.getEffect("weakness")) return;
    //         hurt.addEffect("weakness", 150)
    //         hurt.dimension.spawnParticle('dungeons:cauldron_summon', {
    //             x: hurt.location.x,
    //             y: hurt.location.y + 1,
    //             z: hurt.location.z
    //         });
    //         auto dim = attacker.dimension;
    //         auto targetLoc = hurt.location
    //         auto damageRange = dim.getEntities({
    //             location: targetLoc,
    //             maxDistance: 5,
    //             excludeFamilies: ['ignore']
    //         });
    //         for (auto target of damageRange) {
    //             if (isValidTarget(target) == false) continue;
    //             if (target === hurt) continue;
    //             if (target === attacker) continue;
    //             target.addEffect("weakness", 100)
    //         }
    //     })
    // });

    // ==========================================
    // Transpiled from: components\weaponEffects\whip.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // // import { specialDamage, isValidTarget, getDirection, makeVector } from "main.js";
    // 
    // auto effectId = "dungeons:whip"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.hasTag(effectId) && heldItem.getDynamicProperty("dungeons:gild") !== effectId) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     if (hurt.hasTag("dungeons:area_hit")) return;
    //     auto originLoc = attacker.location
    //     auto targetLoc = hurt.location;
    //     auto distanceBetween = Math.hypot(originLoc.x - targetLoc.x, originLoc.y - targetLoc.y, originLoc.z - targetLoc.z)
    //     distanceBetween = Math.ceil(distanceBetween)
    //     e.damage = e.damage = e.damage * (1 + (distanceBetween / Math.round(1 + e.damage)))
    //     // system.runTimeout(() => {
    //         auto dim = hurt.dimension
    //         auto damageRange = dim.getEntities({
    //             location: targetLoc,
    //             maxDistance: 1.66,
    //             excludeFamilies: ['ignore']
    //         });
    //         for (auto target of damageRange) {
    //             if (isValidTarget(target) == false) continue;
    //             if (target === hurt) continue;
    //             if (target === attacker) continue;
    //             target.addTag("dungeons:area_hit")
    //             // system.runTimeout(() => {
    //                 if (target.isValid) target.removeTag("dungeons:area_hit")
    //             }, 1)
    //             auto damageDone = specialDamage(attacker, target, 5 + distanceBetween, EntityDamageCause.entityAttack, ["weapon", "apply_melee_enchants", "apply_strength", "apply_weakness"])
    //             if (!damageDone) continue;
    //             target.applyKnockback({ x: 0, z: 0 }, 0.2)
    //         }
    //     }, 5)
    // });

    // ==========================================
    // Transpiled from: components\weapons\alylicleaver.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:alylicleaver', {
    //         onHitEntity(e) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             if (!attacker.isValid || !hit.isValid) return;
    //             auto dim = hit.dimension;
    //             auto targetLoc = hit.location;
    //             dim.playSound("weapon.alylicleaver.swing", targetLoc, { volume: 1.2, pitch: 1 })
    //             if (attacker.name == "Axolot4342") return;
    //             // system.runTimeout(() => {
    //                 attacker.runCommand("camerashake add @s 1 2")
    //                 attacker.runCommand("camerashake add @s 1 4")
    //                 attacker.runCommand("camerashake add @s 1 3")
    //                 auto equip = attacker.getComponent("equippable")
    //                 auto held = equip.getEquipment("Mainhand")
    //                 if (!held) return;
    //                 if (held.getComponent("dungeons:alylicleaver")) {
    //                     equip.setEquipment("Mainhand", undefined)
    //                 }
    //             }, 1)
    //         }
    //     });
    // });
    // 

    // ==========================================
    // Transpiled from: components\weapons\anchor.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget, specialDamage, gravityTo } from "main.js";
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:anchor', {
    //         onHitEntity(e, { params }) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             auto unique = params.unique
    //             if (!attacker.isValid || !hit.isValid) return;
    // 
    //             auto damage = 10
    //             if (unique == true) damage = 12
    //             auto dim = attacker.dimension;
    //             auto targetLoc = hit.location
    //             auto damageRange = dim.getEntities({
    //                 location: targetLoc,
    //                 maxDistance: 3,
    //                 excludeFamilies: ['ignore']
    //             });
    //             for (auto target of damageRange) {
    //                 if (isValidTarget(target) == false) continue;
    //                 if (target === hit) continue;
    //                 if (target === attacker) continue;
    //                 target.addTag("dungeons:area_hit")
    //                 // system.runTimeout(() => {
    //                     if (target.isValid) target.removeTag("dungeons:area_hit")
    //                 }, 1)
    //                 auto damageDone = specialDamage(attacker, target, damage, EntityDamageCause.entityAttack, ["weapon", "apply_weakness"])
    //                 if (!damageDone) continue;
    //                 target.applyKnockback({ x: 0, z: 0 }, 0.3)
    //             }
    //             if (unique == true) {
    //                 dim.spawnParticle("dungeons:encrusted_dust", targetLoc)
    //                 dim.spawnParticle("dungeons:encrusted_dust", targetLoc)
    //                 dim.spawnParticle("dungeons:encrusted_anchor_smoke", targetLoc)
    //             } else {
    //                 dim.spawnParticle("dungeons:hammer_dust", targetLoc)
    //                 dim.spawnParticle("dungeons:hammer_dust", targetLoc)
    //                 dim.spawnParticle("dungeons:anchor_smoke", targetLoc)
    //             }
    //             //dim.spawnParticle("dungeons:gravity", { x: targetLoc.x, y: targetLoc.y + 0.5, z: targetLoc.z })
    //             dim.playSound("weapon.anchor.hit", targetLoc, { volume: 0.8 })
    //             dim.playSound("weapon.bone_club.crush", targetLoc, { volume: 0.4, pitch: 0.25 })
    //             dim.playSound("random.anvil_land", targetLoc, { volume: 0.4, pitch: 0.4 })
    //             auto gravityTargets = dim.getEntities({
    //                 location: targetLoc,
    //                 maxDistance: 4,
    //                 excludeFamilies: ['ignore', 'gravity_immune']
    //             });
    //             for (auto target of gravityTargets) {
    //                 if (target == attacker || target == hit || isValidTarget(target) == false) continue;
    //                 gravityTo(target, targetLoc)
    //             }
    //         }
    //     });
    // });

    // ==========================================
    // Transpiled from: components\weapons\axe.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // void disableShield(hit) {
    //     hit.startItemCooldown("minecraft:shield", 120)
    //     auto dim = hit.dimension;
    //     auto targetLoc = hit.location;
    //     dim.playSound("random.break", targetLoc, { pitch: 0.6 })
    //     dim.spawnParticle("minecraft:critical_hit_emitter", { x: targetLoc.x, y: targetLoc.y + 0.4, z: targetLoc.z })
    // }
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:axe', {
    //         onHitEntity(e) {
    //             if (e.hadEffect == true) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             if (!attacker.isValid || !hit.isValid) return;
    //             if (hit.typeId !== "minecraft:player") return;
    //             auto isShieldReady = hit.getItemCooldown("minecraft:shield")
    //             if (isShieldReady > 0) return;
    //             if (hit.isSneaking == false) return;
    //             auto equippable = hit.getComponent("equippable")
    //             if (!equippable) return;
    //             auto mainHand = equippable.getEquipment("Mainhand")
    //             if (mainHand !== undefined) {
    //                 if (mainHand.typeId == "minecraft:shield") {
    //                     disableShield(hit)
    //                     return;
    //                 }
    //             }
    //             auto offhand = equippable.getEquipment("Offhand")
    //             if (offhand !== undefined) {
    //                 if (offhand.typeId == "minecraft:shield") {
    //                     disableShield(hit)
    //                     return;
    //                 }
    //             }
    //         }
    //     });
    // });
    // 

    // ==========================================
    // Transpiled from: components\weapons\battlestaff.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget, specialDamage, getDirection, makeVector } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:battlestaff', {
    //         onHitEntity(e, { params }) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             auto unique = params.unique
    //             if (!attacker.isValid || !hit.isValid) return;
    // 
    //             auto cooldown = // world.scoreboard.getObjective('dungeons:battlestaff_sweep_t');
    //             if (!cooldown) {
    //                 cooldown = // world.scoreboard.addObjective('dungeons:battlestaff_sweep_t');
    //             }
    //             if (cooldown.hasParticipant(attacker.scoreboardIdentity)) {
    //                 cooldown.setScore(attacker, 15);
    //                 return;
    //             };
    //             cooldown.setScore(attacker, 12);
    // 
    //             auto damage = 4
    //             if (unique == true) damage = 6
    //             auto dim = attacker.dimension;
    //             auto targetLoc = hit.location
    //             auto damageRange = dim.getEntities({
    //                 location: targetLoc,
    //                 maxDistance: 4.5,
    //                 excludeFamilies: ['ignore']
    //             });
    //             for (auto target of damageRange) {
    //                 if (isValidTarget(target) == false) continue;
    //                 if (target === hit) continue;
    //                 if (target === attacker) continue;
    //                 target.addTag("dungeons:area_hit")
    //                 // system.runTimeout(() => {
    //                     if (target.isValid) target.removeTag("dungeons:area_hit")
    //                 }, 1)
    //                 auto damageDone = specialDamage(attacker, target, damage, EntityDamageCause.entityAttack, ["weapon", "apply_weakness", "apply_strength", "apply_melee_enchants"])
    //                 if (!damageDone) continue;
    //                 auto dir = getDirection(attacker.location, target.location);
    //                 target.applyKnockback(makeVector(dir, 0.66), 0.33)
    //             }
    //             dim.spawnParticle("dungeons:battlestaff", { x: targetLoc.x, y: targetLoc.y + 0.4, z: targetLoc.z })
    //             dim.playSound("attack.sweep", targetLoc, { volume: 0.3, pitch: 0.7 })
    //             if (e.itemStack.typeId == "dungeons:growing_staff") {
    //                 dim.playSound("weapon.battlestaff.hit.growing", targetLoc, { volume: 0.66 })
    // 
    //             } else if (e.itemStack.typeId == "dungeons:battlestaff_of_terror") {
    //                 dim.playSound("weapon.battlestaff.hit.terror", targetLoc, { volume: 0.66 })
    //             } else {
    //                 dim.playSound("weapon.battlestaff.hit.common", targetLoc, { volume: 0.66 })
    // 
    //             }
    //         }
    //     });
    // });
    // 
    // // TIMER
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers()) {
    //         auto timeLeft = // world.scoreboard.getObjective('dungeons:battlestaff_sweep_t');
    //         if (!timeLeft) return;
    //         if (!player.scoreboardIdentity) continue;
    //         if (!timeLeft.hasParticipant(player.scoreboardIdentity)) continue;
    //         auto duration = timeLeft.getScore(player);
    // 
    //         if (duration > 0) {
    //             timeLeft.addScore(player, -1);
    //         }
    //         if (duration <= 0) {
    //             timeLeft.removeParticipant(player)
    //         }
    //     }
    // });

    // ==========================================
    // Transpiled from: components\weapons\boneClub.js
    // ==========================================
    // // import {
    //     system
    // } from "@minecraft/server";
    // 
    // // import { getDirection, makeVector } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:bone_club', {
    //         onHitEntity(e) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             if (!attacker.isValid || !hit.isValid) return;
    // 
    // 
    // 
    //             auto dir = getDirection(attacker.location, hit.location);
    //             hit.applyKnockback(makeVector(dir, 1.2), 0.23)
    //             auto dim = hit.dimension;
    //             auto targetLoc = hit.location;
    //             dim.playSound("weapon.bone_club.hit", targetLoc, { volume: 0.4, pitch: 1 })
    //             dim.playSound("weapon.bone_club.crush", targetLoc, { volume: 1.2, pitch: 0.8 })
    //         }
    //     });
    // });
    // 

    // ==========================================
    // Transpiled from: components\weapons\brokenSawblade.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget, specialDamage, getDirection, makeVector } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:broken_sawblade', {
    //         onHitEntity(e, { params }) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             auto unique = params.unique
    //             if (!attacker.isValid || !hit.isValid) return;
    //             if (attacker.typeId !== "minecraft:player") return;
    //             auto cd = e.itemStack.getComponent("cooldown")
    //             if (cd.getCooldownTicksRemaining(attacker) == 0) {
    //                 auto item = e.itemStack
    //                 auto heatLvl = item.getDynamicProperty("dungeons:sawblade_heat")
    //                 if (!heatLvl) {
    //                     item.setDynamicProperty("dungeons:sawblade_heat", 1)
    //                 } else if (heatLvl < 25) {
    //                     item.setDynamicProperty("dungeons:sawblade_heat", heatLvl + 1)
    //                 }
    //                 auto lore = item.getLore()
    //                 auto stringIndex = undefined
    //                 for (auto i = 0; i < lore.length; i++) {
    //                     auto string = lore[i]
    //                     if (string.includes("§h§e§a§t§r§8")) {
    //                         stringIndex = i
    //                         break;
    //                     }
    //                 }
    //                 if (stringIndex == undefined) {
    //                     auto newLoreArray = []
    //                     for (auto string of lore) {
    //                         newLoreArray.push(string)
    //                     }
    //                     newLoreArray.push("§h§e§a§t§r§8" + `+${item.getDynamicProperty("dungeons:sawblade_heat")} Damage`)
    //                     item.setLore(newLoreArray)
    //                 } else {
    //                     auto newLoreArray = []
    //                     for (auto i = 0; i < lore.length; i++) {
    //                         auto string = lore[i]
    //                         if (i !== stringIndex) {
    //                             newLoreArray.push(string)
    //                         }
    //                     }
    //                     newLoreArray.push("§h§e§a§t§r§8" + `+${item.getDynamicProperty("dungeons:sawblade_heat")} Damage`)
    //                     item.setLore(newLoreArray)
    //                 }
    //                 // world.gameRules.showTags = false
    //                 attacker.getComponent("equippable").setEquipment("Mainhand", item)
    //             }
    //         }
    //     });
    // });
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     auto sawbladeComp = heldItem.getComponent("dungeons:broken_sawblade")
    //     if (sawbladeComp == undefined) return;
    //     auto unique = sawbladeComp.customComponentParameters.params.unique;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     auto heatLvl = heldItem.getDynamicProperty("dungeons:sawblade_heat")
    //     if (!heatLvl) heatLvl = 0
    //     auto rand = ((float)rand()/RAND_MAX)()
    //     auto margin = 35
    //     if (unique == true) margin = 50
    //     if (heatLvl / margin > rand && heatLvl > margin / 10) {
    //         e.damage = e.damage / 2
    //         // system.runTimeout(() => {
    //             auto cd = heldItem.getComponent("cooldown")
    //             attacker.startItemCooldown(cd.cooldownCategory, 120 + heatLvl * 2)
    //             heldItem.setDynamicProperty("dungeons:sawblade_heat", null)
    // 
    //             auto lore = heldItem.getLore()
    //             auto stringIndex = undefined
    //             for (auto i = 0; i < lore.length; i++) {
    //                 auto string = lore[i]
    //                 if (string.includes("§h§e§a§t§r§8")) {
    //                     stringIndex = i
    //                     break;
    //                 }
    //             }
    //             if (stringIndex == undefined) {
    //                 auto newLoreArray = []
    //                 for (auto string of lore) {
    //                     newLoreArray.push(string)
    //                 }
    //                 newLoreArray.push("§h§e§a§t§r§8" + `+${0} Damage`)
    //                 heldItem.setLore(newLoreArray)
    //             } else {
    //                 auto newLoreArray = []
    //                 for (auto i = 0; i < lore.length; i++) {
    //                     auto string = lore[i]
    //                     if (i !== stringIndex) {
    //                         newLoreArray.push(string)
    //                     }
    //                 }
    //                 newLoreArray.push("§h§e§a§t§r§8" + `+${0} Damage`)
    //                 heldItem.setLore(newLoreArray)
    //             }
    // 
    // 
    //             attacker.getComponent("equippable").setEquipment("Mainhand", heldItem)
    // 
    //             auto dim = attacker.dimension
    //             auto loc = hurt.location;
    //             if (unique == true) {
    //                 dim.spawnParticle('dungeons:sawblade_smoke_unique', loc);
    //                 dim.playSound('weapon.sawblade.break.unique', loc);
    //             } else {
    //                 dim.spawnParticle('dungeons:sawblade_smoke', loc);
    //                 dim.playSound('weapon.sawblade.break.common', loc);
    //             }
    // 
    //         }, 1)
    //     } else {
    //         e.damage = e.damage * (1 + (heatLvl / Math.round(1 + e.damage)))
    //         // system.run(() => {
    //             auto cd = heldItem.getComponent("cooldown")
    //             attacker.startItemCooldown(cd.cooldownCategory, 0)
    // 
    //             auto dim = attacker.dimension
    //             auto loc = attacker.location;
    // 
    //             if (unique == false) dim.playSound('weapon.sawblade.hit.common', loc, { volume: 0.3 + heatLvl / 15, pitch: 0.75 + heatLvl / 30 });
    //             if (unique == true) dim.playSound('weapon.sawblade.hit.unique', loc, { volume: 0.3 + heatLvl / 15, pitch: 0.75 + heatLvl / 30 });
    //             for (auto i = 0; i < heatLvl; i++) {
    //                 hurt.dimension.spawnParticle(heldItem.typeId, hurt.location);
    //             }
    //         })
    //     }
    // });

    // ==========================================
    // Transpiled from: components\weapons\claymore.js
    // ==========================================
    // // import {
    //     system
    // } from "@minecraft/server";
    // 
    // // import { getDirection, makeVector } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:claymore', {
    //         onHitEntity(e) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             if (!attacker.isValid || !hit.isValid) return;
    // 
    // 
    // 
    //             auto dir = getDirection(attacker.location, hit.location);
    //             hit.applyKnockback(makeVector(dir, 1.2), 0.23)
    //         }
    //     });
    // });
    // 

    // ==========================================
    // Transpiled from: components\weapons\cutlass.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { getDirection, makeVector } from "main.js";
    // 
    // void disableShield(hit, attacker, item) {
    //     hit.startItemCooldown("minecraft:shield", 100)
    //     auto dim = hit.dimension;
    //     auto targetLoc = hit.location;
    //     auto dir = getDirection(attacker.location, targetLoc);
    //     hit.applyKnockback(makeVector(dir, 1.2), 0.23)
    //     dim.playSound("random.break", targetLoc, { pitch: 0.8 })
    //     dim.playSound("attack.sweep", targetLoc, { volume: 0.8, pitch: 1.1 })
    //     dim.spawnParticle(item.typeId, { x: targetLoc.x, y: targetLoc.y + 0.4, z: targetLoc.z })
    //     // system.runTimeout(() => {
    // 
    //         hit.applyDamage(4, { cause: EntityDamageCause.entityAttack, damagingEntity: attacker })
    //     }, 1)
    // }
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:cutlass', {
    //         onHitEntity(e) {
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             if (e.itemStack.typeId == "dungeons:sparkler") {
    //                 auto dim = hit.dimension
    //                 dim.spawnParticle("dungeons:sparkler_hit", {
    //                     x: hit.location.x,
    //                     y: hit.location.y + 1,
    //                     z: hit.location.z
    //                 })
    //                 dim.playSound("weapon.sparkler.hit", hit.location)
    //                 if (((float)rand()/RAND_MAX)() > 0.1) {
    //                     // system.runTimeout(() => {
    //                         dim.playSound("weapon.sparkler.crakles", hit.location, { pitch: ((float)rand()/RAND_MAX)() / 5 + 0.9 })
    //                     }, 10)
    // 
    //                 }
    //             }
    //             if (e.hadEffect == true) return;
    //             if (!attacker.isValid || !hit.isValid) return;
    //             if (hit.typeId !== "minecraft:player") return;
    //             auto isShieldReady = hit.getItemCooldown("minecraft:shield")
    //             if (isShieldReady > 0) return;
    //             if (hit.isSneaking == false) return;
    //             auto equippable = hit.getComponent("equippable")
    //             if (!equippable) return;
    //             auto mainHand = equippable.getEquipment("Mainhand")
    //             if (mainHand !== undefined) {
    //                 if (mainHand.typeId == "minecraft:shield") {
    //                     disableShield(hit, attacker, e.itemStack)
    //                     return;
    //                 }
    //             }
    //             auto offhand = equippable.getEquipment("Offhand")
    //             if (offhand !== undefined) {
    //                 if (offhand.typeId == "minecraft:shield") {
    //                     disableShield(hit, attacker, e.itemStack)
    //                     return;
    //                 }
    //             }
    //         }
    //     });
    // });
    // 

    // ==========================================
    // Transpiled from: components\weapons\daggers.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { specialDamage } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:daggers', {
    //         onHitEntity(e, { params }) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             auto unique = params.unique
    //             if (!attacker.isValid || !hit.isValid) return;
    //             auto damage = 4
    //             if (unique == true) damage = 6
    //             damage += 1
    //             auto dim = hit.dimension;
    //             auto targetLoc = hit.location;
    //             auto sound = "weapon.daggers.swing.common"
    //             if (e.itemStack.typeId == "dungeons:sheer_daggers") sound = "weapon.daggers.swing.sheer"
    //             dim.playSound(sound, attacker.location);
    //             attacker.playAnimation('animation.player.attack_daggers');
    //             // system.runTimeout(() => {
    //                 if (e.itemStack.hasTag("dungeons:swirling") || e.itemStack.getDynamicProperty("dungeons:gild") == "dungeons:swirling") {
    //                     // world.scoreboard.getObjective('dungeons:swirling_t').setScore(attacker, 0)
    //                 }
    //                 dim.spawnParticle('dungeons:daggers_strike', targetLoc);
    //                 dim.playSound(sound, attacker.location);
    //                 auto diddamage = specialDamage(attacker, hit, damage, EntityDamageCause.entityAttack, ["weapon", "apply_weakness", "apply_strength", "apply_melee_enchants"])
    //                 if (diddamage == false) specialDamage(attacker, hit, 1, EntityDamageCause.entityAttack, ["weapon"])
    //             }, 10)
    //         }
    //     });
    // });
    // 

    // ==========================================
    // Transpiled from: components\weapons\gauntlets.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { specialDamage } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:gauntlets', {
    //         onHitEntity(e, { params }) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             auto unique = params.unique
    //             if (!attacker.isValid || !hit.isValid) return;
    //             auto damage = 5
    //             if (unique == true) damage = 7
    //             damage += 1
    //             auto dim = hit.dimension;
    //             auto loc = attacker.location
    // 
    //             dim.playSound('game.player.attack.strong', loc, {
    //                 volume: 1,
    //                 pitch: 0.7
    //             });
    //             dim.playSound("weapon.gauntlets.hit", loc)
    //             dim.spawnParticle("minecraft:critical_hit_emitter", { x: hit.getHeadLocation().x, y: hit.getHeadLocation().y + 1, z: hit.getHeadLocation().z })
    //             // system.runTimeout(() => {
    //                 if (e.itemStack.hasTag("dungeons:swirling") || e.itemStack.getDynamicProperty("dungeons:gild") == "dungeons:swirling") {
    //                     // world.scoreboard.getObjective('dungeons:swirling_t').setScore(attacker, 0)
    //                 }
    //                 dim.playSound("weapon.gauntlets.hit", loc)
    //                 dim.playSound('game.player.attack.strong', attacker.location, {
    //                     volume: 1.1,
    //                     pitch: 0.7
    //                 });
    //                 dim.spawnParticle("minecraft:critical_hit_emitter", { x: hit.getHeadLocation().x, y: hit.getHeadLocation().y + 1, z: hit.getHeadLocation().z })
    //                 auto diddamage = specialDamage(attacker, hit, damage, EntityDamageCause.entityAttack, ["weapon", "apply_weakness", "apply_strength", "apply_melee_enchants"])
    //                 if (diddamage == false) specialDamage(attacker, hit, 1, EntityDamageCause.entityAttack, ["weapon"])
    //             }, 10)
    // 
    //             if (!e.itemStack.hasTag("dungeons:triple_hit") && e.itemStack.getDynamicProperty("dungeons:gild") !== "dungeons:triple_hit") return;
    //             // system.runTimeout(() => {
    //                 if (hit.isValid == false) return;
    //                 if (e.itemStack.hasTag("dungeons:swirling") || e.itemStack.getDynamicProperty("dungeons:gild") == "dungeons:swirling") {
    //                     // world.scoreboard.getObjective('dungeons:swirling_t').setScore(attacker, 0)
    //                 }
    // 
    //                 dim.playSound("weapon.gauntlets.hit", loc)
    //                 dim.playSound('game.player.attack.strong', attacker.location, {
    //                     volume: 1.3,
    //                     pitch: 0.75
    //                 });
    //                 dim.spawnParticle("minecraft:critical_hit_emitter", { x: hit.getHeadLocation().x, y: hit.getHeadLocation().y + 1, z: hit.getHeadLocation().z })
    //                 auto diddamage = specialDamage(attacker, hit, damage, EntityDamageCause.entityAttack, ["weapon", "apply_weakness", "apply_strength", "apply_melee_enchants"])
    //                 if (diddamage == false) specialDamage(attacker, hit, 1, EntityDamageCause.entityAttack, ["weapon"])
    //             }, 20)
    //         }
    //     });
    // });
    // 

    // ==========================================
    // Transpiled from: components\weapons\glaive.js
    // ==========================================
    // // import {
    //     system
    // } from "@minecraft/server";
    // 
    // // import { getDirection, makeVector } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:glaive', {
    //         onHitEntity(e, { params }) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             auto spooky = params.spooky
    //             if (!attacker.isValid || !hit.isValid) return;
    //             auto dim = hit.dimension
    //             auto weapon = e.itemStack
    //             if (spooky == true) {
    //                 dim.playSound('weapon.cackling_broom.swing', attacker.location);
    //                 dim.spawnParticle(`${weapon.typeId}_sweep`, hit.location);
    //             } else {
    //                 dim.playSound('weapon.glaive.swing', attacker.location);
    //                 dim.spawnParticle(`${weapon.typeId}_sweep`, hit.location);
    //             }
    // 
    //             auto dir = getDirection(attacker.location, hit.location);
    //             hit.applyKnockback(makeVector(dir, 1.2), 0.23)
    //         }
    //     });
    // });
    // 

    // ==========================================
    // Transpiled from: components\weapons\hammer.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget, specialDamage, makeVector, getDirection } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:hammer', {
    //         onHitEntity(e, { params }) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             auto unique = params.unique
    //             if (!attacker.isValid || !hit.isValid) return;
    // 
    //             auto damage = 7
    //             if (unique == true) damage = 9
    //             auto dim = attacker.dimension;
    //             auto targetLoc = hit.location
    //             auto damageRange = dim.getEntities({
    //                 location: targetLoc,
    //                 maxDistance: 3,
    //                 excludeFamilies: ['ignore']
    //             });
    //             for (auto target of damageRange) {
    //                 if (isValidTarget(target) == false) continue;
    //                 if (target === hit) continue;
    //                 if (target === attacker) continue;
    //                 target.addTag("dungeons:area_hit")
    //                 // system.runTimeout(() => {
    //                     if (target.isValid) target.removeTag("dungeons:area_hit")
    //                 }, 1)
    //                 auto damageDone = specialDamage(attacker, target, damage, EntityDamageCause.entityAttack, ["weapon", "apply_weakness"])
    //                 if (!damageDone) continue;
    //                 if (e.itemStack.hasTag("dungeons:gravity") == false && e.itemStack.hasTag("dungeons:gravity_spooky") == false) {
    //                     target.applyKnockback(makeVector(getDirection(targetLoc, target.location), 1), 0.3)
    //                 }
    //             }
    //             if (unique == true) {
    //                 if (e.itemStack.typeId == "dungeons:hammer_of_gravity") {
    //                     dim.playSound("weapon.bone_club.crush", targetLoc, { pitch: 0.65 })
    //                     dim.spawnParticle("dungeons:hammer_dust_grav", targetLoc)
    // 
    //                 } else if (e.itemStack.typeId == "dungeons:bonehead_hammer") {
    //                     dim.playSound("weapon.bone_club.hit", targetLoc, { pitch: 0.65 })
    //                     dim.playSound("mob.nameless_one.laugh", targetLoc, { pitch: 1.6, volume: 0.1 })
    //                     dim.spawnParticle("dungeons:hammer_dust", targetLoc)
    // 
    //                 } else {
    //                     dim.playSound("weapon.bone_club.crush", targetLoc, { pitch: 0.5 })
    //                     dim.spawnParticle("dungeons:hammer_dust_storm", targetLoc)
    // 
    //                 }
    //             } else {
    //                 dim.playSound("weapon.bone_club.crush", targetLoc, { pitch: 0.5 })
    //                 dim.spawnParticle("dungeons:hammer_dust", targetLoc)
    //                 //hahaha
    //             }
    //         }
    //     });
    // });

    // ==========================================
    // Transpiled from: components\weapons\longsword.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     ItemStack
    // } from "@minecraft/server";
    // auto ignoreBlock = [
    //     'anvil',
    //     'campfire',
    //     'contact',
    //     'drowning',
    //     'fall',
    //     'fallingBlock',
    //     'fire',
    //     'fireTick',
    //     'flyIntoWall',
    //     'freezing',
    //     'lava',
    //     'lightning',
    //     'magic',
    //     'magma',
    //     'none',
    //     'selfDestruct',
    //     'sonicBoom',
    //     'soulCampfire',
    //     'stalagmite',
    //     'stalactite',
    //     'starve',
    //     'suffocation',
    //     'suicide',
    //     'temperature',
    //     'void',
    //     'wither'
    // ];
    // // world.afterEvents.itemStartUse.subscribe((event) => {
    //     auto player = event.source;
    //     auto item = event.itemStack;
    //     if (player.hasTag('dungeons:sword_block')) return;
    //     if (!item.hasTag('dungeons:blockable_weapon')) return;
    //     player.addTag('dungeons:sword_block');
    // });
    // // world.afterEvents.itemStopUse.subscribe((event) => {
    //     auto player = event.source;
    //     auto item = event.itemStack;
    //     if (!player.hasTag('dungeons:sword_block')) return;
    //     player.removeTag('dungeons:sword_block');
    // });
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers({
    //         tags: ["dungeons:sword_block"]
    //     })) {
    //         if (!player.hasTag("dungeons:in_shadow_form")) {
    //             player.playAnimation('animation.player.block', {
    //                 blendOutTime: 0.33,
    //                 nextState: 'swordBlock'
    //             })
    //         }
    //     }
    // });
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurtEntity = e.hurtEntity;
    //     auto cause = e.damageSource.cause;
    //     auto damage = e.damage;
    //     if (!hurtEntity) return;
    //     if (hurtEntity.typeId !== 'minecraft:player') return;
    //     if (!hurtEntity.hasTag('dungeons:sword_block')) return;
    //     if (ignoreBlock.includes(cause)) return;
    //     e.damage = damage * 0.5
    //     // system.run(() => {
    //         auto dim = hurtEntity.dimension
    //         auto loc = hurtEntity.location
    //         dim.playSound('weapon.sword.parry', loc)
    //         hurtEntity.addEffect("strength", 10, { showParticles: false })
    //         auto item = hurtEntity.getComponent("minecraft:equippable").getEquipment("Mainhand");
    //         if (!item) return;
    //         if (!item.hasTag('dungeons:blockable_weapon')) {
    //             player.removeTag('dungeons:sword_block');
    //             return;
    //         }
    //         auto durability = item.getComponent("durability");
    //         if (!durability) return;
    //         auto weaponDamage = 1;
    //         if (e.damage >= 4) {
    //             weaponDamage += std::floor(e.damage);
    //         }
    //         durability.damage += weaponDamage;
    //         auto maxDurability = durability.maxDurability
    //         auto currentDamage = durability.damage
    //         if (currentDamage >= maxDurability) {
    //             dim.playSound('random.break', loc)
    //             item.getComponent('cooldown').startCooldown(hurtEntity);
    //             hurtEntity.getComponent("minecraft:equippable").setEquipment("Mainhand", undefined);
    //         } else {
    //             item.getComponent('cooldown').startCooldown(hurtEntity);
    //             hurtEntity.getComponent("minecraft:equippable").setEquipment("Mainhand", item);
    //         }
    //     })
    // });

    // ==========================================
    // Transpiled from: components\weapons\mace.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:mace', {
    //     });
    // });
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     auto maceComp = heldItem.getComponent("dungeons:mace")
    //     if (maceComp == undefined) return;
    //     auto flail = maceComp.customComponentParameters.params.flail;
    //     //effect code
    //     auto isCrit = true
    //     if (attacker.typeId !== "minecraft:player") return;
    //     if (attacker.getEffect("slow_falling") || attacker.getEffect("blindness")) isCrit = false;
    //     if (attacker.isFlying) isCrit = false;
    //     if (attacker.inWater) isCrit = false;
    //     auto v = attacker.getVelocity()
    //     if (v.y >= -0.075) isCrit = false;
    //     auto dim = hurt.dimension;
    //     auto targetLoc = hurt.location
    //     if (isCrit == true) {
    //         e.damage = e.damage * 4 / 3
    //         // system.run(() => {
    //             if (flail) {
    //                 dim.playSound("weapon.flail.critical", targetLoc, { volume: 0.8, pitch: 1 })
    //             } else {
    //                 dim.playSound("weapon.mace.critical", targetLoc, { volume: 0.8, pitch: 1 })
    // 
    //             }
    //         })
    //     } else {
    //         // system.run(() => {
    //             dim.playSound("weapon.mace.hit", targetLoc, { volume: 0.8, pitch: 1 })
    //         })
    // 
    //     }
    // })

    // ==========================================
    // Transpiled from: components\weapons\obsidianClaymore.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget, specialDamage, makeVector, getDirection } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:obsidian_claymore', {
    //         onHitEntity(e, { params }) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             auto unique = params.unique
    //             if (!attacker.isValid || !hit.isValid) return;
    // 
    //             auto damage = 8
    //             if (unique == true) damage = 12
    //             auto damageRaise = 0
    //             auto dim = attacker.dimension;
    //             auto targetLoc = hit.location
    //             auto damageRange = dim.getEntities({
    //                 location: targetLoc,
    //                 maxDistance: 4,
    //                 excludeFamilies: ['ignore']
    //             });
    //             if (e.itemStack.hasTag("dungeons:shared_pain")) {
    //                 for (auto target of damageRange) {
    //                     if (isValidTarget(target) == false) continue;
    //                     if (target === hit) continue;
    //                     if (target === attacker) continue;
    //                     damageRaise += 2.5
    //                 }
    //             }
    //             for (auto target of damageRange) {
    //                 if (isValidTarget(target) == false) continue;
    //                 if (target === hit) continue;
    //                 if (target === attacker) continue;
    //                 target.addTag("dungeons:area_hit")
    //                 // system.runTimeout(() => {
    //                     if (target.isValid) target.removeTag("dungeons:area_hit")
    //                 }, 1)
    //                 auto damageDone = specialDamage(attacker, target, damage + (damageRaise * 1.5), EntityDamageCause.entityAttack, ["weapon", "apply_weakness"])
    //                 if (!damageDone) continue;
    //                 if (e.itemStack.hasTag("dungeons:gravity") == false && e.itemStack.hasTag("dungeons:gravity_spooky") == false) {
    //                     if (damageRaise < 10) target.applyKnockback(makeVector(getDirection(targetLoc, target.location), 1 + (damageRaise / 15)), 0.3 + (damageRaise / 25))
    //                     if (damageRaise >= 10) target.applyKnockback(makeVector(getDirection(targetLoc, target.location), 1 + (10 / 15)), 0.3 + (10 / 25))
    //                 }
    //             }
    //             if (unique == true) {
    //                 dim.playSound("weapon.obsidian_claymore.hit.unique", targetLoc)
    //                 dim.playSound("weapon.enchant.exploding", targetLoc, { pitch: 1.2 })
    //                 dim.spawnParticle("dungeons:starless_night_1", targetLoc)
    //                 dim.spawnParticle("dungeons:starless_night_2", { x: targetLoc.x, y: targetLoc.y + 0.5, z: targetLoc.z })
    //                 dim.spawnParticle("dungeons:starless_night_3", { x: targetLoc.x, y: targetLoc.y + 0.1, z: targetLoc.z })
    //             } else {
    //                 dim.playSound("weapon.obsidian_claymore.hit.common", targetLoc)
    //                 dim.spawnParticle("dungeons:obsidian_dust", { x: targetLoc.x, y: targetLoc.y + 1, z: targetLoc.z })
    //             }
    //         }
    //     });
    // });

    // ==========================================
    // Transpiled from: components\weapons\rapier.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget, specialDamage, getDirection, makeVector } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:rapier', {
    //         onHitEntity(e, { params }) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             auto unique = params.unique
    //             if (!attacker.isValid || !hit.isValid) return;
    // 
    //             auto cooldown = // world.scoreboard.getObjective('dungeons:rapier_sweep_t');
    //             if (!cooldown) {
    //                 cooldown = // world.scoreboard.addObjective('dungeons:rapier_sweep_t');
    //             }
    //             if (cooldown.hasParticipant(attacker.scoreboardIdentity)) {
    //                 cooldown.setScore(attacker, 20);
    //                 return;
    //             };
    //             cooldown.setScore(attacker, 15);
    // 
    //             auto damage = 3
    //             if (unique == true) damage = 5
    //             auto dim = attacker.dimension;
    //             auto targetLoc = hit.location
    //             auto damageRange = dim.getEntities({
    //                 location: targetLoc,
    //                 maxDistance: 2.5,
    //                 excludeFamilies: ['ignore']
    //             });
    //             for (auto target of damageRange) {
    //                 if (isValidTarget(target) == false) continue;
    //                 if (target === hit) continue;
    //                 if (target === attacker) continue;
    //                 target.addTag("dungeons:area_hit")
    //                 // system.runTimeout(() => {
    //                     if (target.isValid) target.removeTag("dungeons:area_hit")
    //                 }, 1)
    //                 auto damageDone = specialDamage(attacker, target, damage, EntityDamageCause.entityAttack, ["weapon", "apply_weakness", "apply_strength", "apply_melee_enchants"])
    //                 if (!damageDone) continue;
    //                 auto dir = getDirection(attacker.location, target.location);
    //                 target.applyKnockback(makeVector(dir, 0.2), 0.3)
    //             }
    //             if (e.itemStack.typeId == "dungeons:rapier") dim.spawnParticle("dungeons:rapier_common", targetLoc)
    //             if (e.itemStack.typeId == "dungeons:bee_stinger") dim.spawnParticle("dungeons:rapier_honey", targetLoc)
    //             if (e.itemStack.typeId == "dungeons:freezing_foil") dim.spawnParticle("dungeons:rapier_freeze", targetLoc)
    //             dim.playSound("attack.sweep", targetLoc, { volume: 0.8, pitch: 1 })
    //         }
    //     });
    // });
    // 
    // // TIMER
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers()) {
    //         auto timeLeft = // world.scoreboard.getObjective('dungeons:rapier_sweep_t');
    //         if (!timeLeft) return;
    //         if (!player.scoreboardIdentity) continue;
    //         if (!timeLeft.hasParticipant(player.scoreboardIdentity)) continue;
    //         auto duration = timeLeft.getScore(player);
    // 
    //         if (duration > 0) {
    //             timeLeft.addScore(player, -1);
    //         }
    //         if (duration <= 0) {
    //             timeLeft.removeParticipant(player)
    //         }
    //     }
    // });

    // ==========================================
    // Transpiled from: components\weapons\rushSpear.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // world.afterEvents.itemStartUse.subscribe((e) => {
    //     auto player = e.source
    //     auto item = e.itemStack;
    //     if (!item) return;
    //     auto rushSpear = item.getComponent("dungeons:rush_spear")
    //     if (!rushSpear) return;
    //     player.addTag("dungeons:rush_spear_charged")
    // })
    // // world.afterEvents.itemStopUse.subscribe((e) => {
    //     auto player = e.source
    //     auto item = e.itemStack;
    //     if (!item) return;
    //     auto rushSpear = item.getComponent("dungeons:rush_spear")
    //     if (!rushSpear) return;
    //     player.removeTag("dungeons:rush_spear_charged")
    // })
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:rush_spear', {
    //         onHitEntity(e) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             if (!hit) return;
    //             if (!attacker.isValid || !hit.isValid) return;
    //             auto dim = hit.dimension;
    //             auto targetLoc = hit.location;
    //             dim.playSound("weapon.rush_spear.attack", targetLoc, { volume: 1, pitch: 1 })
    //             if (!attacker.hasTag("dungeons:rush_spear_charged")) return;
    // 
    // 
    //             auto v = attacker.getVelocity()
    //             hit.applyKnockback({ x: v.x * 4.5, z: v.z * 4.5 }, 0.23)
    //         }
    //     });
    // });
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     if (!heldItem.getComponent("dungeons:rush_spear")) return;
    //     if (!attacker.hasTag("dungeons:rush_spear_charged")) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     auto base = e.damage
    //     e.damage = e.damage * 1.2
    //     if (e.damage > base + 8) e.damage = base + 8
    // });
    // 
    // // world.afterEvents.entitySpawn.subscribe((e) => {
    //     auto entity = e.entity;
    //     if (!entity) return;
    //     if (!entity.isValid) return;
    //     entity.removeTag("dungeons:rush_spear_charged")
    // })

    // ==========================================
    // Transpiled from: components\weapons\sickles.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { specialDamage, makeVector, getDirection } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:sickles', {
    //         onHitEntity(e, { params }) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             auto unique = params.unique
    //             if (!attacker.isValid || !hit.isValid) return;
    //             auto damage = 4
    //             if (unique == true) damage = 5
    //             damage += 1
    //             auto dim = hit.dimension;
    //             auto targetLoc = hit.location;
    //             auto sound = "weapon.sickles.hit"
    //             dim.playSound(sound, attacker.location);
    //             auto dir = getDirection(attacker.location, hit.location);
    //             hit.applyKnockback(makeVector(dir, 0.1), 0.1)
    //             attacker.playAnimation('animation.player.attack_daggers');
    //             // system.runTimeout(() => {
    //                 if (e.itemStack.hasTag("dungeons:swirling") || e.itemStack.getDynamicProperty("dungeons:gild") == "dungeons:swirling") {
    //                     // world.scoreboard.getObjective('dungeons:swirling_t').setScore(attacker, 0)
    //                 }
    //                 dim.spawnParticle('dungeons:daggers_strike', targetLoc);
    //                 dim.playSound(sound, attacker.location);
    //                 auto diddamage = specialDamage(attacker, hit, damage, EntityDamageCause.entityAttack, ["weapon", "apply_weakness", "apply_strength", "apply_melee_enchants"])
    //                 if (diddamage == false) specialDamage(attacker, hit, 1, EntityDamageCause.entityAttack, ["weapon"])
    //                 auto dir2 = getDirection(attacker.location, hit.location);
    //                 hit.applyKnockback(makeVector(dir2, 0.1), 0.1)
    //             }, 10)
    //         }
    //     });
    // });
    // 

    // ==========================================
    // Transpiled from: components\weapons\soulScythe.js
    // ==========================================
    // // import {
    //     system
    // } from "@minecraft/server";
    // 
    // // import { getDirection, makeVector } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:scythe', {
    //         onHitEntity(e) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             if (!attacker.isValid || !hit.isValid) return;
    // 
    // 
    // 
    //             auto dir = getDirection(attacker.location, hit.location);
    //             hit.applyKnockback(makeVector(dir, 0.1), 0.1)
    //             auto dim = hit.dimension;
    //             auto targetLoc = hit.location;
    //             if (e.itemStack.typeId == "dungeons:skull_scythe") {
    //                 dim.playSound("weapon.soul_scythe.hit.spooky", targetLoc, { volume: 1, pitch: 1 })
    //             } else {
    //                 dim.playSound("weapon.soul_scythe.hit", targetLoc, { volume: 1, pitch: 1 })
    //             }
    //         }
    //     });
    // });
    // 

    // ==========================================
    // Transpiled from: components\weapons\spongeStriker.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget, specialDamage, getDirection, makeVector } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:sponge_striker', {
    //         onHitEntity(e) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             if (!attacker.isValid || !hit.isValid) return;
    //         }
    //     });
    // });
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== 'minecraft:player') return;
    //     auto cause = e.damageSource.cause;
    //     if (cause !== EntityDamageCause.entityAttack) return;
    //     auto equippable = attacker.getComponent("equippable")
    //     if (!equippable) return;
    //     auto heldItem = equippable.getEquipment("Mainhand")
    //     if (!heldItem) return;
    //     auto strikerComp = heldItem.getComponent("dungeons:sponge_striker")
    //     if (strikerComp == undefined) return;
    //     //effect code
    //     if (e.damage <= 0) return;
    //     auto damageBoost = heldItem.getDynamicProperty("dungeons:sponge_damage")
    //     if (!damageBoost) damageBoost = 0
    //     if (damageBoost > 0) {
    //         e.damage = e.damage * (1 + (damageBoost / Math.round(1 + e.damage)))
    //         // system.run(() => {
    //             heldItem.setDynamicProperty("dungeons:sponge_damage", null)
    //             auto lore = heldItem.getLore()
    //             auto stringIndex = undefined
    //             for (auto i = 0; i < lore.length; i++) {
    //                 auto string = lore[i]
    //                 if (string.includes("§s§p§n§g§r§8")) {
    //                     stringIndex = i
    //                     break;
    //                 }
    //             }
    //             if (stringIndex == undefined) {
    //                 auto newLoreArray = []
    //                 for (auto string of lore) {
    //                     newLoreArray.push(string)
    //                 }
    //                 newLoreArray.push("§s§p§n§g§r§8" + `+${0} Damage`)
    //                 heldItem.setLore(newLoreArray)
    //             } else {
    //                 auto newLoreArray = []
    //                 for (auto i = 0; i < lore.length; i++) {
    //                     auto string = lore[i]
    //                     if (i !== stringIndex) {
    //                         newLoreArray.push(string)
    //                     }
    //                 }
    //                 newLoreArray.push("§s§p§n§g§r§8" + `+${0} Damage`)
    //                 heldItem.setLore(newLoreArray)
    //             }
    // 
    // 
    //             attacker.getComponent("equippable").setEquipment("Mainhand", heldItem)
    // 
    //             auto dim = attacker.dimension
    //             auto loc = hurt.location;
    //             dim.playSound('weapon.enchant.sponge_striker', loc, { volume: (damageBoost / 25) });
    //             for (auto i = 0; i < damageBoost; i++) {
    //                 dim.spawnParticle('dungeons:sponge_striker', loc);
    //             }
    //         })
    //     }
    // });
    // 
    // // world.afterEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto inventory = hurt.getComponent("inventory")
    //     if (!inventory) return;
    //     auto container = inventory.container;
    //     if (!container) return;
    //     auto foundSpongeStrikerIndex = undefined
    //     for (auto i = 0; i < container.size; i++) {
    //         if (container.getSlot(i).hasItem() == false) continue;
    //         auto item = container.getItem(i)
    //         if (item.typeId == "dungeons:sponge_striker") {
    //             foundSpongeStrikerIndex = i
    //             break;
    //         }
    //     }
    //     if (foundSpongeStrikerIndex == undefined) return;
    //     auto item = container.getItem(foundSpongeStrikerIndex)
    //     auto baseDmg = e.damage
    //     if (baseDmg < 10) baseDmg = baseDmg * 1.2
    //     auto damage = Math.round(baseDmg * 10) / 10
    // 
    // 
    //     auto damageBoost = item.getDynamicProperty("dungeons:sponge_damage")
    //     if (!damageBoost) damageBoost = 0
    //     damageBoost += 1
    //     if (damageBoost + damage <= 100) {
    //         item.setDynamicProperty("dungeons:sponge_damage", damageBoost + damage)
    //     } else if (damageBoost + damage > 100) {
    //         item.setDynamicProperty("dungeons:sponge_damage", 100)
    //     }
    //     auto lore = item.getLore()
    //     auto stringIndex = undefined
    //     for (auto i = 0; i < lore.length; i++) {
    //         auto string = lore[i]
    //         if (string.includes("§s§p§n§g§r§8")) {
    //             stringIndex = i
    //             break;
    //         }
    //     }
    //     if (stringIndex == undefined) {
    //         auto newLoreArray = []
    //         for (auto string of lore) {
    //             newLoreArray.push(string)
    //         }
    //         newLoreArray.push("§s§p§n§g§r§8" + `+${item.getDynamicProperty("dungeons:sponge_damage")} Damage`)
    //         item.setLore(newLoreArray)
    //     } else {
    //         auto newLoreArray = []
    //         for (auto i = 0; i < lore.length; i++) {
    //             auto string = lore[i]
    //             if (i !== stringIndex) {
    //                 newLoreArray.push(string)
    //             }
    //         }
    //         newLoreArray.push("§s§p§n§g§r§8" + `+${item.getDynamicProperty("dungeons:sponge_damage")} Damage`)
    //         item.setLore(newLoreArray)
    //     }
    //     // world.gameRules.showTags = false
    //     container.getSlot(foundSpongeStrikerIndex).setItem(item)
    // })

    // ==========================================
    // Transpiled from: components\weapons\voidBlades.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { specialDamage } from "main.js";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:void_blades', {
    //         onHitEntity(e, { params }) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             auto unique = params.unique
    //             if (!attacker.isValid || !hit.isValid) return;
    //             auto damage = 3
    //             if (unique == true) damage = 5
    //             damage += 1
    //             auto dim = hit.dimension;
    //             auto targetLoc = hit.location;
    // 
    // 
    //             attacker.playAnimation('animation.player.attack_void_blades');
    //             // system.runTimeout(() => {
    //                 if (e.itemStack.hasTag("dungeons:swirling") || e.itemStack.getDynamicProperty("dungeons:gild") == "dungeons:swirling") {
    //                     // world.scoreboard.getObjective('dungeons:swirling_t').setScore(attacker, 0)
    //                 }
    //                 if (hit.isValid == false) return;
    //                 dim.spawnParticle('dungeons:void_blades_strike', targetLoc);
    //                 auto diddamage = specialDamage(attacker, hit, damage, EntityDamageCause.entityAttack, ["weapon", "apply_weakness", "apply_strength", "apply_melee_enchants"])
    //                 if (diddamage == false) specialDamage(attacker, hit, 1, EntityDamageCause.entityAttack, ["weapon"])
    //             }, 15)
    //         }
    //     });
    // });
    // 

    // ==========================================
    // Transpiled from: components\weapons\whip.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // system.beforeEvents.startup.subscribe((event) => {
    //     event.itemComponentRegistry.registerCustomComponent('dungeons:whip', {
    //         onHitEntity(e, { params }) {
    //             if (e.hadEffect == false) return;
    //             auto attacker = e.attackingEntity;
    //             auto hit = e.hitEntity;
    //             auto unique = params.unique
    //             if (!attacker.isValid || !hit.isValid) return;
    // 
    //             auto dim = hit.dimension
    //             auto loc = hit.location
    //             if (unique == false) dim.playSound('weapon.whip.hit.common', loc)
    //             if (unique == true) dim.playSound('weapon.whip.hit.unique', loc)
    //             // system.runTimeout(() => {
    //                 dim.spawnParticle('dungeons:whip_crack', loc)
    //                 dim.spawnParticle('dungeons:whip_sparks', loc)
    //             }, 5);
    // 
    //         }
    //     });
    // });

    // BODIES
    void handle_alylicleaver(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for alylicleaver
        // TODO: Convert logic
    }

    void handle_longsword(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for longsword
        // TODO: Convert logic
    }

    void handle_anchor(endstone::Player& p, endstone::Entity& t) {
        auto loc = t.getLocation();
        std::string coord = std::to_string(loc.getX()) + " " + std::to_string(loc.getY()) + " " + std::to_string(loc.getZ());
        auto& server = p.getServer();
        auto sender = server.getCommandSender();
        
        // Particles & Sounds
        server.dispatchCommand(sender, "particle dungeons:hammer_dust " + coord);
        server.dispatchCommand(sender, "particle dungeons:anchor_smoke " + coord);
        server.dispatchCommand(sender, "playsound weapon.anchor.hit @a " + coord + " 0.8");
        server.dispatchCommand(sender, "playsound random.anvil_land @a " + coord + " 0.4 0.4");
        
        // AOE Damage & Gravity Pull
        server.dispatchCommand(sender, "execute positioned " + coord + " run damage @e[r=3] 10 entity_attack entity \"" + p.getName() + "\"");
        server.dispatchCommand(sender, "execute positioned " + coord + " as @e[r=4,family=!gravity_immune] run tp @s " + coord);
    }

    void handle_axe(endstone::Player& p, endstone::Entity& t) {
        auto loc = t.getLocation();
        std::string coord = std::to_string(loc.getX()) + " " + std::to_string(loc.getY()) + " " + std::to_string(loc.getZ());
        auto& server = p.getServer();
        
        // Shield break effects
        server.dispatchCommand(server.getCommandSender(), "playsound random.break @a " + coord + " 1.0 0.6");
        server.dispatchCommand(server.getCommandSender(), "particle minecraft:critical_hit_emitter " + coord);
    }

    void handle_battlestaff(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for battlestaff
        // TODO: Convert logic
    }

    void handle_boneClub(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for boneClub
        // TODO: Convert logic
    }

    void handle_brokenSawblade(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for brokenSawblade
        // TODO: Convert logic
    }

    void handle_claymore(endstone::Player& p, endstone::Entity& t) {
        auto loc = t.getLocation();
        std::string coord = std::to_string(loc.getX()) + " " + std::to_string(loc.getY()) + " " + std::to_string(loc.getZ());
        // Heavy Knockback Sound
        p.getServer().dispatchCommand(p.getServer().getCommandSender(), "playsound attack.sweep @a " + coord + " 1.2 0.8");
    }

    void handle_spongeStriker(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for spongeStriker
        // TODO: Convert logic
    }

    void handle_cutlass(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for cutlass
        // TODO: Convert logic
    }

    void handle_daggers(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for daggers
        // TODO: Convert logic
    }

    void handle_gauntlets(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for gauntlets
        // TODO: Convert logic
    }

    void handle_glaive(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for glaive
        // TODO: Convert logic
    }

    void handle_hammer(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for hammer
        // TODO: Convert logic
    }

    void handle_obsidianClaymore(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for obsidianClaymore
        // TODO: Convert logic
    }

    void handle_rapier(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for rapier
        // TODO: Convert logic
    }

    void handle_soulScythe(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for soulScythe
        // TODO: Convert logic
    }

    void handle_whip(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for whip
        // TODO: Convert logic
    }

    void handle_voidBlades(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for voidBlades
        // TODO: Convert logic
    }

    void handle_rushSpear(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for rushSpear
        // TODO: Convert logic
    }

    void handle_mace(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for mace
        // TODO: Convert logic
    }

    void handle_sickles(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for sickles
        // TODO: Convert logic
    }

    void handle_alylicleaver(endstone::Player& p, endstone::Entity& t) {
        // Real C++ execution context for alylicleaver
        // TODO: Convert logic
    }

    void init() {}
}
