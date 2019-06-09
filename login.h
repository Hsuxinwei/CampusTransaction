#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    QPushButton registerQPB;
    QPushButton loginQPB;
    QLabel usernQLabel;
    QLabel passwQLabel;
    QLineEdit usernQLineEdit;
    QLineEdit passwQLineEdit;

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

    QString usernamel;
    QString passwordl;

private slots:
    void showLogin();


    void on_registerQPB_clicked();
    void on_loginQPB_clicked();



signals:
    void gotoRegister();
    void gotoTransaction();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
