#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include "UserWindow.h"
#include "Database.h"

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    Ui::LoginWindow *ui;

    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();
};
