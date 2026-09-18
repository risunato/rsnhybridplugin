#include "generated/MoreOresGen.h"
#include <string>

namespace MoreOresGen {
    void handle_drill(endstone::Player& p) {

        auto& server = p.getServer();
        server.dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run playsound random.anvil_use @a ~ ~ ~ 1.0 1.5");
        // Trigger 3x3 breaking using commands
        server.dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run fill ^-1 ^-1 ^3 ^1 ^1 ^3 air 0 destroy");
        }

    void handle_magnet(endstone::Player& p) {

        auto& server = p.getServer();
        server.dispatchCommand(p, "execute as \"" + p.getName() + "\" at @s run tp @e[type=item,r=5] @s");
        }

    void handle_emerald_sword(endstone::Player& p) {
        // TODO: Port logic for emerald_sword
    }

    void handle_ruby_pickaxe(endstone::Player& p) {
        // TODO: Port logic for ruby_pickaxe
    }

    void init() {}
}
