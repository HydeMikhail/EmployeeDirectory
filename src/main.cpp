#include "Database.h"
#include "Profile.h"
#include <iostream>

int main(){
    Database DB;
    DB.LoadAsMap();

    for (auto const& x : DB.m_DBMap){
        std::cout << x.second.m_Email << std::endl;
    }
}