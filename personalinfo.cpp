#include "personalinfo.h"

#include "ui_personalinfo.h"

PersonalInfo::PersonalInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PersonalInfo)
{
    ui->setupUi(this);
}

PersonalInfo::~PersonalInfo()
{
    delete ui;
}
