#include "LoginWindow.h"
#include "ui_loginwindow.h"

#include <QtGui/QPixmap>

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    QPixmap pix("data/img/logo-generic.png");
    ui->LogoField->setPixmap(pix);
    ui->PasswordInput->setEchoMode(QLineEdit::Password);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}
