#include "Manager.h"

Manager::Manager(){
    // Login Window Connections
    connect(m_LoginWindow.ui->LoginButton, SIGNAL(released()), this,
                SLOT(on_LoginClicked()));
    connect(m_LoginWindow.ui->CancelButton, SIGNAL(released()), this,
                SLOT(on_LoginCancelClicked()));
    connect(this, SIGNAL(user_Login()), this,
                SLOT(on_UserLogin()));
    
    // User Window Connections
    connect(m_UserWindow.ui->LogOutButton, SIGNAL(released()), this,
                SLOT(on_LogoutClicked()));
    connect(m_UserWindow.ui->AddButton, SIGNAL(released()), this,
                SLOT(on_AddClicked()));
    connect(m_UserWindow.ui->EditButton, SIGNAL(released()), this,
                SLOT(on_EditClicked()));
    connect(m_UserWindow.ui->DeleteButton, SIGNAL(released()), this,
                SLOT(on_DeleteClicked()));

    // User Edit Connections
    connect(m_UserEdit.ui->ApplyButton, SIGNAL(released()), this,
                SLOT(on_ApplyClicked()));
    connect(m_UserEdit.ui->CancelButton, SIGNAL(released()), this,
                SLOT(on_EditCancelClicked()));
}

Manager::~Manager(){

}

void Manager::Run(){
    m_LoginWindow.show();
}

void Manager::on_LoginClicked(){

    m_LoginWindow.ui->MessageField->setText("");

    QString UserEmail = m_LoginWindow.ui->EmailInput->text();
    QString UserPassword = m_LoginWindow.ui->PasswordInput->text();

    if (UserEmail == ""){
        m_LoginWindow.ui->MessageField->setText("Email Field Empty");
        return;
    }
    if (UserPassword == ""){
        m_LoginWindow.ui->MessageField->setText("Password Field Empty");
        return;
    }

    for (auto const& x : m_Database.get_DBMap()){
        m_LoginProfile = x.second;
        if (m_LoginProfile.get_Email() == UserEmail.toStdString()){
            if (m_LoginProfile.get_Account().Password == UserPassword.toStdString()){
                emit user_Login();
                on_LoginCancelClicked();
                return;
            } else {
                m_LoginWindow.ui->MessageField->setText("Incorrect Password");
                return;
            }
        }
    }

    m_LoginWindow.ui->MessageField->setText("Could not find email account");
    return;
}

void Manager::on_LoginCancelClicked(){
    m_LoginWindow.ui->MessageField->setText("");
    QString blank = "";

    m_LoginWindow.ui->EmailInput->setText(blank);
    m_LoginWindow.ui->PasswordInput->setText(blank);
}

void Manager::on_UserLogin(){
    m_UserWindow.Configure(m_LoginProfile);
    m_UserWindow.show();
    m_LoginWindow.hide();
}

void Manager::on_LogoutClicked(){
    m_LoginWindow.show();
    m_UserWindow.hide();
}

void Manager::on_AddClicked(){
    m_UserEdit.show();
}

void Manager::on_EditClicked(){

}

void Manager::on_DeleteClicked(){

}

void Manager::on_ApplyClicked(){
    std::string FirstName = m_UserEdit.ui->FirstNameInput->text().toStdString();
    std::string LastName = m_UserEdit.ui->LastNameInput->text().toStdString();
    std::string Title = m_UserEdit.ui->TitleInput->text().toStdString();

    QString TeamKey = m_UserEdit.ui->TeamDropDown->currentText();
    Profile::EmployeeTeam Team = m_UserEdit.m_TeamMap[TeamKey];

    QString LocationKey = m_UserEdit.ui->LocationDropDown->currentText();
    Profile::EmployeeLocation Location = m_UserEdit.m_LocationMap[LocationKey];

    QString TypeKey = m_UserEdit.ui->TypeDropDown->currentText();
    Profile::EmployeeType Type = m_UserEdit.m_TypeMap[TypeKey];

    QString SegmentKey = m_UserEdit.ui->VerticalSegmentDropDown->currentText();
    Profile::EmployeeVerticalSegment VerticalSegment = m_UserEdit.m_SegmentMap[SegmentKey];

    uint64_t Salary = m_UserEdit.ui->SalaryInput->text().toUInt();
    uint64_t Bonus = m_UserEdit.ui->BonusInput->text().toUInt();
    uint64_t Options = m_UserEdit.ui->OptionsInput->text().toUInt();
    Profile::EmployeeCompensation Compensation = {Salary, Bonus, Options};

    uint64_t Year = m_UserEdit.ui->YearInput->text().toUInt();
    uint64_t Month = m_UserEdit.ui->MonthInput->text().toUInt();
    uint64_t Day = m_UserEdit.ui->DayInput->text().toUInt();
    Profile::EmployeeStartDate StartDate = {Year, Month, Day};

    std::string Password = m_UserEdit.ui->PasswordField->text().toStdString();
    bool Admin = m_UserEdit.ui->AdminCheckBox->isChecked();
    Profile::EmployeeAccount Account = {Password, Admin};

    Profile newProfile(FirstName, LastName, Title, Team,
                       Location, Type, Compensation, StartDate,
                       VerticalSegment, Account);
                
    m_Database.AddProfile(newProfile);
    m_Database.Reload();
    m_Database.SaveToFile();

    foreach(QLineEdit *widget, m_UserEdit.findChildren<QLineEdit*>()) {
        widget->clear();
    }

    foreach(QCheckBox *widget, m_UserEdit.findChildren<QCheckBox*>()) {
        widget->setChecked(false);
    }

    m_UserEdit.hide();
}

void Manager::on_EditCancelClicked(){
    foreach(QLineEdit *widget, m_UserEdit.findChildren<QLineEdit*>()) {
        widget->clear();
    }

    foreach(QCheckBox *widget, m_UserEdit.findChildren<QCheckBox*>()) {
        widget->setChecked(false);
    }
    
    m_UserEdit.hide();
}