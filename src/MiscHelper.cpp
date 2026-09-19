#include "MiscHelper.h"
#include <endstone/form/action_form.h>
#include <endstone/server.h>
#include <endstone/command/command_sender.h>
#include <endstone/command/console_command_sender.h>
#include <unordered_map>
#include <vector>
#include <string>

namespace MiscHelper {

    struct ItemData {
        std::string id;
        std::string type;
        bool seasonal;
    };

    std::vector<ItemData> weaponData;
    std::vector<ItemData> bowData;
    std::vector<ItemData> armourData;
    std::vector<ItemData> artefactData;

    void initItemData() {
        if (!weaponData.empty()) return;
    }
    
    // Forward declarations
    void showTypesPage(endstone::Player& player, const std::string& type);
    void showCategory(endstone::Player& player, const std::string& category, const std::string& type);
    
    void showItemPage(endstone::Player& player, const std::string& itemId) {
        endstone::ActionForm form;
        form.setTitle("dungeons.boh.title." + itemId);
        form.setContent("dungeons.boh.body." + itemId);
        form.addButton("dungeons.boh.close");
        form.setOnSubmit([](endstone::Player* p, int sel) {});
        player.sendForm(form);
    }
    
    void showCategory(endstone::Player& player, const std::string& category, const std::string& type) {
        endstone::ActionForm form;
        form.setTitle("dungeons.boh.category." + category);
        form.setContent("dungeons.boh.category_body." + category);
        
        std::vector<std::string> buttons;
        
        const std::vector<ItemData>* searchThrough = &weaponData;
        if (type == "melee") searchThrough = &weaponData;
        else if (type == "ranged") searchThrough = &bowData;
        else if (type == "armour") searchThrough = &armourData;
        else if (type == "artefact") searchThrough = &artefactData;
        
        for (const auto& item : *searchThrough) {
            if (item.type == category) {
                form.addButton(item.id, "textures/ui/form/" + type + "/" + item.id);
                buttons.push_back(item.id);
            }
        }
        
        form.setOnSubmit([buttons](endstone::Player* p, int selection) {
            if (p && selection >= 0 && selection < buttons.size()) {
                showItemPage(*p, buttons[selection]);
            }
        });
        player.sendForm(form);
    }

    void showTypesPage(endstone::Player& player, const std::string& type) {
        endstone::ActionForm form;
        form.setTitle("dungeons.boh." + type + ".title");
        form.setContent("dungeons.boh." + type + ".body");
        
        std::vector<std::string> buttons;
        std::unordered_map<std::string, bool> added;
        
        const std::vector<ItemData>* searchThrough = &weaponData;
        if (type == "melee") searchThrough = &weaponData;
        else if (type == "ranged") searchThrough = &bowData;
        else if (type == "armour") searchThrough = &armourData;
        else if (type == "artefact") searchThrough = &artefactData;
        
        for (const auto& item : *searchThrough) {
            if (!added[item.type]) {
                form.addButton("dungeons.boh.category." + item.type, "textures/ui/form/" + type + "/" + item.type);
                buttons.push_back(item.type);
                added[item.type] = true;
            }
        }
        
        form.setOnSubmit([buttons, type](endstone::Player* p, int selection) {
            if (p && selection >= 0 && selection < buttons.size()) {
                showCategory(*p, buttons[selection], type);
            }
        });
        player.sendForm(form);
    }

    void handleCodex(endstone::Player& player) {
        initItemData();
        endstone::ActionForm form;
        form.setTitle("dungeons.boh.root.title");
        form.setContent("dungeons.boh.root.body");
        form.addButton("Weapons", "textures/ui/form/melee");
        form.addButton("Ranged", "textures/ui/form/ranged");
        form.addButton("Armour", "textures/ui/form/armor");
        form.addButton("Artefacts", "textures/ui/form/artefact");
        
        form.setOnSubmit([](endstone::Player* p, int selection) {
            if (!p) return;
            if (selection == 0) showTypesPage(*p, "melee");
            else if (selection == 1) showTypesPage(*p, "ranged");
            else if (selection == 2) showTypesPage(*p, "armour");
            else if (selection == 3) showTypesPage(*p, "artefact");
        });
        player.sendForm(form);
    }
    
    void handleSparklerLoot(endstone::Player& player, endstone::Actor& chest) {
        auto& server = player.getServer();
        auto& sender = server.getCommandSender();
        (void)server.dispatchCommand(sender, "particle dungeons:firework_arrow " + std::to_string(chest.getLocation().getX()) + " " + std::to_string(chest.getLocation().getY()) + " " + std::to_string(chest.getLocation().getZ()));
        (void)server.dispatchCommand(sender, "playsound firework.launch @a " + std::to_string(chest.getLocation().getX()) + " " + std::to_string(chest.getLocation().getY()) + " " + std::to_string(chest.getLocation().getZ()));
        (void)server.dispatchCommand(sender, "loot spawn " + std::to_string(chest.getLocation().getX()) + " " + std::to_string(chest.getLocation().getY()+1) + " " + std::to_string(chest.getLocation().getZ()) + " loot \"dungeons:sparkler\"");
    }
}
