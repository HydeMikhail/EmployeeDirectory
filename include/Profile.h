#pragma once

#include "nlohmann/json.hpp"
#include <string>

using Json = nlohmann::json;

class Profile{

    public:
        // Types
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

        enum EmployeeLocation{
            BOSTON,
            NEW_YORK,
            SAN_FRANCISCO
        };

        enum EmployeeVerticalSegment{
            CORE
        };

        struct EmployeeCompensation {
            uint64_t Salary;
            uint64_t Bonus;
            uint64_t Options;
        };

        struct EmployeeStartDate {
            uint64_t Year;
            uint64_t Month;
            uint64_t Day;
        };

        struct EmployeeAccount {
            std::string Password;
            bool Admin;
        };

        // Constructors
        Profile();
        Profile(std::string FirstName,
                std::string LastName,
                std::string Title,
                EmployeeTeam Team,
                EmployeeLocation Location,
                EmployeeType Type,
                EmployeeCompensation Compensation,
                EmployeeStartDate StartDate,
                EmployeeVerticalSegment VerticalSegment,
                EmployeeAccount Account,
                std::vector<std::string> Reports);

        // Members
        std::string m_FirstName;
        std::string m_LastName;
        std::string m_Email;
        std::string m_Title;

        EmployeeTeam m_Team;
        EmployeeLocation m_Location;
        EmployeeType m_EmployeeType;
        EmployeeCompensation m_Compensation;
        EmployeeStartDate m_StartDate;
        EmployeeVerticalSegment m_VerticalSegment;
        EmployeeAccount m_Account;

        std::vector<std::string> m_Reports;

    private:
        // Methods
        std::string GenerateEmail();
};