#include "Manager.h"

Manager::Manager(int argc, char *argv[]):QApplication(argc, argv){
    // Login Window Connections
    connect(m_LoginWindow.ui->LoginButton, SIGNAL(released()), this,
                SLOT(on_LoginClicked()));
    connect(m_LoginWindow.ui->CancelButton, SIGNAL(released()), this,
                SLOT(on_CancelClicked()));
    connect(this, SIGNAL(user_Login()), this,
                SLOT(on_UserLogin()));
    // User Window Connections
    connect(m_UserWindow.ui->LogOutButton, SIGNAL(released()), this,
                SLOT(on_LogoutClicked()));
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

    for (auto const& x : m_Database.m_DBMap){
        m_SelectedProfile = x.second;
        if (m_SelectedProfile.m_Email == UserEmail.toStdString()){
            if (m_SelectedProfile.m_Account.Password == UserPassword.toStdString()){
                emit user_Login();
                on_CancelClicked();
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

void Manager::on_CancelClicked(){
    m_LoginWindow.ui->MessageField->setText("");
    QString blank = "";

    m_LoginWindow.ui->EmailInput->setText(blank);
    m_LoginWindow.ui->PasswordInput->setText(blank);
}

void Manager::on_UserLogin(){
    m_UserWindow.Configure(m_SelectedProfile);
    m_UserWindow.show();
    m_LoginWindow.hide();
}

void Manager::on_LogoutClicked(){
    m_LoginWindow.show();
    m_UserWindow.hide();
}