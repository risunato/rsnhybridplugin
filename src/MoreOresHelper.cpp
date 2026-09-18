#include "MoreOresHelper.h"
#include "generated/MoreOresGen.h"
#include <endstone/server.h>

namespace MoreOresHelper {
    void onBlockBreak(endstone::BlockBreakEvent& event) {
        handleOreGeneration(event);
    }
    
    void onPlayerInteract(endstone::PlayerInteractEvent& event) {
        auto& player = event.getPlayer();
        auto item = player.getInventory().getItemInMainHand();
        if (!item) return;
        
        auto itemId = item->getType().getId();
        if (itemId == "nps_mot:drill") {
            MoreOresGen::handle_drill(player);
        } else if (itemId == "nps_mot:magnet") {
            MoreOresGen::handle_magnet(player);
        } else if (itemId == "nps_mot:emerald_sword") {
            MoreOresGen::handle_emerald_sword(player);
        } else if (itemId == "nps_mot:ruby_pickaxe") {
            MoreOresGen::handle_ruby_pickaxe(player);
        }
    }
    
    void applyDrillEffect(endstone::Player& player) {}
    void applyMagnetEffect(endstone::Player& player) {}
    void handleOreGeneration(endstone::BlockBreakEvent& event) {}
}
