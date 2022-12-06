#pragma once

#include <QtWidgets/QMainWindow>
#include "Profile.h"

namespace Ui {
class UserEdit;
}

class UserEdit : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserEdit(QWidget *parent = nullptr);
    ~UserEdit();

    Ui::UserEdit *ui;

    std::map<QString, Profile::EmployeeType> m_TypeMap ={
        {"Full Time", Profile::EmployeeType::FULL_TIME},
        {"Hourly", Profile::EmployeeType::HOURLY},
        {"Intern", Profile::EmployeeType::INTERN}
    };

    std::map<QString, Profile::EmployeeTeam> m_TeamMap = {
        {"Systems Integration", Profile::EmployeeTeam::SYSTEMS_INTEGRATION},
        {"Test Engineering", Profile::EmployeeTeam::TEST_ENGINEERING},
        {"Mechanical Engineering", Profile::EmployeeTeam::MECHANCIAL_ENGINEERING},
        {"Electrical Engineering", Profile::EmployeeTeam::ELECTRICAL_ENGINEERING},
        {"Embedded", Profile::EmployeeTeam::EMBEDDED}
    };

    std::map<QString, Profile::EmployeeLocation> m_LocationMap = {
        {"Boston", Profile::EmployeeLocation::BOSTON},
        {"New York", Profile::EmployeeLocation::NEW_YORK},
        {"San Francisco", Profile::EmployeeLocation::SAN_FRANCISCO}
    };

    std::map<QString, Profile::EmployeeVerticalSegment> m_SegmentMap = {
        {"Core", Profile::EmployeeVerticalSegment::CORE}
    };
};