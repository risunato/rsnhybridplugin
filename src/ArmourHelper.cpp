#include "ArmourHelper.h"
#include "generated/ArmourGen.h"
#include <endstone/server.h>
#include <unordered_map>
#include <functional>

namespace ArmourHelper {
    using ArmourHandlerMap = std::unordered_map<std::string, std::function<void(endstone::Player&)>>;
    static ArmourHandlerMap armourHandlers;

    void initArmourMap() {
        if (!armourHandlers.empty()) return;
        armourHandlers["dungeons:dark"] = [](endstone::Player& p) { ArmourGen::handle_dark(p); };
        armourHandlers["dungeons:titansShroud"] = [](endstone::Player& p) { ArmourGen::handle_titansShroud(p); };
        armourHandlers["dungeons:thief"] = [](endstone::Player& p) { ArmourGen::handle_thief(p); };
        armourHandlers["dungeons:spider"] = [](endstone::Player& p) { ArmourGen::handle_spider(p); };
        armourHandlers["dungeons:grim"] = [](endstone::Player& p) { ArmourGen::handle_grim(p); };
        armourHandlers["dungeons:wither"] = [](endstone::Player& p) { ArmourGen::handle_wither(p); };
        armourHandlers["dungeons:spookyGourdian"] = [](endstone::Player& p) { ArmourGen::handle_spookyGourdian(p); };
        armourHandlers["dungeons:ghostly"] = [](endstone::Player& p) { ArmourGen::handle_ghostly(p); };
        armourHandlers["dungeons:ghostKindler"] = [](endstone::Player& p) { ArmourGen::handle_ghostKindler(p); };
        armourHandlers["dungeons:cloakedSkull"] = [](endstone::Player& p) { ArmourGen::handle_cloakedSkull(p); };
        armourHandlers["dungeons:wolf"] = [](endstone::Player& p) { ArmourGen::handle_wolf(p); };
        armourHandlers["dungeons:blackWolf"] = [](endstone::Player& p) { ArmourGen::handle_blackWolf(p); };
        armourHandlers["dungeons:fox"] = [](endstone::Player& p) { ArmourGen::handle_fox(p); };
        armourHandlers["dungeons:snow"] = [](endstone::Player& p) { ArmourGen::handle_snow(p); };
        armourHandlers["dungeons:frost"] = [](endstone::Player& p) { ArmourGen::handle_frost(p); };
        armourHandlers["dungeons:plate"] = [](endstone::Player& p) { ArmourGen::handle_plate(p); };
        armourHandlers["dungeons:fullMetal"] = [](endstone::Player& p) { ArmourGen::handle_fullMetal(p); };
        armourHandlers["dungeons:cauldron"] = [](endstone::Player& p) { ArmourGen::handle_cauldron(p); };
        armourHandlers["dungeons:emberRobes"] = [](endstone::Player& p) { ArmourGen::handle_emberRobes(p); };
        armourHandlers["dungeons:ocelot"] = [](endstone::Player& p) { ArmourGen::handle_ocelot(p); };
        armourHandlers["dungeons:shadowWalker"] = [](endstone::Player& p) { ArmourGen::handle_shadowWalker(p); };
        armourHandlers["dungeons:rootRot"] = [](endstone::Player& p) { ArmourGen::handle_rootRot(p); };
        armourHandlers["dungeons:blackSpot"] = [](endstone::Player& p) { ArmourGen::handle_blackSpot(p); };
        armourHandlers["dungeons:emerald"] = [](endstone::Player& p) { ArmourGen::handle_emerald(p); };
        armourHandlers["dungeons:opulent"] = [](endstone::Player& p) { ArmourGen::handle_opulent(p); };
        armourHandlers["dungeons:gildedGlory"] = [](endstone::Player& p) { ArmourGen::handle_gildedGlory(p); };
        armourHandlers["dungeons:turtle"] = [](endstone::Player& p) { ArmourGen::handle_turtle(p); };
        armourHandlers["dungeons:nimbleTurtle"] = [](endstone::Player& p) { ArmourGen::handle_nimbleTurtle(p); };
        armourHandlers["dungeons:squid"] = [](endstone::Player& p) { ArmourGen::handle_squid(p); };
        armourHandlers["dungeons:glowSquid"] = [](endstone::Player& p) { ArmourGen::handle_glowSquid(p); };
        armourHandlers["dungeons:sprout"] = [](endstone::Player& p) { ArmourGen::handle_sprout(p); };
        armourHandlers["dungeons:livingVines"] = [](endstone::Player& p) { ArmourGen::handle_livingVines(p); };
        armourHandlers["dungeons:goldenPiglin"] = [](endstone::Player& p) { ArmourGen::handle_goldenPiglin(p); };
        armourHandlers["dungeons:ender"] = [](endstone::Player& p) { ArmourGen::handle_ender(p); };
        armourHandlers["dungeons:entertainersGarb"] = [](endstone::Player& p) { ArmourGen::handle_entertainersGarb(p); };
        armourHandlers["dungeons:troubadour"] = [](endstone::Player& p) { ArmourGen::handle_troubadour(p); };
        armourHandlers["dungeons:shulker"] = [](endstone::Player& p) { ArmourGen::handle_shulker(p); };
        armourHandlers["dungeons:sturdyShulker"] = [](endstone::Player& p) { ArmourGen::handle_sturdyShulker(p); };
        armourHandlers["dungeons:teleportationRobes"] = [](endstone::Player& p) { ArmourGen::handle_teleportationRobes(p); };
        armourHandlers["dungeons:unstableRobes"] = [](endstone::Player& p) { ArmourGen::handle_unstableRobes(p); };
        armourHandlers["dungeons:champions"] = [](endstone::Player& p) { ArmourGen::handle_champions(p); };
        armourHandlers["dungeons:heros"] = [](endstone::Player& p) { ArmourGen::handle_heros(p); };
        armourHandlers["dungeons:phantom"] = [](endstone::Player& p) { ArmourGen::handle_phantom(p); };
        armourHandlers["dungeons:frostBite"] = [](endstone::Player& p) { ArmourGen::handle_frostBite(p); };
        armourHandlers["dungeons:beenest"] = [](endstone::Player& p) { ArmourGen::handle_beenest(p); };
        armourHandlers["dungeons:beehive"] = [](endstone::Player& p) { ArmourGen::handle_beehive(p); };
        armourHandlers["dungeons:souldancer"] = [](endstone::Player& p) { ArmourGen::handle_souldancer(p); };
    }

    bool isWearingSet(endstone::Player& player, const std::string& tag) {
        // Mock implementation
        return true;
    }

    void applyArmourEffects(endstone::Player& player) {
        initArmourMap();
        // Iterate through equipped armor tags, get ID, call map
        // Mock trigger
        auto it = armourHandlers.find("dungeons:spookyGourdian");
        if (it != armourHandlers.end()) it->second(player);
    }
}
