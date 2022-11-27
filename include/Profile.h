#pragma once

#include "nlohmann/json.hpp"
#include <string>

using Json = nlohmann::json;

class Profile{

    public:
        enum EmployeeType{
            FULL_TIME,
            HOURLY,
            INTERN
        };

        enum EmployeeTeam{
            SYSTEMS_INTEGRATION,
            TEST_ENGINEERING,
            MECHANCIAL_ENGINEERING,
            ELECTRICAL_ENGINEERING,
            EMBEDDED
        };

        enum Location{
            SOMERVILLE,
            NORTH_CAROLINA,
            BUDAPEST
        };

        enum VerticalSegment{
            CORE,
            DENTAL
        };

        struct Compensation {
            uint64_t Salary;
            uint64_t Bonus;
            uint64_t Options;
        };

        struct StartDate {
            uint64_t Year;
            uint64_t Month;
            uint64_t Day;
        };

        struct Account {
            std::string Password;
            bool Admin;
        };

        Profile();
        void loadFromMap(std::string EmployeeID, Json InfoMap);

        std::string m_EmployeeID;
        std::string m_FirstName;
        std::string m_LastName;
        std::string m_Email;
        std::string m_Title;

        EmployeeTeam m_Team;
        Location m_Location;
        EmployeeType m_EmployeeType;
        Compensation m_Compensation;
        StartDate m_StartDate;
        VerticalSegment m_VerticalSegment;

        std::vector<std::string> m_Reports;
};