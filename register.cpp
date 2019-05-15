#include "register.h"
#include "ui_register.h"


Register::Register(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::receiveRegister()
{
    this->show();
}

void Register::on_sureQPB_clicked()
{
    username = ui->usernameQLineEdit->text();
    password = ui->passwordQLineEdit->text();
    surepassword = ui->spasswordQLineEdit->text();
    studentname = ui->studentnQLineEdit->text();
    studentnumber = ui->numberQLineEdit->text();
    collagename = ui->collegeQLineEdit->text();
    classname = ui->classQLIneEdit->text();

    if(password != surepassword)
    {
        QMessageBox::warning(this,tr("警告！"),tr("两次输入的密码不一致！"),QMessageBox::Abort);
        return;
    }


    this->hide();
    emit gobackLogin();
}

void Register::on_cancelQPB_clicked()
{
    this->hide();
    emit gobackLogin();
}
