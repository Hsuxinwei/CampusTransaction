#include "register.h"
#include "mysql.h"
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


    if(username.isEmpty())
    {
        QMessageBox::warning(this,tr("警告！"),tr("用户名为空！"),QMessageBox::Ok);
        return;
    }
    if(password.isEmpty())
    {
        QMessageBox::warning(this,tr("警告！"),tr("密码为空！"),QMessageBox::Ok);
        return;
    }
    if(studentname.isEmpty())
    {
        QMessageBox::warning(this,tr("警告！"),tr("姓名为空！"),QMessageBox::Ok);
        return;
    }
    if(studentnumber.isEmpty())
    {
        QMessageBox::warning(this,tr("警告！"),tr("学号为空！"),QMessageBox::Ok);
        return;
    }
    if(collagename.isEmpty())
    {
        QMessageBox::warning(this,tr("警告！"),tr("学院为空！"),QMessageBox::Ok);
        return;
    }
    if(classname.isEmpty())
    {
        QMessageBox::warning(this,tr("警告！"),tr("班级为空！"),QMessageBox::Ok);
        return;
    }
    if(password != surepassword)
    {
        QMessageBox::warning(this,tr("警告！"),tr("两次输入的密码不一致！"),QMessageBox::Ok);
        return;
    }

    if(!connect_mysql())
    {
       return;
    }
    QSqlQuery query;

    query.exec("insert into PersonalInfomation values('username','studentnumber','studentname','collagename','classname','password')");

    this->hide();
    emit gobackLogin();
}

void Register::on_cancelQPB_clicked()
{
    this->hide();
    emit gobackLogin();
}
