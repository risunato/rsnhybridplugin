#include "generated/MoreOresGen.h"
#include "HybridEngine.h"
#include <string>

namespace MoreOresGen {
    void handle_drill(endstone::PlayerInteractEvent& event) {
        auto& p = event.getPlayer();
        if (!p.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);
        
        if (event.hasBlock()) {
            auto* block = event.getBlock();
            int x = block->getX();
            int y = block->getY();
            int z = block->getZ();
            
            std::string fillCmd = "fill " + 
                                  std::to_string(x - 1) + " " + std::to_string(y - 1) + " " + std::to_string(z - 1) + " " + 
                                  std::to_string(x + 1) + " " + std::to_string(y + 1) + " " + std::to_string(z + 1) + " air [] destroy";
            (void)p.performCommand(fillCmd);
            (void)p.performCommand("playsound dig.stone @a ~ ~ ~ 1.0 1.0");
        }
    }

    void handle_magnet(endstone::PlayerInteractEvent& event) {
        auto& p = event.getPlayer();
        if (!p.isValid()) return;
        std::lock_guard<std::mutex> lock(HybridEngine::engineMutex);
        
        (void)p.performCommand("tp @e[type=item,r=5] @s");
        (void)p.performCommand("playsound random.orb @a ~ ~ ~ 1.0 1.0");
    }

    void handle_emerald_sword(endstone::PlayerInteractEvent& event) {
        // TODO: Port logic for emerald_sword
    }

    void handle_ruby_pickaxe(endstone::PlayerInteractEvent& event) {
        // TODO: Port logic for ruby_pickaxe
    }

    void init() {}
}
