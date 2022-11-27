#include "Database.h"
#include "Profile.h"
#include <iostream>

int main(){
    Database DB;

    DB.loadProfiles();
    DB.printDB();
}