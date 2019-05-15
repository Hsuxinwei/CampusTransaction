#include "login.h"
//#include "register.h"

#include "ui_login.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}


void Login::on_registerQPB_clicked()
{
    this->hide();
    emit showRegister();
}

void Login::on_loginQPB_clicked()
{
    this->hide();
    emit gotoTransaction();
}


void Login::showLogin()
{
    this->show();
}
