#include "generated/ArmourGen.h"

namespace ArmourGen {
    // ==========================================
    // Transpiled from: components\armour.js
    // ==========================================
    // void isWearingSet(player, tag) {
    //     auto equippable = player.getComponent("equippable")
    //     if (!equippable) return false
    //     auto head = equippable.getEquipment("Head")
    //     auto chest = equippable.getEquipment("Chest")
    //     auto legs = equippable.getEquipment("Legs")
    //     auto feet = equippable.getEquipment("Feet")
    //     if (!head || !(head.hasTag(tag) || head.getDynamicProperty("dungeons:gild") == tag)) return false
    //     if (!chest || !(chest.hasTag(tag) || chest.getDynamicProperty("dungeons:gild") == tag)) return false
    //     if (!legs || !(legs.hasTag(tag) || legs.getDynamicProperty("dungeons:gild") == tag)) return false
    //     if (!feet || !(feet.hasTag(tag) || feet.getDynamicProperty("dungeons:gild") == tag)) return false
    //     return true;
    // }
    // 
    // 
    // 
    // // import "./armour/dark.js";
    // // import "./armour/titansShroud.js";
    // 
    // // import "./armour/thief.js";
    // // import "./armour/spider.js";
    // 
    // //grim armour soul effect handeled in soul.js file
    // // import "./armour/grim.js";
    // // import "./armour/wither.js";
    // // import "./armour/spookyGourdian.js";
    // 
    // // import "./armour/ghostly.js";
    // // import "./armour/ghostKindler.js";
    // // import "./armour/cloakedSkull.js";
    // 
    // // import "./armour/wolf.js";
    // // import "./armour/blackWolf.js";
    // // import "./armour/fox.js";
    // 
    // // import "./armour/snow.js";
    // // import "./armour/frost.js";
    // 
    // // import "./armour/plate.js";
    // // import "./armour/fullMetal.js";
    // // import "./armour/cauldron.js";
    // 
    // //the evocation armour cooldown effect is handeled in the artefactCooldown.js file
    // //verdant armour soul effect handeled in soul.js file
    // // import "./armour/emberRobes.js";
    // 
    // // import "./armour/ocelot.js";
    // // import "./armour/shadowWalker.js";
    // 
    // // import "./armour/rootRot.js";
    // // import "./armour/blackSpot.js";
    // 
    // // import "./armour/emerald.js";
    // // import "./armour/opulent.js";
    // // import "./armour/gildedGlory.js";
    // 
    // // import "./armour/turtle.js";
    // // import "./armour/nimbleTurtle.js";
    // 
    // // import "./armour/squid.js";
    // // import "./armour/glowSquid.js";
    // 
    // // import "./armour/sprout.js";
    // // import "./armour/livingVines.js";
    // 
    // //piglin armour is handled in the specialDamage void of main.js
    // // import "./armour/goldenPiglin.js";
    // 
    // //guard armour is handled in the specialDamage void of main.js and the artefactCooldown js file
    // // import "./armour/ender.js";
    // 
    // // import "./armour/entertainersGarb.js";
    // // import "./armour/troubadour.js";
    // 
    // // import "./armour/shulker.js";
    // // import "./armour/sturdyShulker.js";
    // 
    // //the soul effect of teleport robes is in soul file
    // // import "./armour/teleportationRobes.js";
    // // import "./armour/unstableRobes.js";
    // 
    // // import "./armour/champions.js";
    // // import "./armour/heros.js";
    // 
    // //the soul effect of phantom armours is in soul file
    // // import "./armour/phantom.js";
    // // import "./armour/frostBite.js";
    // 
    // // import "./armour/beenest.js";
    // // import "./armour/beehive.js";
    // 
    // //the soul effect of soul armours is in soul file
    // //soulrobe armour is handled in the specialDamage void of main.js
    // // import "./armour/souldancer.js";

    // ==========================================
    // Transpiled from: components\armour\beehive.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(hurt, "dungeons:beehive_armour")) return;
    //     auto baseDmg = e.damage;
    //     if (!baseDmg) return;
    //     if (baseDmg <= 0) return;
    //     if (e.damageSource.cause == "selfDestruct") return;
    //     e.damage = e.damage * 0.9
    //     if (hurt.getDynamicProperty("dungeons:damage_reduction_prevented") >= baseDmg) {
    //         e.cancel = true;
    //         return;
    //     }
    //     hurt.setDynamicProperty("dungeons:damage_reduction_prevented", baseDmg)
    //     // system.runTimeout(() => {
    //         hurt.setDynamicProperty("dungeons:damage_reduction_prevented", null)
    //     }, 9)
    // });

    // ==========================================
    // Transpiled from: components\armour\beenest.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.afterEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(hurt, "dungeons:beenest_armour")) return;
    //     if (((float)rand()/RAND_MAX)() > 0.25) return;
    //     auto dim = hurt.dimension
    //     auto hurtLoc = hurt.getHeadLocation();
    //     auto pet = dim.spawnEntity('dungeons:pet_bee', hurtLoc);
    //     auto beeTameable = pet.getComponent('minecraft:tameable')
    //     beeTameable.tame(hurt);
    //     dim.spawnParticle("dungeons:busy_bee_spawn", hurtLoc)
    //     dim.playSound("artefact.buzzy_nest.spawn", hurtLoc)
    // });

    // ==========================================
    // Transpiled from: components\armour\blackSpot.js
    // ==========================================
    // // import {
    //     world
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // TURTLE ARMOUR
    // // world.afterEvents.entityHealthChanged.subscribe((event) => {
    //     auto player = event.entity;
    //     auto oldValue = event.oldValue;
    //     auto newValue = event.newValue;
    //     if (!player) return;
    //     if (!player.isValid) return;
    //     if (player.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(player, "dungeons:black_spot_armour")) return;
    //     if (newValue <= oldValue) {
    //         return;
    //     }
    //     auto hp = player.getComponent("health")
    //     if (newValue > hp.defaultValue) newValue = hp.defaultValue
    //     auto diff = newValue - oldValue
    //     if (diff == 0) return;
    //     auto hunger = player.getComponent("minecraft:player.hunger")
    //     if (!hunger) return;
    //     auto healAmt = diff / 2
    //     if (healAmt > 5) healAmt = 5
    //     auto max = hunger.defaultValue
    //     auto current = hunger.currentValue;
    //     if (current == max) return;
    // 
    //     if (healAmt + current > max) {
    //         hunger.setCurrentValue(max)
    //     } else {
    //         hunger.setCurrentValue(current + healAmt)
    //     }
    // 
    //     if (healAmt > 1) player.dimension.playSound('random.eat', player.location, { volume: 0.4, pitch: 1.2 });
    // });

    // ==========================================
    // Transpiled from: components\armour\blackWolf.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.afterEvents.playerSwingStart.subscribe((e) => {
    //     auto heldItem = e.heldItemStack;
    //     if (!heldItem) return;
    //     auto player = e.player
    //     if (isWearingSet(player, "dungeons:black_wolf_armour"))
    //         // system.runTimeout(() => {
    //             auto cd = heldItem.getComponent("cooldown")
    //             if (cd !== undefined) {
    //                 auto timeLeft = player.getItemCooldown(cd.cooldownCategory)
    //                 if (timeLeft > cd.cooldownTicks - 2) {
    //                     player.startItemCooldown(cd.cooldownCategory, Math.ceil(cd.cooldownTicks * 2 / 3))
    //                 } else {
    //                     // system.runTimeout(() => {
    //                         auto cd2 = heldItem.getComponent("cooldown")
    //                         if (cd2 !== undefined) {
    //                             auto timeLeft2 = player.getItemCooldown(cd2.cooldownCategory)
    //                             if (timeLeft2 > cd2.cooldownTicks - 3) {
    //                                 player.startItemCooldown(cd2.cooldownCategory, Math.ceil(cd2.cooldownTicks * 2 / 3))
    //                             }
    //                         }
    //                     }, 1)
    //                 }
    //             }
    //         }, 0)
    // })

    // ==========================================
    // Transpiled from: components\armour\cauldron.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers({ excludeGameModes: ["Spectator"] })) {
    //         if (isWearingSet(player, "dungeons:cauldron_armour") == false) continue;
    //         player.dimension.spawnParticle('dungeons:cauldron_armour', player.location)
    //     }
    // }, 30)

    // ==========================================
    // Transpiled from: components\armour\champions.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(hurt, "dungeons:champions_armour")) return;
    //     if (e.damageSource.cause !== EntityDamageCause.entityAttack) return;
    //     auto baseDmg = e.damage;
    //     if (!baseDmg) return;
    //     if (baseDmg <= 0) return;
    //     if (e.damageSource.cause == "selfDestruct") return;
    //     e.damage = e.damage * 0.8
    //     if (hurt.getDynamicProperty("dungeons:damage_reduction_prevented") >= baseDmg) {
    //         e.cancel = true;
    //         return;
    //     }
    //     hurt.setDynamicProperty("dungeons:damage_reduction_prevented", baseDmg)
    //     // system.runTimeout(() => {
    //         hurt.setDynamicProperty("dungeons:damage_reduction_prevented", null)
    //     }, 9)
    // });

    // ==========================================
    // Transpiled from: components\armour\cloakedSkull.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers({ excludeGameModes: ["Spectator"] })) {
    //         if (player.isSprinting || isWearingSet(player, "dungeons:cloaked_skull") == false) continue;
    //         player.dimension.spawnParticle('dungeons:cloaked_skull_idle', player.location)
    //     }
    // }, 10)

    // ==========================================
    // Transpiled from: components\armour\dark.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(hurt, "dungeons:dark_armour")) return;
    //     if (e.damageSource.cause == "selfDestruct") return;
    // 
    //     auto baseDmg = e.damage;
    //     if (!baseDmg) return;
    //     if (baseDmg <= 0) return;
    //     e.damage = e.damage * 0.85
    //     if (hurt.getDynamicProperty("dungeons:damage_reduction_prevented") >= baseDmg) {
    //         e.cancel = true;
    //         return;
    //     }
    //     hurt.setDynamicProperty("dungeons:damage_reduction_prevented", baseDmg)
    //     // system.runTimeout(() => {
    //         hurt.setDynamicProperty("dungeons:damage_reduction_prevented", null)
    //     }, 9)
    // });

    // ==========================================
    // Transpiled from: components\armour\emberRobes.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // // import { isValidTarget, specialDamage } from "main.js"
    // 
    // // world.afterEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!isWearingSet(hurt, "dungeons:ember_robes")) return;
    //     auto cd = // world.scoreboard.getObjective('dungeons:ember_robes_t');
    //     if (!cd) {
    //         cd = // world.scoreboard.addObjective('dungeons:ember_robes_t');
    //     }
    //     if (cd.hasParticipant(hurt.scoreboardIdentity)) {
    //         return;
    //     }
    //     auto dim = hurt.dimension
    //     auto loc = hurt.location;
    //     cd.setScore(hurt, 50)
    //     dim.spawnParticle("dungeons:satchel_elements_use_fire", { x: loc.x, y: loc.y + 1, z: loc.z })
    //     dim.playSound("mob.ghast.fireball", loc)
    // 
    //     auto damageRange = dim.getEntities({
    //         location: loc,
    //         maxDistance: 4,
    //         excludeFamilies: ['ignore']
    //     });
    //     if (damageRange.includes(attacker) == false && attacker.isValid) damageRange.push(attacker)
    //     for (auto target of damageRange) {
    //         if (isValidTarget(target) == false) continue;
    //         if (target === hurt) continue;
    //         auto setOnFire = target.setOnFire(3 + 2 * ((float)rand()/RAND_MAX)(), true)
    //         if (setOnFire) {
    //             specialDamage(hurt, target, 4, EntityDamageCause.fire, ["fire"])
    //             dim.spawnParticle("dungeons:satchel_elements_fire", target.location)
    //         }
    // 
    //     }
    // 
    // });
    // 
    // // TIMER
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers()) {
    //         auto timeLeft = // world.scoreboard.getObjective('dungeons:ember_robes_t');
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
    // Transpiled from: components\armour\emerald.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.afterEvents.entityDie.subscribe((event) => {
    //     auto deadEntity = event.deadEntity;
    //     auto damageSource = event.damageSource.damagingEntity;
    //     if (!damageSource) {
    //         return;
    //     }
    //     if (damageSource.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(damageSource, "dungeons:emerald_armour")) return;
    //     if (!deadEntity.matches({ families: ["player"] }) && !deadEntity.matches({ families: ["monster"] })) return;
    // 
    //     deadEntity.dimension.spawnParticle('dungeons:emerald', deadEntity.location)
    //     damageSource.playSound('artefact.shadow_break',
    //         {
    //             pitch: 1.5,
    //             volume: 0.3
    //         });
    //     auto hp = deadEntity.getComponent('minecraft:health')
    //     auto expAdded = hp.defaultValue * 0.2
    //     for (auto i = 0; i < std::floor(hp.defaultValue * 0.8); i++) {
    //         if (((float)rand()/RAND_MAX)() > 0.5) expAdded += 1
    //     }
    //     expAdded = Math.round(expAdded)
    //     auto increments = std::floor(1 + expAdded / 20)
    //     auto delay = 0
    //     for (auto i = 0; i < expAdded; i += increments) {
    //         // system.runTimeout(() => {
    //             damageSource.addExperience(increments)
    //         }, delay)
    //         delay += 1
    //         if (i > expAdded * 0.6) delay += 1
    //         if (i > expAdded * 0.9) delay += 1
    //     }
    // 
    // });
    // 
    // // world.afterEvents.playerSwingStart.subscribe((e) => {
    //     auto heldItem = e.heldItemStack;
    //     if (!heldItem) return;
    //     auto player = e.player
    //     if (isWearingSet(player, "dungeons:emerald_armour"))
    //         // system.runTimeout(() => {
    //             auto cd = heldItem.getComponent("cooldown")
    //             if (cd !== undefined) {
    //                 auto timeLeft = player.getItemCooldown(cd.cooldownCategory)
    //                 if (timeLeft > cd.cooldownTicks - 2) {
    //                     player.startItemCooldown(cd.cooldownCategory, Math.ceil(cd.cooldownTicks * 0.85))
    //                 } else {
    //                     // system.runTimeout(() => {
    //                         auto cd2 = heldItem.getComponent("cooldown")
    //                         if (cd2 !== undefined) {
    //                             auto timeLeft2 = player.getItemCooldown(cd2.cooldownCategory)
    //                             if (timeLeft2 > cd2.cooldownTicks - 3) {
    //                                 player.startItemCooldown(cd2.cooldownCategory, Math.ceil(cd2.cooldownTicks * 0.85))
    //                             }
    //                         }
    //                     }, 1)
    //                 }
    //             }
    //         }, 0)
    // })

    // ==========================================
    // Transpiled from: components\armour\ender.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.afterEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(hurt, "dungeons:ender_armour")) return;
    //     if (((float)rand()/RAND_MAX)() > 0.1) return;
    //     auto dim = hurt.dimension
    //     auto loc = hurt.location;
    //     dim.spawnParticle('dungeons:instant_teleoort', { x: loc.x, y: loc.y + 1, z: loc.z })
    //     dim.playSound("entity.player.teleport", loc, { pitch: 1.3 })
    //     dim.spawnParticle('dungeons:teleport_out', loc);
    //     hurt.runCommand('spreadplayers ~ ~ 3.0 8.0 @s ~2');
    //     // system.runTimeout(() => {
    //         dim = hurt.dimension
    //         loc = hurt.location;
    //         dim.spawnParticle('dungeons:instant_teleoort', { x: loc.x, y: loc.y + 1, z: loc.z })
    //         dim.playSound("entity.player.teleport", loc, { pitch: 1.3 })
    //         dim.spawnParticle('dungeons:teleport_in', loc);
    //     }, 3)
    // });

    // ==========================================
    // Transpiled from: components\armour\entertainersGarb.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    // } from "@minecraft/server";
    // 
    // auto effectArray = [
    //     "Speed",
    //     "Haste",
    //     "Strength",
    //     "Jump Boost",
    //     "Regeneration",
    //     "Resistance",
    //     "Fire Resistance",
    //     "Water Breathing",
    //     "Invisibility",
    //     "Night Vision",
    //     "Health Boost",
    //     "Absorption",
    //     "Slow Falling",
    //     "Conduit Power",
    //     "Village Hero"
    // ];
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // void removeNumerals(type) {
    //     auto split = type.split(" ")
    //     auto newString = ""
    //     for (auto i = 0; i < split.length; i++) {
    //         if (split[i] !== "V" && split[i] !== "VI" && split[i] !== "IV" && split[i] !== "III" && split[i] !== "II" && split[i] !== "I") {
    //             newString += split[i] + " "
    //         }
    //     }
    //     newString = newString.trimEnd()
    //     return newString
    // }
    // 
    // // world.beforeEvents.effectAdd.subscribe((e) => {
    //     auto entity = e.entity;
    //     if (!entity) return;
    //     if (!entity.isValid) return;
    //     if (entity.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(entity, "dungeons:entertainers_garb")) return;
    //     auto type = e.effectType;
    //     auto testType = removeNumerals(type)
    //     if (effectArray.includes(testType)) e.duration = e.duration * 1.4
    // });
    // 

    // ==========================================
    // Transpiled from: components\armour\fox.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(hurt, "dungeons:fox_armour")) return;
    // 
    //     if (e.damageSource.cause == "selfDestruct") return;
    //     auto baseDmg = e.damage;
    //     if (!baseDmg) return;
    //     if (baseDmg <= 0) return;
    //     auto rand = ((float)rand()/RAND_MAX)()
    //     if (rand > 0.15) return;
    //     e.damage = 0 * e.damage
    //     e.cancel = true;
    //     if (hurt.getDynamicProperty("dungeons:damage_reduction_prevented") >= baseDmg) {
    //         e.cancel = true;
    //         return;
    //     }
    //     hurt.setDynamicProperty("dungeons:damage_reduction_prevented", baseDmg)
    //     // system.runTimeout(() => {
    //         hurt.setDynamicProperty("dungeons:damage_reduction_prevented", null)
    //     }, 9)
    // });

    // ==========================================
    // Transpiled from: components\armour\frost.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget } from "main.js"
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers({ excludeGameModes: ["Spectator"] })) {
    //         if (isWearingSet(player, "dungeons:frost_armour") == false) continue;
    //         auto dim = player.dimension;
    //         auto loc = player.location;
    //         auto mobs = dim.getEntities({ maxDistance: 8, location: loc, excludeFamilies: ["inanimate", "ignore"] })
    //         for (auto target of mobs) {
    //             if (target == player) continue;
    //             if (isValidTarget(target) == false) continue;
    //             auto slownessOnTarget = target.getEffect("slowness")
    //             if (slownessOnTarget) {
    //                 if (slownessOnTarget.duration > 20) continue;
    //             }
    //             target.addEffect("slowness", 80, { amplifier: 1 })
    //             dim.spawnParticle("dungeons:satchel_elements_ice", target.getHeadLocation())
    //             if (target.typeId == "minecraft:player") target.playSound("mob.player.hurt_freeze", { volume: 0.5 })
    //         }
    //     }
    // }, 10)

    // ==========================================
    // Transpiled from: components\armour\frostBite.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause,
    //     MolangVariableMap
    // } from "@minecraft/server";
    // 
    // auto particleSpeed = 15
    // // import { isWearingSet } from "components/armour.js"
    // // import { isValidTarget, specialDamage } from "main.js"
    // 
    // 
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers({ excludeGameModes: ["Spectator"] })) {
    //         if (isWearingSet(player, "dungeons:frost_bite")) {
    //             auto nearbyMobs = player.dimension.getEntities(
    //                 {
    //                     location: player.location,
    //                     maxDistance: 8,
    //                     excludeFamilies: ["ignore"]
    //                 });
    //             if (nearbyMobs.length == 0) return;
    //             for (auto mob of nearbyMobs) {
    //                 if (mob == player) continue;
    //                 if (isValidTarget(mob) == false) continue;
    //                 if (!mob.matches({ families: ["monster"] }) && !mob.matches({ families: ["player"] })) continue
    //                 auto timeout = particle(player, mob)
    //                 // system.runTimeout(() => {
    //                     auto isOnFire = mob.getComponent("onfire")
    //                     if (isOnFire) {
    //                         mob.extinguishFire()
    //                     } else {
    //                         auto dim = mob.dimension
    //                         auto loc = player.location
    //                         auto targetLoc = mob.getHeadLocation()
    //                         auto health = mob.getComponent("health")
    //                         if (health && health.currentValue > 1) {
    // 
    //                             auto dmg = specialDamage(player, mob, 0.5, EntityDamageCause.freezing, ["ice"])
    //                             if (!dmg) return;
    //                             dim.playSound("mob.player.hurt_freeze", loc, { pitch: 2.25 })
    //                         }
    //                         dim.spawnParticle("minecraft:ice_evaporation_emitter", targetLoc)
    //                         mob.addEffect("slowness", 35, { amplifier: 3, showParticles: false })
    //                         mob.clearVelocity()
    //                         dim.playSound("step.powder_snow", loc, { pitch: 1.25 })
    //                     }
    //                 }, timeout)
    //                 return;
    //             }
    //         }
    //     }
    // }, 50);
    // 
    // void particle(player, mob) {
    //     auto dim = player.dimension
    //     auto eLoc = player.location;
    //     eLoc = { x: eLoc.x, y: eLoc.y + 1, z: eLoc.z }
    //     if (dim.isChunkLoaded(eLoc)) {
    //         auto tLoc = mob.location;
    //         tLoc = { x: tLoc.x, y: tLoc.y + (mob.getHeadLocation().y - tLoc.y) / 2, z: tLoc.z }
    //         auto dx = tLoc.x - eLoc.x
    //         auto dy = tLoc.y - eLoc.y
    //         auto dz = tLoc.z - eLoc.z
    //         auto length = Math.sqrt(std::pow(dx, 2) + std::pow(dy, 2) + std::pow(dz, 2))
    // 
    //         dx = dx / length
    //         dy = dy / length
    //         dz = dz / length
    // 
    //         auto lifetime = length / particleSpeed
    // 
    //         auto map = new MolangVariableMap()
    //         map.setColorRGB("variable.color", { red: 0.75, green: 0.75, blue: 1 })
    //         map.setFloat("variable.particle_initial_speed", particleSpeed)
    //         map.setFloat("variable.max_lifetime", lifetime)
    //         map.setVector3("variable.direction", { x: dx, y: dy, z: dz })
    // 
    //         auto xOffset = ((float)rand()/RAND_MAX)() * 0.4 - 0.2
    //         auto yOffset = ((float)rand()/RAND_MAX)() * 0.4 - 0.2
    //         auto zOffset = ((float)rand()/RAND_MAX)() * 0.4 - 0.2
    //         dim.spawnParticle("minecraft:creaking_heart_trail", { x: eLoc.x + xOffset, y: eLoc.y + yOffset, z: eLoc.z + zOffset }, map)
    //         return lifetime * 20
    //     }
    //     return 1
    // }

    // ==========================================
    // Transpiled from: components\armour\fullMetal.js
    // ==========================================
    // // import {
    //     world,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    // 
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(attacker, "dungeons:full_metal_armour")) return;
    //     if (e.damageSource.cause !== EntityDamageCause.entityAttack) return;
    //     auto baseDmg = e.damage;
    //     if (baseDmg <= 0) return;
    //     e.damage = e.damage * 1.2
    // });

    // ==========================================
    // Transpiled from: components\armour\ghostKindler.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget, specialDamage } from "main.js"
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // Ghost Armour
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers({ excludeGameModes: ["Spectator"] })) {
    //         if (player.isSprinting && isWearingSet(player, "dungeons:ghost_kindler")) {
    // 
    //             auto nearbyMobs = player.dimension.getEntities({ location: player.location, maxDistance: 3, excludeFamilies: ['player'] });
    //             for (auto mob of nearbyMobs) {
    //                 if (isValidTarget(mob) == false) continue;
    //                 auto fire = mob.getComponent("minecraft:onfire")
    //                 if (!fire) {
    //                     auto setOnFire = mob.setOnFire(std::floor(((float)rand()/RAND_MAX)() * 4) + 4, true)
    //                     if (!setOnFire) continue;
    //                     specialDamage(player, mob, 4, EntityDamageCause.fire, ["fire"])
    //                     mob.dimension.spawnParticle('dungeons:ghostly_kindler_burn', mob.location)
    //                     player.dimension.spawnParticle('dungeons:cloaked_skull_idle', player.location)
    //                     player.dimension.playSound('mob.ghast.fireball', player.location, { volume: 0.3 });
    //                 }
    //             }
    //             auto nearbyPlayers = player.dimension.getEntities({ location: player.location, maxDistance: 3, families: ['player'] });
    //             for (auto enemyplayer of nearbyPlayers) {
    //                 if (isValidTarget(enemyplayer) == false) continue;
    //                 if (enemyplayer.typeId == "minecraft:player" && enemyplayer.getGameMode() == "Creative") continue;
    //                 if (enemyplayer !== player) {
    //                     auto fire = enemyplayer.getComponent("minecraft:onfire")
    //                     if (!fire) {
    //                         auto setOnFire = enemyplayer.setOnFire(std::floor(((float)rand()/RAND_MAX)() * 0.5) + 0.55, true)
    //                         if (!setOnFire) continue;
    //                         specialDamage(player, enemyplayer, 0.5, EntityDamageCause.fire, ["fire"])
    //                         enemyplayer.dimension.spawnParticle('dungeons:ghostly_kindler_burn', enemyplayer.location)
    //                         player.dimension.spawnParticle('dungeons:cloaked_skull_idle', player.location)
    //                         player.dimension.playSound('mob.ghast.fireball', player.location, { volume: 0.3 });
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // });

    // ==========================================
    // Transpiled from: components\armour\ghostly.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // Ghost Armour
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers({ excludeGameModes: ["Spectator"] })) {
    //         if (player.isSprinting && isWearingSet(player, "dungeons:ghostly_armour")) {
    //             player.addEffect("speed", 4, { amplifier: 0, showParticles: false });
    //             player.addEffect("invisibility", 4, { amplifier: 0, showParticles: false });
    //             player.addEffect("weakness", 4, { amplifier: 0, showParticles: false });
    //             player.playAnimation('animation.shadow', { nextState: 'shadowForm' });
    //             auto particleName = "dungeons:ghostly_smoke"
    //             if (isWearingSet(player, "dungeons:ghost_kindler")) particleName = "dungeons:ghostly_smoke_red"
    //             if (isWearingSet(player, "dungeons:cloaked_skull")) particleName = "dungeons:ghostly_smoke_black"
    //             player.dimension.spawnParticle(particleName, player.location)
    //         }
    //     }
    // });

    // ==========================================
    // Transpiled from: components\armour\gildedGlory.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // auto minLevels = 10
    // auto rechargeXp = 150
    // auto rechargeTicks = 600
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(hurt, "dungeons:gilded_glory")) return;
    //     if (hurt.getDynamicProperty("dungeons:damage_reduction_prevented") >= 999) {
    //         e.cancel = true;
    //         return;
    //     }
    //     hurt.setDynamicProperty("dungeons:damage_reduction_prevented", 999)
    //     // system.runTimeout(() => {
    //         hurt.setDynamicProperty("dungeons:damage_reduction_prevented", null)
    //     }, 9)
    //     auto deathBarterScore = // world.scoreboard.getObjective('dungeons:death_barter_lvl');
    //     if (!deathBarterScore) {
    //         // system.run(() => {
    //             deathBarterScore = // world.scoreboard.addObjective('dungeons:death_barter_lvl');
    //             deathBarterScore.setScore(hurt, rechargeXp)
    //         })
    //         return;
    //     }
    //     if (!deathBarterScore.hasParticipant(hurt.scoreboardIdentity)) {
    //         // system.run(() => {
    //             deathBarterScore.setScore(hurt, rechargeXp)
    //         })
    //         return;
    //     }
    //     if (deathBarterScore.getScore(hurt) < rechargeXp) return;
    //     if (hurt.level < minLevels) return;
    //     auto cd = // world.scoreboard.getObjective('dungeons:death_barter_t');
    //     if (!cd) {
    //         // system.run(() => {
    // 
    //             cd = // world.scoreboard.addObjective('dungeons:death_barter_t');
    //         })
    //         return;
    //     }
    //     if (cd.hasParticipant(hurt.scoreboardIdentity)) {
    //         return;
    //     }
    //     auto equippable = hurt.getComponent("equippable")
    //     auto mainHand = equippable.getEquipment("Mainhand")
    //     if (mainHand !== undefined && mainHand.typeId == "minecraft:totem_of_undying") return;
    //     auto offhand = equippable.getEquipment("Offhand")
    //     if (offhand !== undefined && offhand.typeId == "minecraft:totem_of_undying") return;
    //     auto baseDmg = e.damage;
    //     if (!baseDmg) return;
    //     if (baseDmg <= 0) return;
    // 
    //     auto hp = hurt.getComponent("health")
    //     if (hp.currentValue > 0) return;
    //     e.damage = e.damage * 0.0
    //     e.cancel = true;
    //     // system.run(() => {
    //         auto dim = hurt.dimension
    //         auto loc = hurt.location
    //         dim.playSound("random.totem", loc)
    //         dim.playSound("armour.death_barter.charged", loc, { pitch: 0.7 })
    //         dim.spawnParticle("dungeons:death_barter", loc)
    //         hurt.runCommand("camerashake add @s 0.2 0.3")
    //         hurt.runCommand("camerashake add @s 0.2 0.5")
    //         hurt.runCommand("camerashake add @s 0.2 0.7")
    //         hurt.addEffect("absorption", 100, { amplifier: 1 })
    //         hurt.addEffect("regeneration", 300, { amplifier: 1 })
    //         hurt.addEffect("fire_resistance", 300)
    //         if (hp.currentValue / 2 < 5) {
    //             hp.setCurrentValue(5)
    //         } else {
    //             hp.setCurrentValue(hp.currentValue / 2)
    //         }
    //         cd.setScore(hurt, rechargeTicks)
    //         deathBarterScore.setScore(hurt, 0)
    //         auto levelsToLose = minLevels + Math.round((hurt.level - minLevels) * 0.25)
    //         if (hurt.level > 50) levelsToLose += Math.round(hurt.level * 0.2)
    //         if (hurt.hasTag("dungeons:debug")) hurt.sendMessage(`§o§eDeath Barter §aConsumed ${levelsToLose} Levels`)
    //         auto expToLose = std::floor(getXpFromLevelCount(levelsToLose) / 20) * 20
    //         for (auto i = 0; i < 20; i++) {
    //             // system.runTimeout(() => {
    //                 auto subtract = (expToLose / 20) * -1
    //                 if (levelsToLose > 1000) subtract += 1000
    //                 if (hurt.xpEarnedAtCurrentLevel + subtract < 0) {
    //                     subtract -= hurt.xpEarnedAtCurrentLevel
    //                     if (subtract < 0) subtract = 0
    //                     auto setLevel = hurt.level
    //                     hurt.resetLevel()
    //                     hurt.addLevels(setLevel - 1)
    //                 }
    //                 hurt.addExperience(subtract)
    //                 hurt.dimension.spawnParticle("dungeons:opulent_immunity", hurt.location)
    //             }, i)
    //         }
    // 
    //     })
    // });
    // 
    // void getXpFromLevelCount(levelCount) {
    //     if (levelCount <= 0) return 0
    //     if (levelCount > 0 && levelCount <= 16) return (levelCount * levelCount) + (6 * levelCount)
    //     if (levelCount > 16 && levelCount <= 31) return 2.5 * (levelCount * levelCount) - 40.5 * levelCount + 360
    //     if (levelCount > 31) return 4.5 * (levelCount * levelCount) - 162.5 * levelCount + 2220
    // }
    // 
    // // world.afterEvents.entityDie.subscribe((e) => {
    //     auto player = e.deadEntity;
    //     if (!player) return;
    //     if (player.isValid == false) return;
    //     auto timeLeft = // world.scoreboard.getObjective('dungeons:death_barter_t');
    //     if (!timeLeft) return;
    //     if (!player.scoreboardIdentity) return;
    //     if (timeLeft && timeLeft.hasParticipant(player.scoreboardIdentity)) timeLeft.removeParticipant(player)
    //     auto lvl = // world.scoreboard.getObjective('dungeons:death_barter_lvl');
    //     if (!lvl) return;
    //     if (lvl && lvl.hasParticipant(player.scoreboardIdentity)) lvl.setScore(player, 150)
    // 
    // })
    // 
    // // TIMER
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers()) {
    //         auto timeLeft = // world.scoreboard.getObjective('dungeons:death_barter_t');
    //         if (!timeLeft) return;
    //         if (!player.scoreboardIdentity) continue;
    //         if (!timeLeft.hasParticipant(player.scoreboardIdentity)) continue;
    //         auto duration = timeLeft.getScore(player);
    // 
    //         if (duration > 0) {
    //             timeLeft.addScore(player, -1);
    //         }
    //         if (duration <= 0) {
    //             if (// world.scoreboard.getObjective('dungeons:death_barter_lvl').getScore(player) >= rechargeXp) player.playSound("armour.death_barter.charged")
    //             timeLeft.removeParticipant(player)
    //         }
    //     }
    // });
    // 
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers({ excludeGameModes: ["Spectator"] })) {
    //         if (isWearingSet(player, "dungeons:gilded_glory")) {
    //             auto xp = player.getTotalXp();
    //             // system.runTimeout(() => {
    //                 if (player.getTotalXp() > xp) {
    //                     auto diff = Math.round(player.getTotalXp() - xp)
    //                     auto lvl = // world.scoreboard.getObjective('dungeons:death_barter_lvl');
    //                     if (!lvl) {
    //                         lvl = // world.scoreboard.addObjective('dungeons:death_barter_lvl');
    //                     }
    //                     if (!lvl.hasParticipant(player.scoreboardIdentity)) {
    //                         return;
    //                     }
    //                     if (lvl.getScore(player) >= rechargeXp) return
    //                     if (lvl.getScore(player) + diff > rechargeXp) {
    //                         lvl.setScore(player, rechargeXp)
    //                     } else {
    //                         lvl.addScore(player, diff)
    //                     }
    //                     if (lvl.getScore(player) >= rechargeXp && // world.scoreboard.getObjective("dungeons:death_barter_t").hasParticipant(player.scoreboardIdentity) == false) player.playSound("armour.death_barter.charged")
    //                     if (lvl.getScore(player) < rechargeXp) player.playSound("random.orb", { pitch: 1, volume: 0.05 })
    //                     player.onScreenDisplay.setActionBar(`§l§a${lvl.getScore(player)}/${rechargeXp} `)
    //                 }
    //             }, 1);
    //         }
    //     }
    // }, 1);

    // ==========================================
    // Transpiled from: components\armour\glowSquid.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.afterEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (isWearingSet(hurt, "dungeons:glow_squid_armour") == false) return;
    //     auto cd = // world.scoreboard.getObjective('dungeons:glow_squid_armour_t');
    //     if (!cd) {
    //         cd = // world.scoreboard.addObjective('dungeons:glow_squid_armour_t');
    //     }
    //     if (cd.hasParticipant(hurt.scoreboardIdentity)) {
    //         return;
    //     }
    //     auto dim = hurt.dimension
    //     auto loc = hurt.location;
    //     cd.setScore(hurt, 16)
    //     dim.spawnParticle('dungeons:glow_squid_sparkles', loc);
    //     dim.playSound('mob.glow_squid.ink_squirt', loc, { pitch: 1.5, volume: 0.6 });
    // })
    // 
    // // TIMER
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers()) {
    //         auto timeLeft = // world.scoreboard.getObjective('dungeons:glow_squid_armour_t');
    //         if (!timeLeft) return;
    //         if (!player.scoreboardIdentity) continue;
    //         if (!timeLeft.hasParticipant(player.scoreboardIdentity)) continue;
    //         auto duration = timeLeft.getScore(player);
    // 
    //         if (duration > 0) {
    //             timeLeft.addScore(player, -1);
    // 
    //         }
    //         if (duration <= 0) {
    //             timeLeft.removeParticipant(player)
    //         }
    //     }
    // });
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     auto timeLeft = // world.scoreboard.getObjective('dungeons:glow_squid_armour_t');
    //     if (!timeLeft) return;
    //     if (!hurt.scoreboardIdentity) return;
    //     if (!timeLeft.hasParticipant(hurt.scoreboardIdentity)) return;
    //     if (e.damageSource.cause == "selfDestruct") return;
    //     if (e.damageSource.cause == "override") return;
    //     e.damage = 0 * e.damage
    //     e.cancel = true;
    // });

    // ==========================================
    // Transpiled from: components\armour\goldenPiglin.js
    // ==========================================
    // // import {
    //     world
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // TURTLE ARMOUR
    // // world.afterEvents.entityHealthChanged.subscribe((event) => {
    //     auto player = event.entity;
    //     auto oldValue = event.oldValue;
    //     auto newValue = event.newValue;
    //     if (!player) return;
    //     if (!player.isValid) return;
    //     if (player.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(player, "dungeons:golden_piglin_armour")) return;
    //     if (newValue <= oldValue) {
    //         return;
    //     }
    //     auto hp = player.getComponent("health")
    //     if (newValue > hp.defaultValue) newValue = hp.defaultValue
    //     auto diff = newValue - oldValue
    //     if (diff == 0) return;
    //     auto ticksReduceBy = std::floor(diff * 20)
    //     if (ticksReduceBy > 50) ticksReduceBy = 50
    //     auto inventory = player.getComponent("inventory")
    //     auto container = inventory.container;
    //     for (auto i = 0; i < container.size; i++) {
    //         auto slot = container.getSlot(i)
    //         if (slot.isValid == false) continue;
    //         auto itemStack = slot.getItem()
    //         if (itemStack == undefined) continue;
    //         if (!itemStack.getComponent("dungeons:artefact_cooldown")) continue;
    //         auto cd = itemStack.getComponent("cooldown")
    //         if (!cd) continue;
    //         if (itemStack.typeId.includes("spinblade")) continue;
    //         auto remainingTime = player.getItemCooldown(cd.cooldownCategory)
    //         if (remainingTime <= 10) continue;
    //         auto newTime = Math.ceil(remainingTime - ticksReduceBy)
    //         if (newTime < 10) newTime = 10
    //         player.startItemCooldown(cd.cooldownCategory, newTime)
    //     }
    // });

    // ==========================================
    // Transpiled from: components\armour\grim.js
    // ==========================================
    // // import {
    //     world
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.afterEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    // 
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(attacker, "dungeons:grim_armour")) return;
    //     if (e.damage <= 0) return;
    //     auto healAmt = e.damage * 0.05
    //     if (healAmt > 1.5) healAmt = 1.5
    //     auto hp = attacker.getComponent("health")
    //     if (!hp) return;
    // 
    //     auto maxHP = hp.defaultValue
    //     auto currentHP = hp.currentValue;
    // 
    //     if (healAmt + currentHP > maxHP) {
    //         hp.setCurrentValue(maxHP)
    //     } else {
    //         hp.setCurrentValue(currentHP + healAmt)
    //     }
    // 
    // });

    // ==========================================
    // Transpiled from: components\armour\heros.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.beforeEvents.entityHeal.subscribe((e) => {
    //     auto player = e.healedEntity;
    //     if (player.typeId !== 'minecraft:player') {
    //         return;
    //     }
    //     if (isWearingSet(player, "dungeons:heros_armour")) {
    //         e.healing = e.healing * 1.3
    //     }
    // });

    // ==========================================
    // Transpiled from: components\armour\livingVines.js
    // ==========================================
    // // import {
    //     world
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // // world.afterEvents.entityHurt.subscribe((event) => {
    //     auto damaged = event.hurtEntity;
    //     auto cause = event.damageSource.cause;
    //     if (event.damage > 4 || (cause != "magic" && cause != "wither")) {
    //         return;
    //     }
    //     auto damage = event.damage;
    //     if (damage > 2) damage = 2
    //     if (damaged.getEffect('poison') || damaged.getEffect('fatal_poison')) {
    //         auto players = damaged.dimension.getPlayers({ excludeGameModes: ['Creative', "Spectator"], maxDistance: 10, location: damaged.location });
    //         auto livingVines = []
    //         for (auto player of players) {
    //             if (!isWearingSet(player, "dungeons:living_vines_armour")) continue;
    //             livingVines.push(player)
    //         }
    //         for (auto player of livingVines) {
    //             auto hp = player.getComponent('minecraft:health');
    //             if (hp.currentValue < hp.defaultValue) {
    //                 auto healing = (damage / 2.5) / players.length;
    //                 if (healing > 1.5) healing = 1.5
    //                 if (hp.currentValue + healing > hp.defaultValue) {
    //                     hp.setCurrentValue(hp.defaultValue)
    //                 } else {
    //                     hp.setCurrentValue(hp.currentValue + healing)
    //                 }
    //             }
    //         }
    //     }
    // });

    // ==========================================
    // Transpiled from: components\armour\nimbleTurtle.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.afterEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(hurt, "dungeons:nimble_turtle_armour")) return;
    //     if (hurt.getEffect("speed")) {
    //         if (hurt.getEffect("speed").amplifier >= 4) return;
    //     }
    //     auto dim = hurt.dimension
    //     auto loc = hurt.location;
    //     dim.spawnParticle('dungeons:swiftness', loc)
    //     dim.playSound("armour.rush.activate", loc)
    //     hurt.addEffect("speed", 33, { amplifier: 4 })
    // 
    // });

    // ==========================================
    // Transpiled from: components\armour\ocelot.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers({ excludeGameModes: ["Spectator"] })) {
    //         if (isWearingSet(player, "dungeons:ocelot_armour")) {
    //             if (player.isSprinting) player.addEffect("speed", 4, { amplifier: 1, showParticles: false });
    //         }
    //     }
    // });

    // ==========================================
    // Transpiled from: components\armour\opulent.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // // Opulent Armour
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers({ excludeGameModes: ["Spectator"] })) {
    //         if (isWearingSet(player, "dungeons:opulent_armour")) {
    //             auto xp = player.getTotalXp();
    //             // system.runTimeout(() => {
    //                 if (player.getTotalXp() > xp) {
    //                     auto cd = // world.scoreboard.getObjective('dungeons:opulent_armour_t');
    //                     if (!cd) {
    //                         cd = // world.scoreboard.addObjective('dungeons:opulent_armour_t');
    //                     }
    //                     if (cd.hasParticipant(player.scoreboardIdentity)) {
    //                         return;
    //                     }
    //                     auto dim = player.dimension
    //                     auto loc = player.location;
    //                     cd.setScore(player, 100)
    //                     dim.playSound('beacon.activate', loc, { pitch: 1.5, volume: 0.3 });
    // 
    //                 }
    //             }, 1);
    //         }
    //     }
    // }, 1);
    // 
    // // TIMER
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers()) {
    //         auto timeLeft = // world.scoreboard.getObjective('dungeons:opulent_armour_t');
    //         if (!timeLeft) return;
    //         if (!player.scoreboardIdentity) continue;
    //         if (!timeLeft.hasParticipant(player.scoreboardIdentity)) continue;
    //         auto duration = timeLeft.getScore(player);
    // 
    //         if (duration > 50) player.dimension.spawnParticle("dungeons:opulent_immunity", player.location)
    //         if (duration > 0) {
    //             timeLeft.addScore(player, -1);
    // 
    //         }
    //         if (duration <= 0) {
    //             timeLeft.removeParticipant(player)
    //         }
    //     }
    // });
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     auto timeLeft = // world.scoreboard.getObjective('dungeons:opulent_armour_t');
    //     if (!timeLeft) return;
    //     if (!hurt.scoreboardIdentity) return;
    //     if (!timeLeft.hasParticipant(hurt.scoreboardIdentity)) return;
    //     auto duration = timeLeft.getScore(hurt);
    //     if (duration <= 50) return;
    //     if (e.damageSource.cause == "selfDestruct") return;
    //     e.damage = 0 * e.damage
    //     e.cancel = true;
    // });

    // ==========================================
    // Transpiled from: components\armour\phantom.js
    // ==========================================
    // // import {
    //     world,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    // 
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(attacker, "dungeons:phantom_armour")) return;
    //     if (e.damageSource.cause !== EntityDamageCause.projectile) return;
    //     auto baseDmg = e.damage;
    //     if (baseDmg <= 0) return;
    //     e.damage = e.damage * 1.3
    // });

    // ==========================================
    // Transpiled from: components\armour\plate.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(hurt, "dungeons:plate_armour")) return;
    // 
    //     if (e.damageSource.cause == "selfDestruct") return;
    //     auto baseDmg = e.damage;
    //     if (!baseDmg) return;
    //     if (baseDmg <= 0) return;
    //     e.damage = e.damage * 0.8
    //     if (hurt.getDynamicProperty("dungeons:damage_reduction_prevented") >= baseDmg) {
    //         e.cancel = true;
    //         return;
    //     }
    //     hurt.setDynamicProperty("dungeons:damage_reduction_prevented", baseDmg)
    //     // system.runTimeout(() => {
    //         hurt.setDynamicProperty("dungeons:damage_reduction_prevented", null)
    //     }, 9)
    // });
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers({ excludeGameModes: ["Spectator"] })) {
    //         if (isWearingSet(player, "dungeons:plate_armour")) {
    //             if (player.isSprinting) player.addEffect("slowness", 4, { amplifier: 1, showParticles: false });
    //         }
    //     }
    // });

    // ==========================================
    // Transpiled from: components\armour\rootRot.js
    // ==========================================
    // // import {
    //     world
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // TURTLE ARMOUR
    // // world.afterEvents.entityHealthChanged.subscribe((event) => {
    //     auto player = event.entity;
    //     auto oldValue = event.oldValue;
    //     auto newValue = event.newValue;
    //     if (!player) return;
    //     if (!player.isValid) return;
    //     if (player.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(player, "dungeons:root_rot_armour")) return;
    //     if (newValue <= oldValue) {
    //         return;
    //     }
    //     auto hp = player.getComponent("health")
    //     if (newValue > hp.defaultValue) newValue = hp.defaultValue
    //     auto diff = newValue - oldValue
    //     if (diff == 0) return;
    //     auto ticksReduceBy = std::floor(diff * 20)
    //     if (ticksReduceBy > 50) ticksReduceBy = 50
    //     auto inventory = player.getComponent("inventory")
    //     auto container = inventory.container;
    //     for (auto i = 0; i < container.size; i++) {
    //         auto slot = container.getSlot(i)
    //         if (slot.isValid == false) continue;
    //         auto itemStack = slot.getItem()
    //         if (itemStack == undefined) continue;
    //         if (!itemStack.getComponent("dungeons:artefact_cooldown")) continue;
    //         auto cd = itemStack.getComponent("cooldown")
    //         if (!cd) continue;
    //         if (itemStack.typeId.includes("spinblade")) continue;
    //         auto remainingTime = player.getItemCooldown(cd.cooldownCategory)
    //         if (remainingTime <= 10) continue;
    //         auto newTime = Math.ceil(remainingTime - ticksReduceBy)
    //         if (newTime < 10) newTime = 10
    //         player.startItemCooldown(cd.cooldownCategory, newTime)
    //     }
    // });

    // ==========================================
    // Transpiled from: components\armour\shadowWalker.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(hurt, "dungeons:shadow_walker")) return;
    //     if (hurt.isSprinting == false) return;
    //     auto baseDmg = e.damage;
    //     if (!baseDmg) return;
    //     if (baseDmg <= 0) return;
    //     if (e.damageSource.cause == "selfDestruct") return;
    //     e.damage = e.damage * 0.5
    //     if (hurt.getDynamicProperty("dungeons:damage_reduction_prevented") >= baseDmg) {
    //         e.cancel = true;
    //         return;
    //     }
    //     hurt.setDynamicProperty("dungeons:damage_reduction_prevented", baseDmg)
    //     // system.runTimeout(() => {
    //         hurt.setDynamicProperty("dungeons:damage_reduction_prevented", null)
    //     }, 9)
    // });

    // ==========================================
    // Transpiled from: components\armour\shulker.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(hurt, "dungeons:shulker_armour")) return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     auto nearbyTargets = 0
    //     for (auto mob of hurt.dimension.getEntities({ location: hurt.location, maxDistance: 8 })) {
    //         if (attacker && mob.typeId == attacker.typeId) {
    //             nearbyTargets += 1
    //             continue;
    //         }
    //         if (mob.matches({ families: ["monster"] })) nearbyTargets += 1
    //     }
    //     if (nearbyTargets < 4) return;
    //     auto baseDmg = e.damage;
    //     if (!baseDmg) return;
    //     if (baseDmg <= 0) return;
    //     if (e.damageSource.cause == "selfDestruct") return;
    //     e.damage = e.damage * 0.8
    //     if (hurt.getDynamicProperty("dungeons:damage_reduction_prevented") >= baseDmg) {
    //         e.cancel = true;
    //         return;
    //     }
    //     hurt.setDynamicProperty("dungeons:damage_reduction_prevented", baseDmg)
    //     // system.runTimeout(() => {
    //         hurt.setDynamicProperty("dungeons:damage_reduction_prevented", null)
    //     }, 9)
    // });
    // 
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(hurt, "dungeons:shulker_armour")) return;
    //     if (e.damageSource.cause !== EntityDamageCause.projectile) return;
    //     auto baseDmg = e.damage;
    //     if (!baseDmg) return;
    //     if (baseDmg <= 0) return;
    //     if (e.damageSource.cause == "selfDestruct") return;
    //     e.damage = e.damage * 2 / 3
    //     if (hurt.getDynamicProperty("dungeons:damage_reduction_prevented") >= baseDmg) {
    //         e.cancel = true;
    //         return;
    //     }
    //     hurt.setDynamicProperty("dungeons:damage_reduction_prevented", baseDmg)
    //     // system.runTimeout(() => {
    //         hurt.setDynamicProperty("dungeons:damage_reduction_prevented", null)
    //     }, 9)
    // });

    // ==========================================
    // Transpiled from: components\armour\snow.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(hurt, "dungeons:snow_armour")) return;
    //     if (e.damageSource.cause !== EntityDamageCause.freezing) return;
    //     auto baseDmg = e.damage;
    //     if (!baseDmg) return;
    //     if (baseDmg <= 0) return;
    //     e.damage = e.damage * 0.5
    //     if (hurt.getDynamicProperty("dungeons:damage_reduction_prevented") >= baseDmg) {
    //         e.cancel = true;
    //         return;
    //     }
    //     hurt.setDynamicProperty("dungeons:damage_reduction_prevented", baseDmg)
    //     // system.runTimeout(() => {
    //         hurt.setDynamicProperty("dungeons:damage_reduction_prevented", null)
    //     }, 9)
    // });
    // 
    // 
    // auto effectArray = [
    //     "Slowness"
    // ];
    // 
    // void removeNumerals(type) {
    //     auto split = type.split(" ")
    //     auto newString = ""
    //     for (auto i = 0; i < split.length; i++) {
    //         if (split[i] !== "V" && split[i] !== "VI" && split[i] !== "IV" && split[i] !== "III" && split[i] !== "II" && split[i] !== "I") {
    //             newString += split[i] + " "
    //         }
    //     }
    //     newString = newString.trimEnd()
    //     return newString
    // }
    // 
    // // world.beforeEvents.effectAdd.subscribe((e) => {
    //     auto entity = e.entity;
    //     if (!entity) return;
    //     if (!entity.isValid) return;
    //     if (entity.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(entity, "dungeons:snow_armour")) return;
    //     auto type = e.effectType;
    //     auto testType = removeNumerals(type)
    //     if (effectArray.includes(testType)) e.duration = e.duration * 1 / 3
    // });
    // 

    // ==========================================
    // Transpiled from: components\armour\souldancer.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(hurt, "dungeons:souldancer_armour")) return;
    // 
    //     if (e.damageSource.cause == "selfDestruct") return;
    //     auto baseDmg = e.damage;
    //     if (!baseDmg) return;
    //     if (baseDmg <= 0) return;
    //     auto rand = ((float)rand()/RAND_MAX)()
    //     if (rand > 0.15) return;
    //     e.damage = 0 * e.damage
    //     e.cancel = true;
    //     if (hurt.getDynamicProperty("dungeons:damage_reduction_prevented") >= baseDmg) {
    //         e.cancel = true;
    //         return;
    //     }
    //     hurt.setDynamicProperty("dungeons:damage_reduction_prevented", baseDmg)
    //     // system.runTimeout(() => {
    //         hurt.setDynamicProperty("dungeons:damage_reduction_prevented", null)
    //     }, 9)
    // });

    // ==========================================
    // Transpiled from: components\armour\spider.js
    // ==========================================
    // // import {
    //     world
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.afterEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    // 
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(attacker, "dungeons:spider_armour")) return;
    //     if (e.damage <= 0) return;
    //     auto healAmt = e.damage * 0.1
    //     if (healAmt > 1.5) healAmt = 1.5
    //     auto hp = attacker.getComponent("health")
    //     if (!hp) return;
    // 
    //     auto maxHP = hp.defaultValue
    //     auto currentHP = hp.currentValue;
    // 
    //     if (healAmt + currentHP > maxHP) {
    //         hp.setCurrentValue(maxHP)
    //     } else {
    //         hp.setCurrentValue(currentHP + healAmt)
    //     }
    // 
    // });

    // ==========================================
    // Transpiled from: components\armour\spookyGourdian.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers({ excludeGameModes: ["Spectator"] })) {
    //         if (isWearingSet(player, "dungeons:spooky_gourdian") == false) continue;
    //         player.dimension.spawnParticle('dungeons:spooky_gourdian_idle', player.location)
    //     }
    // }, 10)

    // ==========================================
    // Transpiled from: components\armour\sprout.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isValidTarget, specialDamage } from "main.js"
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers({ excludeGameModes: ["Spectator"] })) {
    //         if (player.isSprinting && isWearingSet(player, "dungeons:sprout_armour")) {
    //             auto nearbyMobs = player.dimension.getEntities({ location: player.location, maxDistance: 3.5, excludeFamilies: ['inanimate', "ignore"] });
    //             for (auto mob of nearbyMobs) {
    //                 if (isValidTarget(mob) == false) continue;
    //                 if (mob !== player) {
    //                     if (mob.typeId == "minecraft:player") {
    //                         if (mob.getEffect("poison")) continue;
    //                         auto damage = specialDamage(player, mob, 1, EntityDamageCause.magic, ["poison"])
    //                         if (!damage) continue
    //                         mob.applyKnockback({ x: 0, z: 0 }, -0.2)
    //                         mob.addEffect("poison", 40, { amplifier: 2 })
    //                         mob.addEffect("slowness", 40, { amplifier: 1, showParticles: false })
    //                     } else {
    //                         if (mob.getEffect("fatal_poison")) continue;
    //                         auto damage = specialDamage(player, mob, 2, EntityDamageCause.magic, ["poison"])
    //                         if (!damage) continue
    //                         mob.applyKnockback({ x: 0, z: 0 }, -0.2)
    //                         mob.addEffect("fatal_poison", 50, { amplifier: 2 })
    //                         mob.addEffect("slowness", 50, { amplifier: 2, showParticles: false })
    //                     }
    //                     mob.dimension.spawnParticle("dungeons:sprout_armour_smoke", mob.location)
    //                     mob.dimension.spawnParticle("dungeons:sprout_armour_smoke", mob.location)
    //                     mob.dimension.spawnParticle("dungeons:sprout_armour_smoke", mob.location)
    //                 }
    //             }
    // 
    //         }
    //     }
    // }, 15);
    // 
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers({ excludeGameModes: ["Spectator"] })) {
    //         if (player.isSprinting && isWearingSet(player, "dungeons:sprout_armour")) {
    //             player.dimension.spawnParticle("dungeons:sprout_armour_smoke", player.location)
    //         }
    //     }
    // }, 1);

    // ==========================================
    // Transpiled from: components\armour\squid.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // // import { isValidTarget } from "main.js"
    // 
    // // world.afterEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     auto attacker = e.damageSource.damagingEntity;
    //     if (!attacker) return;
    //     if (!isWearingSet(hurt, "dungeons:squid_armour")) return;
    //     auto cd = // world.scoreboard.getObjective('dungeons:squid_armour_t');
    //     if (!cd) {
    //         cd = // world.scoreboard.addObjective('dungeons:squid_armour_t');
    //     }
    //     if (cd.hasParticipant(hurt.scoreboardIdentity)) {
    //         return;
    //     }
    //     auto dim = hurt.dimension
    //     auto loc = hurt.location;
    //     cd.setScore(hurt, 50)
    // 
    //     if (isWearingSet(hurt, 'dungeons:glow_squid_armour')) {
    //         dim.spawnParticle('dungeons:glow_squid_ink', loc);
    //         dim.playSound('mob.glow_squid.ink_squirt', loc, { volume: 0.6 });
    //     } else if (isWearingSet(hurt, 'dungeons:squid_armour')) {
    //         dim.spawnParticle('dungeons:squid_ink', loc);
    //         dim.playSound('mob._squid.ink_squirt', loc, { volume: 0.6 });
    //     } else {
    //         return;
    //     }
    // 
    //     auto damageRange = dim.getEntities({
    //         location: loc,
    //         maxDistance: 4,
    //         excludeFamilies: ['ignore']
    //     });
    //     for (auto target of damageRange) {
    //         if (isValidTarget(target) == false) continue;
    //         if (target === hurt) continue;
    //         if (target == attacker) {
    //             target.addEffect("weakness", 80)
    //             target.addEffect("blindness", 40)
    //         } else {
    //             target.addEffect("weakness", 60)
    //             target.addEffect("blindness", 20)
    // 
    //         }
    // 
    //     }
    // 
    // });
    // 
    // // TIMER
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers()) {
    //         auto timeLeft = // world.scoreboard.getObjective('dungeons:squid_armour_t');
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
    // Transpiled from: components\armour\sturdyShulker.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // // import { isValidTarget } from "main.js"
    // 
    // 
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers({ excludeGameModes: ["Spectator"] })) {
    //         if (isWearingSet(player, "dungeons:sturdy_shulker_armour")) {
    //             auto nearbyMobs = player.dimension.getEntities(
    //                 {
    //                     location: player.location,
    //                     maxDistance: 8,
    //                     families: ['monster'],
    //                     excludeFamilies: ['ignore', "gravity_immune", "boss"]
    //                 });
    //             if (nearbyMobs.length == 0) return;
    //             for (auto mob of nearbyMobs) {
    //                 if (isValidTarget(mob) == false) continue;
    //                 if (mob.getEffect("levitation")) continue;
    //                 auto dim = mob.dimension
    //                 auto loc = player.location
    //                 auto targetLoc = mob.getHeadLocation()
    //                 dim.spawnParticle("dungeons:shulker_stun", targetLoc)
    //                 mob.addEffect("slowness", 30, { amplifier: 3, showParticles: false })
    //                 mob.addEffect("levitation", 30, { amplifier: 3, showParticles: true })
    //                 dim.playSound("mob.shulker.shoot", loc, { pitch: 1.25 })
    //                 return;
    //             }
    //         }
    //     }
    // }, 80);

    // ==========================================
    // Transpiled from: components\armour\teleportationRobes.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause,
    //     ButtonState
    // } from "@minecraft/server";
    // // import { isWearingSet } from "components/armour.js"
    // // world.afterEvents.playerButtonInput.subscribe((event) => {
    //     auto player = event.player;
    //     auto button = event.button;
    //     auto newState = event.newButtonState;
    //     auto inputInfo = player.inputInfo.lastInputModeUsed;
    //     if (!isWearingSet(player, "dungeons:teleportation_robes")) return;
    //     if (player.hasTag("dungeons:cutscene")) return;
    // 
    //     if (button === "Jump") return;
    //     if (newState === ButtonState.Released) return;
    //     if (player.hasTag('dungeons:debug')) {
    //         player.sendMessage(button);
    //         player.sendMessage(newState);
    //         player.sendMessage(inputInfo);
    //     }
    //     if (player.hasTag('dungeons:detect_double_sneak')) {
    //         player.removeTag('dungeons:detect_double_sneak');
    //         auto dim = player.dimension;
    //         auto block
    //         auto faceLocation
    //         auto face
    //         auto raycast = player.getBlockFromViewDirection({ maxDistance: 50, includePassableBlocks: false, includeLiquidBlocks: true });
    //         if (!raycast) {
    //             auto headLocation = player.getHeadLocation()
    //             auto vd = player.getViewDirection()
    //             auto point = { x: headLocation.x + (vd.x * 15), y: headLocation.y, z: headLocation.z + (vd.z * 15) }
    //             block = dim.getTopmostBlock({ x: point.x, z: point.z }, point.y)
    //             if (!block) return;
    //             if (block.y < player.location.y - 3.5) return;
    //             if (block.y > player.location.y + 3.5) return;
    //             face = "Up"
    //             faceLocation = { x: 0, y: 0, z: 0 }
    //             auto baseDist = Math.hypot(block.x - player.location.x, block.y - player.location.y, block.z - player.location.z)
    //             auto targetLoc = player.location;
    //             auto xDif = targetLoc.x - block.x
    //             auto yDif = targetLoc.y - block.y
    //             auto zDif = targetLoc.z - block.z
    //             for (auto i = 1; i < baseDist; i++) {
    //                 if (player.dimension.getBlock({ x: block.x + (xDif * (i / baseDist)), y: 1 + block.y + (yDif * (i / baseDist)), z: block.z + (zDif * (i / baseDist)) }).isAir == false) return;
    // 
    //             }
    //             if (block.above().isAir == false || block.above().above().isAir == false) return;
    //         } else {
    //             block = raycast.block.location;
    //             faceLocation = raycast.faceLocation;
    //             face = raycast.face;
    //         }
    //         auto cd = // world.scoreboard.getObjective('dungeons:tp_robes_t');
    //         if (!cd) {
    //             cd = // world.scoreboard.addObjective('dungeons:tp_robes_t');
    //         }
    //         if (cd.hasParticipant(player.scoreboardIdentity)) {
    //             return;
    //         }
    //         cd.addScore(player, 40)
    //         auto loc = player.location;
    //         dim.spawnParticle('dungeons:instant_teleport', { x: loc.x, y: loc.y + 1, z: loc.z });
    //         dim.spawnParticle('dungeons:teleport_out', loc)
    //         dim.playSound('armour.teleport.out', loc);
    //         player.runCommand("scriptevent dungeons:teleport_roll " + `${loc.x}_${loc.y}_${loc.z}`)
    //         if ((face === "Up" || face === "Down") || !raycast.block.above().isAir) {
    //             if (face == "Up") player.tryTeleport({ x: block.x + faceLocation.x, y: block.y + 1, z: block.z + faceLocation.z }, { checkForBlocks: false });
    //             if (face == "Down") player.tryTeleport({ x: block.x + faceLocation.x, y: block.y - 1.8, z: block.z + faceLocation.z }, { checkForBlocks: false });
    //             if (face !== "Up" && face !== "Down") {
    //                 auto xMod = 0
    //                 if (faceLocation.z > 0) xMod = 1.2
    //                 if (faceLocation.z < 0) xMod = -1.2
    //                 auto zMod = 0
    //                 if (faceLocation.x > 0) zMod = 1.2
    //                 if (faceLocation.x < 0) zMod = -1.2
    //                 player.tryTeleport({ x: block.x + xMod, y: block.y + 2 * faceLocation.y, z: block.z + zMod }, { checkForBlocks: false });
    //             }
    // 
    //         } else {
    //             player.tryTeleport({ x: block.x + 0.5, y: block.y + 1, z: block.z + 0.5 }, { checkForBlocks: false });
    //         }
    //         connectLine(player, loc, dim)
    //         player.playAnimation("animation.teleport_robes")
    //         player.addEffect("invisibility", 8, { showParticles: false })
    //         // system.runTimeout(() => {
    //             player.dimension.spawnParticle('dungeons:instant_teleport', { x: player.location.x, y: player.location.y + 1, z: player.location.z });
    //             player.dimension.spawnParticle('dungeons:teleport_in', player.location)
    //             player.dimension.playSound('armour.teleport.in', player.location);
    //         }, 8);
    //         return;
    //     } else {
    //         player.addTag('dungeons:detect_double_sneak');
    //         if (inputInfo === "Touch") {
    //             // system.runTimeout(() => {
    //                 if (player.hasTag('dungeons:detect_double_sneak')) player.removeTag('dungeons:detect_double_sneak');
    //             }, 10);
    //             return;
    //         }
    //         else {
    //             // system.runTimeout(() => {
    //                 if (player.hasTag('dungeons:detect_double_sneak')) player.removeTag('dungeons:detect_double_sneak');
    //             }, 5);
    //         }
    //     }
    // });
    // 
    // void connectLine(player, baseLoc, baseDim) {
    //     auto baseDist = Math.hypot(baseLoc.x - player.location.x, baseLoc.y - player.location.y, baseLoc.z - player.location.z)
    //     for (auto i = 1; i < 8; i += 8 / baseDist) {
    //         // system.runTimeout(() => {
    //             if (player.dimension !== baseDim) return;
    //             auto targetLoc = player.location;
    //             auto xDif = targetLoc.x - baseLoc.x
    //             auto yDif = targetLoc.y - baseLoc.y
    //             auto zDif = targetLoc.z - baseLoc.z
    //             player.dimension.spawnParticle("dungeons:voided_stars", { x: baseLoc.x + (xDif * (i / 8)), y: 1 + baseLoc.y + (yDif * (i / 8)), z: baseLoc.z + (zDif * (i / 8)) })
    //             player.dimension.spawnParticle("dungeons:teleport_beam", { x: baseLoc.x + (xDif * (i / 8)), y: 1 + baseLoc.y + (yDif * (i / 8)), z: baseLoc.z + (zDif * (i / 8)) })
    //         }, i)
    //     }
    // }
    // 
    // // TIMER
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers()) {
    //         auto timeLeft = // world.scoreboard.getObjective('dungeons:tp_robes_t');
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
    // Transpiled from: components\armour\thief.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.afterEvents.playerSwingStart.subscribe((e) => {
    //     auto heldItem = e.heldItemStack;
    //     if (!heldItem) return;
    //     auto player = e.player
    //     if (isWearingSet(player, "dungeons:thief_armour"))
    //         // system.runTimeout(() => {
    //             auto cd = heldItem.getComponent("cooldown")
    //             if (cd !== undefined) {
    //                 auto timeLeft = player.getItemCooldown(cd.cooldownCategory)
    //                 if (timeLeft > cd.cooldownTicks - 2) {
    //                     player.startItemCooldown(cd.cooldownCategory, Math.ceil(cd.cooldownTicks * 3 / 4))
    //                 } else {
    //                     // system.runTimeout(() => {
    //                         auto cd2 = heldItem.getComponent("cooldown")
    //                         if (cd2 !== undefined) {
    //                             auto timeLeft2 = player.getItemCooldown(cd2.cooldownCategory)
    //                             if (timeLeft2 > cd2.cooldownTicks - 3) {
    //                                 player.startItemCooldown(cd2.cooldownCategory, Math.ceil(cd2.cooldownTicks * 3 / 4))
    //                             }
    //                         }
    //                     }, 1)
    //                 }
    //             }
    //         }, 0)
    // })

    // ==========================================
    // Transpiled from: components\armour\titansShroud.js
    // ==========================================
    // // import {
    //     world,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    // 
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(attacker, "dungeons:titans_shroud")) return;
    //     if (e.damageSource.cause !== EntityDamageCause.entityAttack) return;
    //     auto baseDmg = e.damage;
    //     if (baseDmg <= 0) return;
    //     e.damage = e.damage * 1.1
    // });

    // ==========================================
    // Transpiled from: components\armour\troubadour.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // auto effectArray = [
    //     "Slowness",
    //     "Mining Fatigue",
    //     "Nausea",
    //     "Blindness",
    //     "Hunger",
    //     "Weakness",
    //     "Poison",
    //     "Wither",
    //     "Levitation",
    //     "Fatal Poison",
    //     "Bad Omen",
    //     "Darkness",
    //     "Trial Omen",
    //     "Raid Omen",
    //     "Oozing",
    //     "Wind Charged",
    //     "Infested",
    //     "Weaving"
    // ];
    // 
    // void removeNumerals(type) {
    //     auto split = type.split(" ")
    //     auto newString = ""
    //     for (auto i = 0; i < split.length; i++) {
    //         if (split[i] !== "V" && split[i] !== "VI" && split[i] !== "IV" && split[i] !== "III" && split[i] !== "II" && split[i] !== "I") {
    //             newString += split[i] + " "
    //         }
    //     }
    //     newString = newString.trimEnd()
    //     return newString
    // }
    // 
    // // world.beforeEvents.effectAdd.subscribe((e) => {
    //     auto entity = e.entity;
    //     if (!entity) return;
    //     if (!entity.isValid) return;
    //     if (entity.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(entity, "dungeons:troubadour")) return;
    //     auto type = e.effectType;
    //     auto testType = removeNumerals(type)
    //     if (effectArray.includes(testType)) e.duration = e.duration * 0.6
    // });
    // 
    // 
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers({ excludeGameModes: ["Spectator"] })) {
    //         if (isWearingSet(player, "dungeons:troubadour") == false) continue;
    //         player.dimension.spawnParticle('dungeons:troubadour', player.location)
    //     }
    // }, 30)

    // ==========================================
    // Transpiled from: components\armour\turtle.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.beforeEvents.entityHeal.subscribe((e) => {
    //     auto player = e.healedEntity;
    //     if (player.typeId !== 'minecraft:player') {
    //         return;
    //     }
    //     if (isWearingSet(player, "dungeons:turtle_armour")) {
    //         e.healing = e.healing * 1.3
    //     }
    // });

    // ==========================================
    // Transpiled from: components\armour\unstableRobes.js
    // ==========================================
    // // import {
    //     world,
    //     system,
    //     EntityDamageCause,
    //     ButtonState
    // } from "@minecraft/server";
    // // import { isWearingSet } from "components/armour.js"
    // // import { isValidTarget, specialDamage, getDirection, makeVector } from "main.js"
    // 
    // // system.afterEvents.scriptEventReceive.subscribe((e) => {
    //     auto id = e.id;
    //     if (id === 'dungeons:teleport_roll') {
    // 
    //         auto player = e.sourceEntity;
    //         if (isWearingSet(player, "dungeons:unstable_robes") == false) return;
    //         auto message = e.message;
    //         auto split = message.split("_")
    //         auto dim = player.dimension;
    //         auto loc = { x: parseFloat(split[0]), y: parseFloat(split[1]), z: parseFloat(split[2]) }
    //         // system.runTimeout(() => {
    //             auto damageRange = dim.getEntities({
    //                 location: loc,
    //                 maxDistance: 4,
    //                 excludeFamilies: ['ignore']
    //             });
    //             for (auto target of damageRange) {
    //                 if (isValidTarget(target) == false) continue;
    //                 if (target === player) continue;
    //                 auto damageDone = specialDamage(player, target, 12, EntityDamageCause.entityExplosion, ["explosion"])
    //                 if (!damageDone) continue;
    //                 auto dir = getDirection(loc, target.location);
    //                 target.applyKnockback(makeVector(dir, 0.65), 0.33)
    //             }
    //             dim.spawnParticle("dungeons:teleport_boom", { x: loc.x, y: loc.y - 0.5, z: loc.z })
    //             dim.spawnParticle("dungeons:teleport_boom_dust", loc)
    //             dim.playSound("random.explode", loc, { pitch: 0.7 })
    //             dim.playSound("armour.teleport.explode", loc)
    //         }, 5)
    //     }
    // });

    // ==========================================
    // Transpiled from: components\armour\wither.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     if (hurt.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(hurt, "dungeons:wither_armour")) return;
    //     auto baseDmg = e.damage;
    //     if (!baseDmg) return;
    //     if (baseDmg <= 0) return;
    //     if (e.damageSource.cause == "selfDestruct") return;
    //     e.damage = e.damage * 0.9
    //     if (hurt.getDynamicProperty("dungeons:damage_reduction_prevented") >= baseDmg) {
    //         e.cancel = true;
    //         return;
    //     }
    //     hurt.setDynamicProperty("dungeons:damage_reduction_prevented", baseDmg)
    //     // system.runTimeout(() => {
    //         hurt.setDynamicProperty("dungeons:damage_reduction_prevented", null)
    //     }, 9)
    // });

    // ==========================================
    // Transpiled from: components\armour\wolf.js
    // ==========================================
    // // import {
    //     world,
    //     EntityDamageCause
    // } from "@minecraft/server";
    // 
    // // import { isWearingSet } from "components/armour.js"
    // 
    // // world.beforeEvents.entityHurt.subscribe((e) => {
    //     auto hurt = e.hurtEntity;
    //     if (!hurt) return;
    //     if (!hurt.isValid) return;
    //     auto attacker = e.damageSource.damagingEntity;
    // 
    //     if (!attacker) return;
    //     if (!attacker.isValid) return;
    //     if (attacker.typeId !== "minecraft:player") return;
    //     if (!isWearingSet(attacker, "dungeons:wolf_armour")) return;
    //     if (e.damageSource.cause !== EntityDamageCause.entityAttack) return;
    //     auto baseDmg = e.damage;
    //     if (baseDmg <= 0) return;
    //     e.damage = e.damage * 1.2
    // });

    // ==========================================
    // Transpiled from: misc\armourEquipSound.js
    // ==========================================
    // // import {
    //     world,
    //     system
    // } from "@minecraft/server";
    // 
    // void playsound(player, item) {
    //     if (item.typeId.includes("dungeons:") == false) return;
    //     auto id = item.typeId.replace("_boots", "").replace("_leggings", "").replace("_chestplate", "").replace("_helmet", "").replace("dungeons:", "")
    //     auto pitch = ((float)rand()/RAND_MAX)() * 0.6 + 0.7
    //     player.dimension.playSound("armour.equip." + id, player.location, { volume: 0.5, pitch: pitch })
    // }
    // 
    // // system.runInterval(() => {
    //     for (auto player of // world.getPlayers({ excludeGameModes: ["Spectator"] })) {
    //         auto equippable = player.getComponent("equippable")
    //         auto head = equippable.getEquipment("Head")
    //         auto chest = equippable.getEquipment("Chest")
    //         auto legs = equippable.getEquipment("Legs")
    //         auto feet = equippable.getEquipment("Feet")
    //         // system.runTimeout(() => {
    //             if (!player.isValid) return;
    //             auto equippable2 = player.getComponent("equippable")
    //             auto head2 = equippable2.getEquipment("Head")
    //             auto chest2 = equippable2.getEquipment("Chest")
    //             auto legs2 = equippable2.getEquipment("Legs")
    //             auto feet2 = equippable2.getEquipment("Feet")
    //             if (head2 && (!head || head.typeId !== head2.typeId)) playsound(player, head2)
    //             if (chest2 && (!chest || chest.typeId !== chest2.typeId)) playsound(player, chest2)
    //             if (legs2 && (!legs || legs.typeId !== legs2.typeId)) playsound(player, legs2)
    //             if (feet2 && (!feet || feet.typeId !== feet2.typeId)) playsound(player, feet2)
    //         }, 1)
    //     }
    // })

    void init() {}
}
