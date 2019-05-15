#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include <QString>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QDialog *parent = nullptr);
    ~Register();
public:
    QString studentname;
    QString studentnumber;
    QString username;
    QString password;
    QString surepassword;
    QString collagename;
    QString classname;


private slots:
    void receiveRegister();


    void on_sureQPB_clicked();

    void on_cancelQPB_clicked();
signals:
    void gobackLogin();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
