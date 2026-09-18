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
        
        artefactHandlers["dungeons:artefactCooldown"] = [](endstone::Player& p) { ArtefactsGen::handle_artefactCooldown(p); };
        artefactHandlers["dungeons:blastFungus"] = [](endstone::Player& p) { ArtefactsGen::handle_blastFungus(p); };
        artefactHandlers["dungeons:buzzyNest"] = [](endstone::Player& p) { ArtefactsGen::handle_buzzyNest(p); };
        artefactHandlers["dungeons:corruptedBeacon"] = [](endstone::Player& p) { ArtefactsGen::handle_corruptedBeacon(p); };
        artefactHandlers["dungeons:corruptedPumpkin"] = [](endstone::Player& p) { ArtefactsGen::handle_corruptedPumpkin(p); };
        artefactHandlers["dungeons:corruptedSeeds"] = [](endstone::Player& p) { ArtefactsGen::handle_corruptedSeeds(p); };
        artefactHandlers["dungeons:deathCap"] = [](endstone::Player& p) { ArtefactsGen::handle_deathCap(p); };
        artefactHandlers["dungeons:enchantersTome"] = [](endstone::Player& p) { ArtefactsGen::handle_enchantersTome(p); };
        artefactHandlers["dungeons:enchantedGrass"] = [](endstone::Player& p) { ArtefactsGen::handle_enchantedGrass(p); };
        artefactHandlers["dungeons:eyeGuardian"] = [](endstone::Player& p) { ArtefactsGen::handle_eyeGuardian(p); };
        artefactHandlers["dungeons:ghostCloak"] = [](endstone::Player& p) { ArtefactsGen::handle_ghostCloak(p); };
        artefactHandlers["dungeons:golemKit"] = [](endstone::Player& p) { ArtefactsGen::handle_golemKit(p); };
        artefactHandlers["dungeons:gongWeakening"] = [](endstone::Player& p) { ArtefactsGen::handle_gongWeakening(p); };
        artefactHandlers["dungeons:harvester"] = [](endstone::Player& p) { ArtefactsGen::handle_harvester(p); };
        artefactHandlers["dungeons:iceWand"] = [](endstone::Player& p) { ArtefactsGen::handle_iceWand(p); };
        artefactHandlers["dungeons:ironHide"] = [](endstone::Player& p) { ArtefactsGen::handle_ironHide(p); };
        artefactHandlers["dungeons:lightFeather"] = [](endstone::Player& p) { ArtefactsGen::handle_lightFeather(p); };
        artefactHandlers["dungeons:lightningRod"] = [](endstone::Player& p) { ArtefactsGen::handle_lightningRod(p); };
        artefactHandlers["dungeons:powershaker"] = [](endstone::Player& p) { ArtefactsGen::handle_powershaker(p); };
        artefactHandlers["dungeons:satchelElements"] = [](endstone::Player& p) { ArtefactsGen::handle_satchelElements(p); };
        artefactHandlers["dungeons:satchelElixirs"] = [](endstone::Player& p) { ArtefactsGen::handle_satchelElixirs(p); };
        artefactHandlers["dungeons:satchelSnacks"] = [](endstone::Player& p) { ArtefactsGen::handle_satchelSnacks(p); };
        artefactHandlers["dungeons:scatterMines"] = [](endstone::Player& p) { ArtefactsGen::handle_scatterMines(p); };
        artefactHandlers["dungeons:shadowShifter"] = [](endstone::Player& p) { ArtefactsGen::handle_shadowShifter(p); };
        artefactHandlers["dungeons:shockPowder"] = [](endstone::Player& p) { ArtefactsGen::handle_shockPowder(p); };
        artefactHandlers["dungeons:soulHealer"] = [](endstone::Player& p) { ArtefactsGen::handle_soulHealer(p); };
        artefactHandlers["dungeons:soulLantern"] = [](endstone::Player& p) { ArtefactsGen::handle_soulLantern(p); };
        artefactHandlers["dungeons:spinblade"] = [](endstone::Player& p) { ArtefactsGen::handle_spinblade(p); };
        artefactHandlers["dungeons:swiftnessBoot"] = [](endstone::Player& p) { ArtefactsGen::handle_swiftnessBoot(p); };
        artefactHandlers["dungeons:totemCasting"] = [](endstone::Player& p) { ArtefactsGen::handle_totemCasting(p); };
        artefactHandlers["dungeons:totemShielding"] = [](endstone::Player& p) { ArtefactsGen::handle_totemShielding(p); };
        artefactHandlers["dungeons:totemRegeneration"] = [](endstone::Player& p) { ArtefactsGen::handle_totemRegeneration(p); };
        artefactHandlers["dungeons:updraftTome"] = [](endstone::Player& p) { ArtefactsGen::handle_updraftTome(p); };
        artefactHandlers["dungeons:vexingChant"] = [](endstone::Player& p) { ArtefactsGen::handle_vexingChant(p); };
        artefactHandlers["dungeons:windHorn"] = [](endstone::Player& p) { ArtefactsGen::handle_windHorn(p); };
        artefactHandlers["dungeons:tomeDuplication"] = [](endstone::Player& p) { ArtefactsGen::handle_tomeDuplication(p); };
        artefactHandlers["dungeons:loveMedallion"] = [](endstone::Player& p) { ArtefactsGen::handle_loveMedallion(p); };
        artefactHandlers["dungeons:totemSoulProtection"] = [](endstone::Player& p) { ArtefactsGen::handle_totemSoulProtection(p); };
        artefactHandlers["dungeons:tastyBone"] = [](endstone::Player& p) { ArtefactsGen::handle_tastyBone(p); };
        artefactHandlers["dungeons:wonderfulWheat"] = [](endstone::Player& p) { ArtefactsGen::handle_wonderfulWheat(p); };
    }

    void handleArtefactUse(endstone::Player& player, const std::string& artefactId) {
        initArtefactMap();
        auto it = artefactHandlers.find(artefactId);
        if (it != artefactHandlers.end()) {
            it->second(player);
        }
    }
}
