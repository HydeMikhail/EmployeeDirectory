/********************************************************************************
** Form generated from reading UI file 'useredit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USEREDIT_H
#define UI_USEREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
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

class Ui_UserEdit
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *OptionsInput;
    QLabel *label_5;
    QLabel *label_12;
    QLabel *label_10;
    QComboBox *TypeDropDown;
    QLineEdit *SalaryInput;
    QLineEdit *FirstNameInput;
    QLabel *label_8;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QCheckBox *AdminCheckBox;
    QLabel *label_2;
    QLabel *label_11;
    QLabel *label_9;
    QComboBox *TeamDropDown;
    QLineEdit *LastNameInput;
    QLabel *label_15;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_7;
    QComboBox *VerticalSegmentDropDown;
    QComboBox *LocationDropDown;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_14;
    QLineEdit *DayInput;
    QLineEdit *MonthInput;
    QLineEdit *YearInput;
    QLineEdit *BonusInput;
    QLineEdit *PasswordField;
    QLineEdit *TitleInput;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *ApplyButton;
    QPushButton *CancelButton;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserEdit)
    {
        if (UserEdit->objectName().isEmpty())
            UserEdit->setObjectName(QStringLiteral("UserEdit"));
        UserEdit->resize(459, 510);
        centralwidget = new QWidget(UserEdit);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 441, 411));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        OptionsInput = new QLineEdit(gridLayoutWidget);
        OptionsInput->setObjectName(QStringLiteral("OptionsInput"));

        gridLayout->addWidget(OptionsInput, 8, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 8, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 11, 0, 1, 1);

        TypeDropDown = new QComboBox(gridLayoutWidget);
        TypeDropDown->setObjectName(QStringLiteral("TypeDropDown"));

        gridLayout->addWidget(TypeDropDown, 5, 1, 1, 1);

        SalaryInput = new QLineEdit(gridLayoutWidget);
        SalaryInput->setObjectName(QStringLiteral("SalaryInput"));

        gridLayout->addWidget(SalaryInput, 6, 1, 1, 1);

        FirstNameInput = new QLineEdit(gridLayoutWidget);
        FirstNameInput->setObjectName(QStringLiteral("FirstNameInput"));

        gridLayout->addWidget(FirstNameInput, 0, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 9, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        AdminCheckBox = new QCheckBox(gridLayoutWidget);
        AdminCheckBox->setObjectName(QStringLiteral("AdminCheckBox"));

        horizontalLayout->addWidget(AdminCheckBox);


        gridLayout->addLayout(horizontalLayout, 11, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 7, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 10, 0, 1, 1);

        TeamDropDown = new QComboBox(gridLayoutWidget);
        TeamDropDown->setObjectName(QStringLiteral("TeamDropDown"));

        gridLayout->addWidget(TeamDropDown, 3, 1, 1, 1);

        LastNameInput = new QLineEdit(gridLayoutWidget);
        LastNameInput->setObjectName(QStringLiteral("LastNameInput"));

        gridLayout->addWidget(LastNameInput, 1, 1, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 12, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        VerticalSegmentDropDown = new QComboBox(gridLayoutWidget);
        VerticalSegmentDropDown->setObjectName(QStringLiteral("VerticalSegmentDropDown"));

        gridLayout->addWidget(VerticalSegmentDropDown, 10, 1, 1, 1);

        LocationDropDown = new QComboBox(gridLayoutWidget);
        LocationDropDown->setObjectName(QStringLiteral("LocationDropDown"));

        gridLayout->addWidget(LocationDropDown, 4, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_2->addWidget(label_14);

        DayInput = new QLineEdit(gridLayoutWidget);
        DayInput->setObjectName(QStringLiteral("DayInput"));

        horizontalLayout_2->addWidget(DayInput);

        MonthInput = new QLineEdit(gridLayoutWidget);
        MonthInput->setObjectName(QStringLiteral("MonthInput"));

        horizontalLayout_2->addWidget(MonthInput);

        YearInput = new QLineEdit(gridLayoutWidget);
        YearInput->setObjectName(QStringLiteral("YearInput"));

        horizontalLayout_2->addWidget(YearInput);


        gridLayout->addLayout(horizontalLayout_2, 9, 1, 1, 1);

        BonusInput = new QLineEdit(gridLayoutWidget);
        BonusInput->setObjectName(QStringLiteral("BonusInput"));

        gridLayout->addWidget(BonusInput, 7, 1, 1, 1);

        PasswordField = new QLineEdit(gridLayoutWidget);
        PasswordField->setObjectName(QStringLiteral("PasswordField"));

        gridLayout->addWidget(PasswordField, 12, 1, 1, 1);

        TitleInput = new QLineEdit(gridLayoutWidget);
        TitleInput->setObjectName(QStringLiteral("TitleInput"));

        gridLayout->addWidget(TitleInput, 2, 1, 1, 1);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 430, 441, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        ApplyButton = new QPushButton(horizontalLayoutWidget_3);
        ApplyButton->setObjectName(QStringLiteral("ApplyButton"));

        horizontalLayout_3->addWidget(ApplyButton);

        CancelButton = new QPushButton(horizontalLayoutWidget_3);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));

        horizontalLayout_3->addWidget(CancelButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        UserEdit->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserEdit);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 459, 22));
        UserEdit->setMenuBar(menubar);
        statusbar = new QStatusBar(UserEdit);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        UserEdit->setStatusBar(statusbar);

        retranslateUi(UserEdit);

        QMetaObject::connectSlotsByName(UserEdit);
    } // setupUi

    void retranslateUi(QMainWindow *UserEdit)
    {
        UserEdit->setWindowTitle(QApplication::translate("UserEdit", "MainWindow", Q_NULLPTR));
        label_5->setText(QApplication::translate("UserEdit", "Location", Q_NULLPTR));
        label_12->setText(QApplication::translate("UserEdit", "Options", Q_NULLPTR));
        label_10->setText(QApplication::translate("UserEdit", "Admin", Q_NULLPTR));
        label_8->setText(QApplication::translate("UserEdit", "Start Date", Q_NULLPTR));
        label->setText(QApplication::translate("UserEdit", "First Name", Q_NULLPTR));
        AdminCheckBox->setText(QApplication::translate("UserEdit", "Is Admin", Q_NULLPTR));
        label_2->setText(QApplication::translate("UserEdit", "Last Name", Q_NULLPTR));
        label_11->setText(QApplication::translate("UserEdit", "Bonus", Q_NULLPTR));
        label_9->setText(QApplication::translate("UserEdit", "Vertical Segment", Q_NULLPTR));
        label_15->setText(QApplication::translate("UserEdit", "Password", Q_NULLPTR));
        label_6->setText(QApplication::translate("UserEdit", "Employee Type", Q_NULLPTR));
        label_3->setText(QApplication::translate("UserEdit", "Title", Q_NULLPTR));
        label_4->setText(QApplication::translate("UserEdit", "Team", Q_NULLPTR));
        label_7->setText(QApplication::translate("UserEdit", "Salary", Q_NULLPTR));
        label_14->setText(QApplication::translate("UserEdit", "DD/MM/YYYY", Q_NULLPTR));
        ApplyButton->setText(QApplication::translate("UserEdit", "Apply", Q_NULLPTR));
        CancelButton->setText(QApplication::translate("UserEdit", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserEdit: public Ui_UserEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEREDIT_H
