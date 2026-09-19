#include "DataStore.h"
#include <fstream>
#include <filesystem>
#include <iostream>

DataStore instance;

DataStore& getDataStore() {
    return instance;
}

void DataStore::init(const std::string& folder) {
    dataFolder = folder;
    if (!std::filesystem::exists(dataFolder)) {
        std::filesystem::create_directories(dataFolder);
    }
    load("config.json", configJson);
    load("macros.json", macrosJson);
    
    // Initialize default if empty
    if (!macrosJson.is_array()) macrosJson = nlohmann::json::array();
    if (!configJson.is_object()) configJson = nlohmann::json::object();
}

void DataStore::load(const std::string& filename, nlohmann::json& outJson) {
    std::string path = dataFolder + "/" + filename;
    if (std::filesystem::exists(path)) {
        std::ifstream file(path);
        if (file.is_open()) {
            try {
                file >> outJson;
            } catch (const std::exception& e) {
                std::cerr << "[RSNHybridPlugin] Error parsing " << filename << ": " << e.what() << std::endl;
                outJson = nlohmann::json::object();
            }
        }
    } else {
        outJson = nlohmann::json::object();
    }
}

void DataStore::save(const std::string& filename, const nlohmann::json& inJson) {
    std::string path = dataFolder + "/" + filename;
    std::ofstream file(path);
    if (file.is_open()) {
        file << inJson.dump(4);
    }
}

nlohmann::json& DataStore::getConfig() { return configJson; }
void DataStore::saveConfig() { save("config.json", configJson); }

nlohmann::json& DataStore::getMacros() { return macrosJson; }
void DataStore::saveMacros() { save("macros.json", macrosJson); }
