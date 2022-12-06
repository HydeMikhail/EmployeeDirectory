#pragma once

#include "nlohmann/json.hpp"
#include "Profile.h"
#include "Helpers.h"
#include <vector>
#include <map>
#include <fstream>
#include <iostream>

using Json = nlohmann::json;

class Database{

public:
    // Constructors
    Database();

    // Methods
    void LoadFromFile();
    void SaveToFile();
    void LoadEmployeeIDs();
    void LoadAsMap();
    void Reload();
    void AddProfile(Profile Employee);
    Profile LoadProfile(std::string EmployeeID);
    std::string GenerateEmployeeID();

    // Getters
    Json get_DBBase(){return m_DBBase;}
    std::map<std::string, Profile> get_DBMap(){return m_DBMap;}
    std::vector<std::string> get_EmployeeIDs(){return m_EmployeeIDs;}

private:
    // Memebers
    Json m_DBBase;
    std::map<std::string, Profile> m_DBMap;
    std::vector<std::string> m_EmployeeIDs;
};