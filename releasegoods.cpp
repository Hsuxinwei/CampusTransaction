//发布类型选择界面
#include "releasegoods.h"
#include "ui_releasegoods.h"
#include "statement.h"

ReleaseGoods::ReleaseGoods(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReleaseGoods)
{
    ui->setupUi(this);
}

ReleaseGoods::~ReleaseGoods()
{
    delete ui;
}


void ReleaseGoods::showReleaseGoods()
{
    this->show();
}


void ReleaseGoods::on_donategoodsQPB_clicked()
{
    QPBName = ui->donategoodsQPB->text();
    this->hide();
    emit gotoGoodsInfo();
}

void ReleaseGoods::on_sellgoodsQPB_clicked()
{
    QPBName = ui->donategoodsQPB->text();
    this->hide();
    emit gotoGoodsInfo();
}



void ReleaseGoods::on_userimage_releasegoodsQPB_clicked()
{

}

void ReleaseGoods::on_tradeQPB_clicked()
{
    this->hide();
    emit gotoTransacation();
}

void ReleaseGoods::on_messageQPB_clicked()
{
   // this->hide();
    //emit goto
}

void ReleaseGoods::on_personQPB_clicked()
{
    this->hide();
    emit gotoPersonalInfo();
}

