//商品详情界面
#include "goodsdisplay.h"
#include "ui_goodsdisplay.h"

GoodsDisplay::GoodsDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GoodsDisplay)
{
    ui->setupUi(this);
}

GoodsDisplay::~GoodsDisplay()
{
    delete ui;
}


void GoodsDisplay::showGoodsDisplay()
{
    this->show();
}
//返回上一级目录
void GoodsDisplay::on_bake_goodsdetailQPB_clicked()
{
    this->hide();
    emit gotoTransaction();
}
//点开用户头像
void GoodsDisplay::on_useiamgeQPB_clicked()
{
    this->hide();
    emit gotopersonalinfo();
}
//进行留言
void GoodsDisplay::on_message_detailQPB_clicked()
{

}
//添加至正在交易一栏
void GoodsDisplay::on_trading_detailQPB_clicked()
{

}
