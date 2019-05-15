#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

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



private slots:
    void showLogin();


    void on_registerQPB_clicked();
    void on_loginQPB_clicked();



signals:
    void showRegister();
    void gotoTransaction();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
