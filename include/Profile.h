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
        INTERN,
        ADMIN_TYPE
    };

    enum EmployeeTeam{
        SYSTEMS_INTEGRATION,
        TEST_ENGINEERING,
        MECHANCIAL_ENGINEERING,
        ELECTRICAL_ENGINEERING,
        EMBEDDED,
        ADMIN_TEAM
    };

    enum EmployeeLocation{
        BOSTON,
        NEW_YORK,
        SAN_FRANCISCO,
        ADMIN_LOCATION
    };

    enum EmployeeVerticalSegment{
        CORE,
        ADMIN
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
            EmployeeAccount Account);

    // Getters
    std::string get_FirstName(){return m_FirstName;}
    std::string get_LastName(){return m_LastName;}
    std::string get_Email(){return m_Email;}
    std::string get_Title(){return m_Title;}

    EmployeeTeam get_Team(){return m_Team;}
    EmployeeLocation get_Location(){return m_Location;}
    EmployeeType get_Type(){return m_Type;}
    EmployeeCompensation get_Compensation(){return m_Compensation;}
    EmployeeStartDate get_StartDate(){return m_StartDate;}
    EmployeeVerticalSegment get_VerticalSegment(){return m_VerticalSegment;}
    EmployeeAccount get_Account(){return m_Account;}

    // Setters
    void set_FirstName(std::string firstName){m_FirstName = firstName;}
    void set_LastName(std::string lastName){m_LastName = lastName;}
    void set_Email(std::string email){m_Email = email;}
    void set_Title(std::string title){m_Title = title;}
    
    void set_Team(EmployeeTeam team){m_Team = team;}
    void set_Location(EmployeeLocation location){m_Location = location;}
    void set_Type(EmployeeType type){m_Type = type;}
    void set_Compensation(EmployeeCompensation compensation){m_Compensation = compensation;}
    void set_StartDate(EmployeeStartDate startDate){m_StartDate = startDate;}
    void set_VerticalSegment(EmployeeVerticalSegment verticalSegment){m_VerticalSegment = verticalSegment;}
    void set_Account(EmployeeAccount account){m_Account = account;}

private:
    // Methods
    std::string GenerateEmail();

    // Members
    std::string m_FirstName;
    std::string m_LastName;
    std::string m_Email;
    std::string m_Title;

    EmployeeTeam m_Team;
    EmployeeLocation m_Location;
    EmployeeType m_Type;
    EmployeeCompensation m_Compensation;
    EmployeeStartDate m_StartDate;
    EmployeeVerticalSegment m_VerticalSegment;
    EmployeeAccount m_Account;
};