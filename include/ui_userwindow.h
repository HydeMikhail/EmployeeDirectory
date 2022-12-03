/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserWindow
{
public:
    QWidget *centralwidget;
    QLabel *LogoField;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *EmailLabel;
    QLabel *TitleLabel;
    QLabel *NameLabel;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *ImageLabel;
    QPushButton *LogOutButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserWindow)
    {
        if (UserWindow->objectName().isEmpty())
            UserWindow->setObjectName(QStringLiteral("UserWindow"));
        UserWindow->resize(933, 985);
        centralwidget = new QWidget(UserWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        LogoField = new QLabel(centralwidget);
        LogoField->setObjectName(QStringLiteral("LogoField"));
        LogoField->setGeometry(QRect(586, 16, 331, 301));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(550, 660, 371, 241));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 150, 371, 91));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        EmailLabel = new QLabel(gridLayoutWidget);
        EmailLabel->setObjectName(QStringLiteral("EmailLabel"));

        gridLayout->addWidget(EmailLabel, 1, 1, 1, 1);

        TitleLabel = new QLabel(gridLayoutWidget);
        TitleLabel->setObjectName(QStringLiteral("TitleLabel"));

        gridLayout->addWidget(TitleLabel, 2, 1, 1, 1);

        NameLabel = new QLabel(gridLayoutWidget);
        NameLabel->setObjectName(QStringLiteral("NameLabel"));

        gridLayout->addWidget(NameLabel, 0, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        ImageLabel = new QLabel(groupBox);
        ImageLabel->setObjectName(QStringLiteral("ImageLabel"));
        ImageLabel->setGeometry(QRect(120, 20, 141, 131));
        LogOutButton = new QPushButton(centralwidget);
        LogOutButton->setObjectName(QStringLiteral("LogOutButton"));
        LogOutButton->setGeometry(QRect(690, 910, 89, 25));
        UserWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 933, 22));
        UserWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UserWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        UserWindow->setStatusBar(statusbar);

        retranslateUi(UserWindow);

        QMetaObject::connectSlotsByName(UserWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UserWindow)
    {
        UserWindow->setWindowTitle(QApplication::translate("UserWindow", "UserWindow", Q_NULLPTR));
        LogoField->setText(QString());
        groupBox->setTitle(QApplication::translate("UserWindow", "User Info", Q_NULLPTR));
        EmailLabel->setText(QString());
        TitleLabel->setText(QString());
        NameLabel->setText(QString());
        label_4->setText(QApplication::translate("UserWindow", "    Title", Q_NULLPTR));
        label_3->setText(QApplication::translate("UserWindow", "    Email", Q_NULLPTR));
        label_2->setText(QApplication::translate("UserWindow", "    Name", Q_NULLPTR));
        ImageLabel->setText(QString());
        LogOutButton->setText(QApplication::translate("UserWindow", "LogOut", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserWindow: public Ui_UserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
