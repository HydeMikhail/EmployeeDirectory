#pragma once

#include <QtWidgets/QApplication>

#include "ui_loginwindow.h"
#include "ui_userwindow.h"
#include "LoginWindow.h"
#include "UserWindow.h"
#include "Profile.h"
#include "Database.h"

class Manager : public QApplication
{
    Q_OBJECT

public:

    Manager(int argc, char *argv[]);
    ~Manager();

    void Run();

    LoginWindow m_LoginWindow;
    UserWindow m_UserWindow;

    Database m_Database;
    Profile m_SelectedProfile;

// Login Signals
signals:
    void user_Login();

// Login Slots
private slots:
    void on_LoginClicked();
    void on_CancelClicked();
    void on_UserLogin();

// App Signals
signals:
    void logout();

// App Slots
private slots:
    void on_LogoutClicked();
};
