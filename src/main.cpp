#include <endstone/plugin/plugin.h>
#include <endstone/server.h>

class RSNHybridPlugin : public endstone::Plugin {
public:
    void onLoad() override {
        getLogger().info("RSNHybridPlugin is loading...");
    }

    void onEnable() override {
        getLogger().info("RSNHybridPlugin has been enabled! Hybrid logic initialized.");
    }

    void onDisable() override {
        getLogger().info("RSNHybridPlugin disabled.");
    }
};

ENDSTONE_PLUGIN("rsnhybridplugin", "1.0.0", RSNHybridPlugin)
{
    description = "Hybrid Server Plugin for Dungeons and More Ores and Tools";
}
