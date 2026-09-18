#pragma once
#include <endstone/player.h>
#include <endstone/server.h>

namespace MoreOresGen {
    void init();
    void handle_drill(endstone::Player& p);
    void handle_magnet(endstone::Player& p);
    void handle_emerald_sword(endstone::Player& p);
    void handle_ruby_pickaxe(endstone::Player& p);
}
