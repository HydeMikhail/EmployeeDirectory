#pragma once

#include <QtWidgets/QMainWindow>
#include "Profile.h"

QT_BEGIN_NAMESPACE
namespace Ui { class UserWindow; }
QT_END_NAMESPACE

class UserWindow : public QMainWindow
{
    Q_OBJECT

public:
        Ui::UserWindow *ui;

    UserWindow(QWidget *parent = nullptr);
    ~UserWindow();

    void Configure(Profile profile);
};