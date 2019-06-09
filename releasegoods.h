#ifndef RELEASEGOODS_H
#define RELEASEGOODS_H

#include <QWidget>

namespace Ui {
class ReleaseGoods;
}

class ReleaseGoods : public QWidget
{
    Q_OBJECT

public:
    explicit ReleaseGoods(QWidget *parent = nullptr);
    ~ReleaseGoods();

private slots:
    void showReleaseGoods();

   void on_donategoodsQPB_clicked();

    void on_sellgoodsQPB_clicked();

    void on_userimage_releasegoodsQPB_clicked();

    void on_tradeQPB_clicked();

    void on_messageQPB_clicked();

    void on_personQPB_clicked();


signals:
    void gotoTransacation();
    void gotoGoodsInfo();
    void gotoPersonalInfo();

private:
    Ui::ReleaseGoods *ui;
};

#endif // RELEASEGOODS_H
