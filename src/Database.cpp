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
    
    employee.set_FirstName(InfoMap["FirstName"]);
    employee.set_LastName(InfoMap["LastName"]);
    employee.set_Email(InfoMap["Email"]);
    employee.set_Title(InfoMap["Title"]);
    employee.set_Team(InfoMap["Team"]);
    employee.set_Location(InfoMap["Location"]);
    employee.set_Type(InfoMap["EmployeeType"]);

    Profile::EmployeeCompensation comp = {compensation["Salary"],
                                          compensation["Bonus"],
                                          compensation["Options"]};
    Profile::EmployeeStartDate date = {startDate["Year"],
                                       startDate["Month"],
                                       startDate["Day"]};
    Profile::EmployeeAccount acc = {account["Password"],
                                    account["Admin"]};

    employee.set_Compensation(comp);
    employee.set_StartDate(date);
    employee.set_Account(acc);
    employee.set_VerticalSegment(InfoMap["VerticalSegment"]);

    return employee;
}

void Database::AddProfile(Profile Employee){

    Json EmployeeInfo;
    Json Compensation;
    Json StartDate;
    Json Account;

    Profile::EmployeeCompensation comp = Employee.get_Compensation();
    Compensation["Salary"] = comp.Salary;
    Compensation["Bonus"] = comp.Bonus;
    Compensation["Options"] = comp.Options;
    
    Profile::EmployeeStartDate startDate = Employee.get_StartDate();
    StartDate["Year"] = startDate.Year;
    StartDate["Month"] = startDate.Month;
    StartDate["Day"] = startDate.Day;
    
    Profile::EmployeeAccount account = Employee.get_Account();
    Account["Password"] = account.Password;
    Account["Admin"] = account.Admin;

    EmployeeInfo["FirstName"] = Employee.get_FirstName();
    EmployeeInfo["LastName"] = Employee.get_LastName();
    EmployeeInfo["Email"] = Employee.get_Email();
    EmployeeInfo["Title"] = Employee.get_Title();
    EmployeeInfo["Team"] = Employee.get_Team();
    EmployeeInfo["Location"] = Employee.get_Location();
    EmployeeInfo["EmployeeType"] = Employee.get_Type();
    EmployeeInfo["Compensation"] = Compensation;
    EmployeeInfo["StartDate"] = StartDate;
    EmployeeInfo["VerticalSegment"] = Employee.get_VerticalSegment();
    EmployeeInfo["Account"] = Account;

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
