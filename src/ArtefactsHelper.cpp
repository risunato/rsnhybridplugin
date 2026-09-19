#include "ArtefactsHelper.h"
#include "generated/ArtefactsGen.h"
#include <endstone/server.h>
#include <unordered_map>
#include <functional>

namespace ArtefactsHelper {
    using ArtefactHandlerMap = std::unordered_map<std::string, std::function<void(endstone::Player&)>>;
    static ArtefactHandlerMap artefactHandlers;

    void initArtefactMap() {
        if (!artefactHandlers.empty()) return;
        
        artefactHandlers["dungeons:artefact_cooldown"] = [](endstone::Player& p) { ArtefactsGen::handle_artefactCooldown(p); };
        artefactHandlers["dungeons:blast_fungus"] = [](endstone::Player& p) { ArtefactsGen::handle_blastFungus(p); };
        artefactHandlers["dungeons:buzzy_nest"] = [](endstone::Player& p) { ArtefactsGen::handle_buzzyNest(p); };
        artefactHandlers["dungeons:corrupted_beacon"] = [](endstone::Player& p) { ArtefactsGen::handle_corruptedBeacon(p); };
        artefactHandlers["dungeons:corrupted_pumpkin"] = [](endstone::Player& p) { ArtefactsGen::handle_corruptedPumpkin(p); };
        artefactHandlers["dungeons:corrupted_seeds"] = [](endstone::Player& p) { ArtefactsGen::handle_corruptedSeeds(p); };
        artefactHandlers["dungeons:death_cap"] = [](endstone::Player& p) { ArtefactsGen::handle_deathCap(p); };
        artefactHandlers["dungeons:enchanters_tome"] = [](endstone::Player& p) { ArtefactsGen::handle_enchantersTome(p); };
        artefactHandlers["dungeons:enchanted_grass"] = [](endstone::Player& p) { ArtefactsGen::handle_enchantedGrass(p); };
        artefactHandlers["dungeons:eye_guardian"] = [](endstone::Player& p) { ArtefactsGen::handle_eyeGuardian(p); };
        artefactHandlers["dungeons:ghost_cloak"] = [](endstone::Player& p) { ArtefactsGen::handle_ghostCloak(p); };
        artefactHandlers["dungeons:golem_kit"] = [](endstone::Player& p) { ArtefactsGen::handle_golemKit(p); };
        artefactHandlers["dungeons:gong_weakening"] = [](endstone::Player& p) { ArtefactsGen::handle_gongWeakening(p); };
        artefactHandlers["dungeons:harvester"] = [](endstone::Player& p) { ArtefactsGen::handle_harvester(p); };
        artefactHandlers["dungeons:ice_wand"] = [](endstone::Player& p) { ArtefactsGen::handle_iceWand(p); };
        artefactHandlers["dungeons:iron_hide"] = [](endstone::Player& p) { ArtefactsGen::handle_ironHide(p); };
        artefactHandlers["dungeons:light_feather"] = [](endstone::Player& p) { ArtefactsGen::handle_lightFeather(p); };
        artefactHandlers["dungeons:lightning_rod"] = [](endstone::Player& p) { ArtefactsGen::handle_lightningRod(p); };
        artefactHandlers["dungeons:powershaker"] = [](endstone::Player& p) { ArtefactsGen::handle_powershaker(p); };
        artefactHandlers["dungeons:satchel_elements"] = [](endstone::Player& p) { ArtefactsGen::handle_satchelElements(p); };
        artefactHandlers["dungeons:satchel_elixirs"] = [](endstone::Player& p) { ArtefactsGen::handle_satchelElixirs(p); };
        artefactHandlers["dungeons:satchel_snacks"] = [](endstone::Player& p) { ArtefactsGen::handle_satchelSnacks(p); };
        artefactHandlers["dungeons:scatter_mines"] = [](endstone::Player& p) { ArtefactsGen::handle_scatterMines(p); };
        artefactHandlers["dungeons:shadow_shifter"] = [](endstone::Player& p) { ArtefactsGen::handle_shadowShifter(p); };
        artefactHandlers["dungeons:shock_powder"] = [](endstone::Player& p) { ArtefactsGen::handle_shockPowder(p); };
        artefactHandlers["dungeons:soul_healer"] = [](endstone::Player& p) { ArtefactsGen::handle_soulHealer(p); };
        artefactHandlers["dungeons:soul_lantern"] = [](endstone::Player& p) { ArtefactsGen::handle_soulLantern(p); };
        artefactHandlers["dungeons:spinblade"] = [](endstone::Player& p) { ArtefactsGen::handle_spinblade(p); };
        artefactHandlers["dungeons:swiftness_boot"] = [](endstone::Player& p) { ArtefactsGen::handle_swiftnessBoot(p); };
        artefactHandlers["dungeons:totem_casting"] = [](endstone::Player& p) { ArtefactsGen::handle_totemCasting(p); };
        artefactHandlers["dungeons:totem_shielding"] = [](endstone::Player& p) { ArtefactsGen::handle_totemShielding(p); };
        artefactHandlers["dungeons:totem_regeneration"] = [](endstone::Player& p) { ArtefactsGen::handle_totemRegeneration(p); };
        artefactHandlers["dungeons:updraft_tome"] = [](endstone::Player& p) { ArtefactsGen::handle_updraftTome(p); };
        artefactHandlers["dungeons:vexing_chant"] = [](endstone::Player& p) { ArtefactsGen::handle_vexingChant(p); };
        artefactHandlers["dungeons:wind_horn"] = [](endstone::Player& p) { ArtefactsGen::handle_windHorn(p); };
        artefactHandlers["dungeons:tome_duplication"] = [](endstone::Player& p) { ArtefactsGen::handle_tomeDuplication(p); };
        artefactHandlers["dungeons:love_medallion"] = [](endstone::Player& p) { ArtefactsGen::handle_loveMedallion(p); };
        artefactHandlers["dungeons:totem_soul_protection"] = [](endstone::Player& p) { ArtefactsGen::handle_totemSoulProtection(p); };
        artefactHandlers["dungeons:tasty_bone"] = [](endstone::Player& p) { ArtefactsGen::handle_tastyBone(p); };
        artefactHandlers["dungeons:wonderful_wheat"] = [](endstone::Player& p) { ArtefactsGen::handle_wonderfulWheat(p); };
    }

    void handleArtefactUse(endstone::Player& player, const std::string& artefactId) {
        initArtefactMap();
        auto it = artefactHandlers.find(artefactId);
        if (it != artefactHandlers.end()) {
            it->second(player);
        }
    }
}
