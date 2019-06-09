//学生用户注册界面
#include "register.h"
#include "sqlite.h"
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

void Register::showRegister()
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
   // collagename = ui->collegeQLineEdit->text();
    collagename = ui->colleageQCB->currentText();
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
    else {
        if(password.length() < 8)
        {
            QMessageBox::warning(this,tr("警告！"),tr("密码长度小于八位！"),QMessageBox::Ok);
            ui->passwordQLineEdit->clear();
            ui->passwordQLineEdit->setFocus();
            return;
        }
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
    else {
        if(studentnumber.length() != 10)
        {
            QMessageBox::warning(this,tr("警告！"),tr("学号长度不对！"),QMessageBox::Ok);
        }
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
        ui->spasswordQLineEdit->clear();
        ui->spasswordQLineEdit->setFocus();
        return;
    }
    if(!createConnection())
    {
        return;
    }
    QSqlDatabase db = QSqlDatabase::database("connect_sql");
    QString sql = QString("insert into PersonalInfomation values('%1','%2','%3','%4','%5','%6')").arg(username).arg(password).arg(studentname).arg(studentnumber).arg(collagename).arg(classname);
    QString sql1 = QString("select * from PersonalInfomation where username = '%1' or studentid = '%2'").arg(username).arg(studentnumber);
    QSqlQuery query(db);
    if(query.exec(sql1))
    {
        if(query.next())
        {
            QMessageBox::information(this,tr("提示！"),tr("该用户名或学号已经被注册!"),QMessageBox::Ok);
            ui->usernameQLineEdit->clear();
            ui->passwordQLineEdit->clear();
            ui->spasswordQLineEdit->clear();
            ui->studentnQLineEdit->clear();
            ui->numberQLineEdit->clear();
           // ui->collegeQLineEdit->clear();
            ui->classQLIneEdit->clear();
            ui->usernameQLineEdit->setFocus();
            return;
        }
        query.exec(sql);
    }



    this->hide();
    emit gobackLogin();
}

void Register::on_cancelQPB_clicked()
{
    this->hide();
    emit gobackLogin();
}
