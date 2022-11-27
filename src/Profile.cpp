#include "Profile.h"
#include "nlohmann/json.hpp"
#include <iostream>

using Json = nlohmann::json;

Profile::Profile(){}

void Profile::loadFromMap(std::string EmployeeID, Json InfoMap){

    Json compensation = InfoMap["Compensation"];
    Json startDate = InfoMap["StartDate"];
    
    m_EmployeeID = EmployeeID;
    m_FirstName = InfoMap["FirstName"];
    m_LastName = InfoMap["LastName"];
    m_Email = InfoMap["Email"];
    m_Title = InfoMap["Title"];

    m_Team = InfoMap["Team"];
    m_Location = InfoMap["Location"];
    m_EmployeeType = InfoMap["EmployeeType"];    
    m_Compensation = {compensation["Salary"],
                      compensation["Bonus"],
                      compensation["Options"]};
    m_StartDate = {startDate["Year"],
                   startDate["Month"],
                   startDate["Day"]};
    m_VerticalSegment = InfoMap["VerticalSegment"];

    m_Reports = InfoMap["Reports"];
}
