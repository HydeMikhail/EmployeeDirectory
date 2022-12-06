#pragma once

#include <QtWidgets/QApplication>

#include "ui_loginwindow.h"
#include "ui_userwindow.h"
#include "ui_useredit.h"
#include "Profile.h"
#include "Database.h"
#include "LoginWindow.h"
#include "UserWindow.h"
#include "UserEdit.h"

class Manager : public QObject
{
    Q_OBJECT

public:

    Manager();
    ~Manager();

    void Run();

private:

    UserEdit m_UserEdit;
    UserWindow m_UserWindow;
    LoginWindow m_LoginWindow;

    Database m_Database;
    Profile m_LoginProfile;

// Login Signals
signals:
    void user_Login();

// Login Slots
private slots:
    void on_LoginClicked();
    void on_LoginCancelClicked();
    void on_UserLogin();

// App Signals
signals:
    void logout();

// App Slots
private slots:
    void on_LogoutClicked();
    void on_AddClicked();
    void on_EditClicked();
    void on_DeleteClicked();

// Edit Slots
private slots:
    void on_ApplyClicked();
    void on_EditCancelClicked();
};
