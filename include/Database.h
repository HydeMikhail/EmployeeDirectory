#pragma once

#include "nlohmann/json.hpp"
#include "Profile.h"
#include <vector>

using Json = nlohmann::json;

class Database{

    public:
        Database();

        void loadProfiles();
        void PrintDB();

        Json m_DB;
        std::vector<Profile> m_Employees;
};