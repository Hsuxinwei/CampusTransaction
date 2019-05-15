#include "transaction.h"

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
   // this->hide();
   // emit gotoSell();
}

void Transaction::on_messageQPB_clicked()
{

}

void Transaction::on_personQPB_clicked()
{

}

void Transaction::showTransaction()
{
    this->show();
}
