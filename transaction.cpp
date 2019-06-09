//交易界面
#include "transaction.h"
#include "sqlite.h"
#include "ui_transaction.h"

Transaction::Transaction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Transaction)
{
    ui->setupUi(this);
}

Transaction::~Transaction()
{
    delete ui;
}
void Transaction::on_searchQPB_clicked()
{

}

void Transaction::on_sellQPB_clicked()
{
    this->hide();
    emit gotoReleaseGoods();
}

void Transaction::on_messageQPB_clicked()
{

}

void Transaction::on_personQPB_clicked()
{
    this->hide();
    emit gotoPersonalInfo();
}

void Transaction::showTransaction()
{
    this->show();
}

