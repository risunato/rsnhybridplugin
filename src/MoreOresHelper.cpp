#include "MoreOresHelper.h"
#include "generated/MoreOresGen.h"
#include <endstone/server.h>

namespace MoreOresHelper {
    void onBlockBreak(endstone::BlockBreakEvent& event) {
        handleOreGeneration(event);
    }
    
    void onPlayerInteract(endstone::PlayerInteractEvent& event) {
        // Mock Tool Ability
        MoreOresGen::handle_drill(event.getPlayer());
    }
    
    void applyDrillEffect(endstone::Player& player) {}
    void applyMagnetEffect(endstone::Player& player) {}
    void handleOreGeneration(endstone::BlockBreakEvent& event) {}
}
