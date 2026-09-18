#include "WeaponsHelper.h"
#include "generated/WeaponsGen.h"
#include <endstone/server.h>
#include <unordered_map>
#include <functional>

namespace WeaponsHelper {

    // Peta Memori (Hash Map) untuk O(1) lookup
    using WeaponHandlerMap = std::unordered_map<std::string, std::function<void(endstone::Player&, endstone::Actor&)>>;
    static WeaponHandlerMap weaponHandlers;

    void initWeaponMap() {
        if (!weaponHandlers.empty()) return;
        
        // Mendaftarkan fungsi senjata. Dalam skala nyata, ini diisi oleh Transpiler.
        weaponHandlers["dungeons:longsword"] = [](endstone::Player& p, endstone::Actor& t) {
            // trigger sharpened or critical hit
        };
        
        weaponHandlers["dungeons:anchor"] = [](endstone::Player& p, endstone::Actor& t) {
            // trigger poison
        };
        
        weaponHandlers["dungeons:battlestaff"] = [](endstone::Player& p, endstone::Actor& t) {
            // trigger exploding
        };
        
                // AUTO-GENERATED WIRES BY ADVANCED TRANSPILER
        weaponHandlers["dungeons:alylicleaver"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_alylicleaver(p, t);
        };
        weaponHandlers["dungeons:longsword"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_longsword(p, t);
        };
        weaponHandlers["dungeons:anchor"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_anchor(p, t);
        };
        weaponHandlers["dungeons:axe"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_axe(p, t);
        };
        weaponHandlers["dungeons:battlestaff"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_battlestaff(p, t);
        };
        weaponHandlers["dungeons:boneClub"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_boneClub(p, t);
        };
        weaponHandlers["dungeons:brokenSawblade"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_brokenSawblade(p, t);
        };
        weaponHandlers["dungeons:claymore"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_claymore(p, t);
        };
        weaponHandlers["dungeons:spongeStriker"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_spongeStriker(p, t);
        };
        weaponHandlers["dungeons:cutlass"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_cutlass(p, t);
        };
        weaponHandlers["dungeons:daggers"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_daggers(p, t);
        };
        weaponHandlers["dungeons:gauntlets"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_gauntlets(p, t);
        };
        weaponHandlers["dungeons:glaive"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_glaive(p, t);
        };
        weaponHandlers["dungeons:hammer"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_hammer(p, t);
        };
        weaponHandlers["dungeons:obsidianClaymore"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_obsidianClaymore(p, t);
        };
        weaponHandlers["dungeons:rapier"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_rapier(p, t);
        };
        weaponHandlers["dungeons:soulScythe"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_soulScythe(p, t);
        };
        weaponHandlers["dungeons:whip"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_whip(p, t);
        };
        weaponHandlers["dungeons:voidBlades"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_voidBlades(p, t);
        };
        weaponHandlers["dungeons:rushSpear"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_rushSpear(p, t);
        };
        weaponHandlers["dungeons:mace"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_mace(p, t);
        };
        weaponHandlers["dungeons:sickles"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_sickles(p, t);
        };
        weaponHandlers["dungeons:alylicleaver"] = [](endstone::Player& p, endstone::Actor& t) {
            WeaponsGen::handle_alylicleaver(p, t);
        };

    }

    void handleWeaponAttack(endstone::Player& player, endstone::Actor& target, const std::string& weaponId) {
        initWeaponMap(); // Pastikan map sudah terisi
        
        auto it = weaponHandlers.find(weaponId);
        if (it != weaponHandlers.end()) {
            it->second(player, target); // Eksekusi instan O(1)
        }
    }

    void triggerSwirling(endstone::Player& player) {
        // Logic for swirling enchant
    }

    void triggerShockwave(endstone::Player& player) {
        // Logic for shockwave
    }

    void triggerLeeching(endstone::Player& player, float damage) {
        // Logic for leeching
    }

}
