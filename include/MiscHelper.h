#pragma once
#include <endstone/player.h>
#include <endstone/actor/actor.h>

namespace MiscHelper {
    void handleCodex(endstone::Player& player);
    void handleSparklerLoot(endstone::Player& player, endstone::Actor& chest);
    void handleServerTool(endstone::Player& player);
    void handleSettingsTool(endstone::Player& player);
}
