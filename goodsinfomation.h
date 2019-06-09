#ifndef GOODSINFOMATION_H
#define GOODSINFOMATION_H

#include <QtWidgets>
#ifdef Q_OS_ANDROID
#include <QtAndroidExtras>
#endif
#include <QFile>
#include <QWidget>
#include <QImage>
#include <QPainter>
#include <QString>
#include <QPushButton>

namespace Ui {
class GoodsInfomation;
}

class GoodsInfomation : public QWidget
{
    Q_OBJECT

public:
    explicit GoodsInfomation(QWidget *parent = nullptr);
    ~GoodsInfomation();

    void addimage(QString path,QPushButton *QPB);

private slots:
    void showGoodsInfo();

    void on_backQPB_clicked();

    void on_publishQPB_clicked();

    void on_photo1QPB_clicked();

    void on_photo2QPB_clicked();

    void on_photo3QPB_clicked();

signals:
    void gotoReleaseGoods();

private:
    Ui::GoodsInfomation *ui;
};

#endif // GOODSINFOMATION_H
