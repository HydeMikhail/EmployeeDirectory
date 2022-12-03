/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *LogoField;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *EmailInput;
    QLineEdit *PasswordInput;
    QLabel *EmailLabel;
    QLabel *PasswordLabel;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *LoginButton;
    QPushButton *CancelButton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *MessageField;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(959, 252);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 911, 171));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        LogoField = new QLabel(widget);
        LogoField->setObjectName(QStringLiteral("LogoField"));

        horizontalLayout_2->addWidget(LogoField);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 30, 301, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        EmailInput = new QLineEdit(gridLayoutWidget);
        EmailInput->setObjectName(QStringLiteral("EmailInput"));

        gridLayout->addWidget(EmailInput, 0, 1, 1, 1);

        PasswordInput = new QLineEdit(gridLayoutWidget);
        PasswordInput->setObjectName(QStringLiteral("PasswordInput"));

        gridLayout->addWidget(PasswordInput, 1, 1, 1, 1);

        EmailLabel = new QLabel(gridLayoutWidget);
        EmailLabel->setObjectName(QStringLiteral("EmailLabel"));
        EmailLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(EmailLabel, 0, 0, 1, 1);

        PasswordLabel = new QLabel(gridLayoutWidget);
        PasswordLabel->setObjectName(QStringLiteral("PasswordLabel"));
        PasswordLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(PasswordLabel, 1, 0, 1, 1);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(0, 120, 301, 29));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        LoginButton = new QPushButton(widget1);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));

        horizontalLayout_3->addWidget(LoginButton);

        CancelButton = new QPushButton(widget1);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));

        horizontalLayout_3->addWidget(CancelButton);


        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_2->addWidget(groupBox);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(10, 190, 911, 22));
        horizontalLayout_4 = new QHBoxLayout(widget2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        MessageField = new QLabel(widget2);
        MessageField->setObjectName(QStringLiteral("MessageField"));

        horizontalLayout_4->addWidget(MessageField);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 959, 22));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Login", Q_NULLPTR));
        LogoField->setText(QString());
        groupBox->setTitle(QApplication::translate("LoginWindow", "SignIn", Q_NULLPTR));
        EmailLabel->setText(QApplication::translate("LoginWindow", "Email:", Q_NULLPTR));
        PasswordLabel->setText(QApplication::translate("LoginWindow", " Password:", Q_NULLPTR));
        LoginButton->setText(QApplication::translate("LoginWindow", "Login", Q_NULLPTR));
        CancelButton->setText(QApplication::translate("LoginWindow", "Cancel", Q_NULLPTR));
        MessageField->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
