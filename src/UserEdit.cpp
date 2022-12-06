#include "UserEdit.h"
#include "ui_useredit.h"

UserEdit::UserEdit(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserEdit)
{
    ui->setupUi(this);
    for (auto const& pair : m_TypeMap){
        ui->TypeDropDown->addItem(pair.first);
    }

    for (auto const& pair : m_TeamMap){
        ui->TeamDropDown->addItem(pair.first);
    }

    for (auto const& pair : m_LocationMap){
        ui->LocationDropDown->addItem(pair.first);
    }

    for (auto const& pair : m_SegmentMap){
        ui->VerticalSegmentDropDown->addItem(pair.first);
    }
}

UserEdit::~UserEdit()
{
    delete ui;
}