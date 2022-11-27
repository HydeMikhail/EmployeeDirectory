#include "Database.h"
#include "Profile.h"
#include <iostream>

int main(){
    Database DB;

    DB.loadProfiles();

    for (int i = 0; i < DB.m_Employees.size(); i++){
        std::cout << DB.m_Employees[i].m_Compensation.Options << std::endl;
    }
}