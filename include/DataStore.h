#pragma once
#include <string>
#include <nlohmann/json.hpp>
#include <endstone/plugin/plugin.h>

class DataStore {
private:
    std::string dataFolder;
    nlohmann::json configJson;
    nlohmann::json macrosJson;

    void load(const std::string& filename, nlohmann::json& outJson);
    void save(const std::string& filename, const nlohmann::json& inJson);

public:
    void init(const std::string& folder);

    nlohmann::json& getConfig();
    void saveConfig();

    nlohmann::json& getMacros();
    void saveMacros();
};

// Global instance getter
DataStore& getDataStore();
