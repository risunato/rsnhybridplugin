#include "generated/MoreOresGen.h"
#include <string>

namespace MoreOresGen {
    void handle_drill(endstone::PlayerInteractEvent& event) {
        auto& p = event.getPlayer();
        auto& server = p.getServer();
        if (event.hasBlock()) {
            auto* block = event.getBlock();
            int x = block->getX();
            int y = block->getY();
            int z = block->getZ();
            
            // Execute as player to inherit their dimension, but fill using absolute coordinates of the clicked block
            std::string fillCmd = "execute as \"" + p.getName() + "\" at @s run fill " + 
                                  std::to_string(x - 1) + " " + std::to_string(y - 1) + " " + std::to_string(z - 1) + " " + 
                                  std::to_string(x + 1) + " " + std::to_string(y + 1) + " " + std::to_string(z + 1) + " air [] destroy";
            server.dispatchCommand(server.getCommandSender(), fillCmd);
            
            // Play a digging sound instead of anvil
            server.dispatchCommand(server.getCommandSender(), "execute as \"" + p.getName() + "\" at @s run playsound dig.stone @a ~ ~ ~ 1.0 1.0");
        }
    }

    void handle_magnet(endstone::PlayerInteractEvent& event) {
        auto& p = event.getPlayer();
        auto& server = p.getServer();
        server.dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run tp @e[type=item,r=5] @s");
        server.dispatchCommand(server.getCommandSender(), "execute as \"" + p.getName() + "\" at @s run playsound random.orb @a ~ ~ ~ 1.0 1.0");
    }

    void handle_emerald_sword(endstone::PlayerInteractEvent& event) {
        // TODO: Port logic for emerald_sword
    }

    void handle_ruby_pickaxe(endstone::PlayerInteractEvent& event) {
        // TODO: Port logic for ruby_pickaxe
    }

    void init() {}
}
