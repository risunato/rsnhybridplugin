#include "RangedHelper.h"
#include "generated/RangedGen.h"
#include <unordered_map>
#include <functional>

namespace RangedHelper {
    using RangedHandlerMap = std::unordered_map<std::string, std::function<void(endstone::Player&, endstone::Actor&)>>;
    static RangedHandlerMap rangedHandlers;

    void initRangedMap() {
        if (!rangedHandlers.empty()) return;
        
        rangedHandlers["dungeons:ancient_guardian"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_ancient_guardian(p, t); };
        rangedHandlers["dungeons:arch_illager"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_arch_illager(p, t); };
        rangedHandlers["dungeons:arrow_effects"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_arrow_effects(p, t); };
        rangedHandlers["dungeons:bubble_bow"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_bubble_bow(p, t); };
        rangedHandlers["dungeons:burning"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_burning(p, t); };
        rangedHandlers["dungeons:chains"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_chains(p, t); };
        rangedHandlers["dungeons:chilling"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_chilling(p, t); };
        rangedHandlers["dungeons:corrupted_cauldron"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_corrupted_cauldron(p, t); };
        rangedHandlers["dungeons:critical_hit"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_critical_hit(p, t); };
        rangedHandlers["dungeons:crossbow_loading"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_crossbow_loading(p, t); };
        rangedHandlers["dungeons:electrified"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_electrified(p, t); };
        rangedHandlers["dungeons:enchanted_mobs"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_enchanted_mobs(p, t); };
        rangedHandlers["dungeons:enchanter"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_enchanter(p, t); };
        rangedHandlers["dungeons:endersent"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_endersent(p, t); };
        rangedHandlers["dungeons:enigma_resonator"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_enigma_resonator(p, t); };
        rangedHandlers["dungeons:fire_trail"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_fire_trail(p, t); };
        rangedHandlers["dungeons:freezing"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_freezing(p, t); };
        rangedHandlers["dungeons:freezing_strong"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_freezing_strong(p, t); };
        rangedHandlers["dungeons:fuse_shot"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_fuse_shot(p, t); };
        rangedHandlers["dungeons:gravity"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_gravity(p, t); };
        rangedHandlers["dungeons:gravity_pulse"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_gravity_pulse(p, t); };
        rangedHandlers["dungeons:heal_allies"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_heal_allies(p, t); };
        rangedHandlers["dungeons:heart_of_ender"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_heart_of_ender(p, t); };
        rangedHandlers["dungeons:hovering_inferno"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_hovering_inferno(p, t); };
        rangedHandlers["dungeons:icy_creeper"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_icy_creeper(p, t); };
        rangedHandlers["dungeons:illusioner"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_illusioner(p, t); };
        rangedHandlers["dungeons:item_glow"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_item_glow(p, t); };
        rangedHandlers["dungeons:jungle_abomination"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_jungle_abomination(p, t); };
        rangedHandlers["dungeons:mooshroom_monstrosity"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_mooshroom_monstrosity(p, t); };
        rangedHandlers["dungeons:nameless_one"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_nameless_one(p, t); };
        rangedHandlers["dungeons:necromancer"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_necromancer(p, t); };
        rangedHandlers["dungeons:obsidian_monstrosity"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_obsidian_monstrosity(p, t); };
        rangedHandlers["dungeons:poison_cloud"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_poison_cloud(p, t); };
        rangedHandlers["dungeons:poison_trail"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_poison_trail(p, t); };
        rangedHandlers["dungeons:radiance"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_radiance(p, t); };
        rangedHandlers["dungeons:raid_mob"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_raid_mob(p, t); };
        rangedHandlers["dungeons:redstone_monstrosity"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_redstone_monstrosity(p, t); };
        rangedHandlers["dungeons:rush"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_rush(p, t); };
        rangedHandlers["dungeons:shadow_form"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_shadow_form(p, t); };
        rangedHandlers["dungeons:shadow_shot"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_shadow_shot(p, t); };
        rangedHandlers["dungeons:shadow_shot_spooky"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_shadow_shot_spooky(p, t); };
        rangedHandlers["dungeons:shockwave"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_shockwave(p, t); };
        rangedHandlers["dungeons:snareling"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_snareling(p, t); };
        rangedHandlers["dungeons:sparkler_loot"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_sparkler_loot(p, t); };
        rangedHandlers["dungeons:spooky_monstrosity"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_spooky_monstrosity(p, t); };
        rangedHandlers["dungeons:target_dummy"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_target_dummy(p, t); };
        rangedHandlers["dungeons:tempest_golem"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_tempest_golem(p, t); };
        rangedHandlers["dungeons:tempest_golem_totem"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_tempest_golem_totem(p, t); };
        rangedHandlers["dungeons:tempo_theft"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_tempo_theft(p, t); };
        rangedHandlers["dungeons:thorns"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_thorns(p, t); };
        rangedHandlers["dungeons:unchanting"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_unchanting(p, t); };
        rangedHandlers["dungeons:voided_effect"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_voided_effect(p, t); };
        rangedHandlers["dungeons:void_strike"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_void_strike(p, t); };
        rangedHandlers["dungeons:watchling"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_watchling(p, t); };
        rangedHandlers["dungeons:weakening"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_weakening(p, t); };
        rangedHandlers["dungeons:wraith"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_wraith(p, t); };
        rangedHandlers["dungeons:wretched_wraith"] = [](endstone::Player& p, endstone::Actor& t) { RangedGen::handle_wretched_wraith(p, t); };
    }

    void handleProjectileHit(endstone::Player& player, endstone::Actor& target, const std::string& bowId) {
        initRangedMap();
        auto it = rangedHandlers.find(bowId);
        if (it != rangedHandlers.end()) {
            it->second(player, target);
        }
    }
}
