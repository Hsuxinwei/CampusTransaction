//登录界面
#include "login.h"
#include "sqlite.h"
#include "ui_login.h"
#include "statement.h"

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
    emit gotoRegister();
}

void Login::on_loginQPB_clicked()
{
    usernamel = ui->usernQLineEdit->text();
    passwordl = ui->passwQLineEdit->text();
    UserName = usernamel;
  /*  if(!createConnection())
    {
       // qDebug() << false;
        return;
    }

    QString sql = QString("select * from PersonalInfomation where username = '%1'and password = '%2'").arg(usernamel).arg(passwordl);

    QSqlDatabase db = QSqlDatabase::database("connect_sql");

    QSqlQuery query(db);
    if(query.exec(sql))
    {
       // qDebug() << true;
        if(query.next())
        {
            this->hide();
            emit gotoTransaction();
        }
        else {
            QMessageBox::warning(this,tr("警告！"),tr("账号或密码错误！"),QMessageBox::Ok);
            ui->usernQLineEdit->clear();
            ui->passwQLineEdit->clear();
            ui->usernQLineEdit->setFocus();
            return;
        }
    }*/

    this->hide();
    emit gotoTransaction();
}


void Login::showLogin()
{
    this->show();
}
