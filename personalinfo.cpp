//个人信息界面
#include "personalinfo.h"
#include "sqlite.h"
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

void PersonalInfo::on_tradeQPB_clicked()
{
    this->hide();
    emit gotoTransaction();
}

void PersonalInfo::on_sellQPB_clicked()
{
    this->hide();
    emit gotoReleaseGoods();
}

void PersonalInfo::on_messageQPB_clicked()
{

}
void PersonalInfo::showPersonalInfo()
{
    this->show();
}

void PersonalInfo::on_publishedgoodsQPB_clicked()
{

}

void PersonalInfo::on_selledgoodsQPB_clicked()
{

}

void PersonalInfo::on_boughtgoodsQPB_clicked()
{

}

void PersonalInfo::on_donatedgoodsQPB_clicked()
{

}

void PersonalInfo::on_tradinggoodsQPB_clicked()
{

}

void PersonalInfo::on_modifypersonQPB_clicked()
{

}

void PersonalInfo::on_settingQPB_clicked()
{

}

void PersonalInfo::on_userimage_personQPB_clicked()
{

}
