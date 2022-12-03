#include "Database.h"

using Json = nlohmann::json;

Database::Database(){
    Database::LoadFromFile();
    Database::LoadEmployeeIDs();
    Database::LoadAsMap();
}

void Database::LoadFromFile(){
    std::ifstream path("data/json/employees.json");
    m_DBBase = Json::parse(path);
}

void Database::SaveToFile(){
    std::ofstream path("data/json/employees.json");
    path << m_DBBase;
}

void Database::LoadEmployeeIDs(){
    for (Json::iterator item = m_DBBase.begin(); item != m_DBBase.end(); item++) {
        std::string EmployeeID = item.key();
        m_EmployeeIDs.push_back(EmployeeID);
    }
}

void Database::LoadAsMap(){
    for (Json::iterator item = m_DBBase.begin(); item != m_DBBase.end(); item++){
        m_DBMap[item.key()] = LoadProfile(item.key());
    }
}

void Database::Reload(){
    Database::LoadEmployeeIDs();
    Database::LoadAsMap();
}

Profile Database::LoadProfile(std::string EmployeeID){

    Json InfoMap = m_DBBase[EmployeeID];
    Profile employee;

    Json compensation = InfoMap["Compensation"];
    Json startDate = InfoMap["StartDate"];
    Json account = InfoMap["Account"];
    
    employee.m_FirstName = InfoMap["FirstName"];
    employee.m_LastName = InfoMap["LastName"];
    employee.m_Email = InfoMap["Email"];
    employee.m_Title = InfoMap["Title"];
    employee.m_Team = InfoMap["Team"];
    employee.m_Location = InfoMap["Location"];
    employee.m_EmployeeType = InfoMap["EmployeeType"];
    employee.m_Compensation = {compensation["Salary"],
                               compensation["Bonus"],
                               compensation["Options"]};
    employee.m_StartDate = {startDate["Year"],
                            startDate["Month"],
                            startDate["Day"]};
    employee.m_Account = {account["Password"],
                          account["Admin"]};
    employee.m_VerticalSegment = InfoMap["VerticalSegment"];

    employee.m_Reports = InfoMap["Reports"];

    return employee;
}

void Database::AddProfile(Profile Employee){

    Json EmployeeInfo;
    Json Compensation;
    Compensation["Salary"] = Employee.m_Compensation.Salary;
    Compensation["Bonus"] = Employee.m_Compensation.Bonus;
    Compensation["Options"] = Employee.m_Compensation.Options;
    Json StartDate;
    StartDate["Year"] = Employee.m_StartDate.Year;
    StartDate["Month"] = Employee.m_StartDate.Month;
    StartDate["Day"] = Employee.m_StartDate.Day;
    Json Account;
    Account["Password"] = Employee.m_Account.Password;
    Account["Admin"] = Employee.m_Account.Admin;

    EmployeeInfo["FirstName"] = Employee.m_FirstName;
    EmployeeInfo["LastName"] = Employee.m_LastName;
    EmployeeInfo["Email"] = Employee.m_Email;
    EmployeeInfo["Title"] = Employee.m_Title;
    EmployeeInfo["Team"] = Employee.m_Team;
    EmployeeInfo["Location"] = Employee.m_Location;
    EmployeeInfo["EmployeeType"] = Employee.m_EmployeeType;
    EmployeeInfo["Compensation"] = Compensation;
    EmployeeInfo["StartDate"] = StartDate;
    EmployeeInfo["VerticalSegment"] = Employee.m_VerticalSegment;
    EmployeeInfo["Account"] = Account;
    EmployeeInfo["Reports"] = Employee.m_Reports;

    std::string EmployeeID = GenerateEmployeeID();

    m_DBBase[EmployeeID] = EmployeeInfo;
}

std::string Database::GenerateEmployeeID(){
    std::string EmployeeID = Helpers::RandomString();
    while (std::count(m_EmployeeIDs.begin(), m_EmployeeIDs.end(), EmployeeID)){
        EmployeeID = Helpers::RandomString();
    }

    return EmployeeID;
}
