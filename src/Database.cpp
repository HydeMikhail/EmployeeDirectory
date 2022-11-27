#include "nlohmann/json.hpp"
#include "Database.h"
#include <fstream>
#include <iostream>

using Json = nlohmann::json;

Database::Database(){
    std::ifstream path("data/employees.json");
    m_DB = Json::parse(path);
}

void Database::loadProfiles(){
    for (Json::iterator item = m_DB.begin(); item != m_DB.end(); item++) {
        std::string EmployeeID = item.key();
        Json EmployeeInfo = item.value();

        Profile employee;
        employee.loadFromMap(EmployeeID, EmployeeInfo);

        m_Employees.push_back(employee);
    }
}

void Database::PrintDB(){
    std::cout << m_DB << std::endl;
}