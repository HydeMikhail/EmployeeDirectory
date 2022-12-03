#include "UserWindow.h"
#include "ui_userwindow.h"

#include <QtGui/QPixmap>

UserWindow::UserWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UserWindow)
{
    ui->setupUi(this);
    QPixmap pix("data/img/logo-generic.png");
    ui->LogoField->setPixmap(pix);
    ui->LogoField->setScaledContents(true);
}

UserWindow::~UserWindow()
{
    delete ui;
}

void UserWindow::Configure(Profile profile){

    QPixmap pix("data/img/square.png");
    ui->ImageLabel->setPixmap(pix);
    ui->ImageLabel->setScaledContents(true);

    QString fn = QString::fromStdString(profile.m_FirstName);
    QString ln = QString::fromStdString(profile.m_LastName);

    QString name = fn + ' ' + ln;

    ui->NameLabel->setText(name);
    ui->EmailLabel->setText(QString::fromStdString(profile.m_Email));
    ui->TitleLabel->setText(QString::fromStdString(profile.m_Title));
}
