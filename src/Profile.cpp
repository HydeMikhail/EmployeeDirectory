#include "Profile.h"

Profile::Profile(){}
Profile::Profile(std::string FirstName,
                 std::string LastName,
                 std::string Title,
                 EmployeeTeam Team,
                 EmployeeLocation Location,
                 EmployeeType Type,
                 EmployeeCompensation Compensation,
                 EmployeeStartDate StartDate,
                 EmployeeVerticalSegment VerticalSegment,
                 EmployeeAccount Account){
    
    m_FirstName = FirstName;
    m_LastName = LastName;
    m_Email = Profile::GenerateEmail();
    m_Title = Title;

    m_Team = Team;
    m_Location = Location;
    m_Type = Type;    
    m_Compensation = Compensation;
    m_StartDate = StartDate;
    m_VerticalSegment = VerticalSegment;
    m_Account = Account;
}

std::string Profile::GenerateEmail(){
    std::string domain = "@company.com";
    std::string email = m_FirstName + '.' + m_LastName + domain;
    std::transform(email.begin(), email.end(), email.begin(), 
                   [](unsigned char c){ return std::tolower(c);}
                  );
    return email;
}