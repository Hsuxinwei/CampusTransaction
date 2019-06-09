#ifndef PERSONALINFO_H
#define PERSONALINFO_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

namespace Ui {
class PersonalInfo;
}

class PersonalInfo : public QWidget
{
    Q_OBJECT

public:


public:
    explicit PersonalInfo(QWidget *parent = nullptr);
    ~PersonalInfo();



private slots:
    void showPersonalInfo();

    void on_tradeQPB_clicked();

    void on_sellQPB_clicked();

    void on_messageQPB_clicked();

    void on_publishedgoodsQPB_clicked();

    void on_selledgoodsQPB_clicked();

    void on_boughtgoodsQPB_clicked();

    void on_donatedgoodsQPB_clicked();

    void on_tradinggoodsQPB_clicked();

    void on_modifypersonQPB_clicked();

    void on_settingQPB_clicked();

    void on_userimage_personQPB_clicked();

signals:
    void gotoTransaction();
    void gotoReleaseGoods();

private:
    Ui::PersonalInfo *ui;
};
#endif // PERSONALINFO_H
