#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

namespace Ui {
class Transaction;
}

class Transaction : public QWidget
{
    Q_OBJECT

public:


public:
    explicit Transaction(QWidget *parent = nullptr);
    ~Transaction();



private slots:
    void showTransaction();


    void on_searchQPB_clicked();

    void on_sellQPB_clicked();

    void on_messageQPB_clicked();

    void on_personQPB_clicked();

signals:
    void gotoSell();
    void gotoMessage();
    void gotoPerson();

private:
    Ui::Transaction *ui;
};

#endif // TRANSACTION_H
