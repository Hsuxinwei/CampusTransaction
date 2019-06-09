#ifndef GOODSDISPLAY_H
#define GOODSDISPLAY_H

#include <QWidget>

namespace Ui {
class GoodsDisplay;
}

class GoodsDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit GoodsDisplay(QWidget *parent = nullptr);
    ~GoodsDisplay();

private slots:
    void showGoodsDisplay();
    void on_bake_goodsdetailQPB_clicked();

    void on_useiamgeQPB_clicked();

    void on_message_detailQPB_clicked();

    void on_trading_detailQPB_clicked();

signals:
    void gotoTransaction();
    void gotopersonalinfo();

private:
    Ui::GoodsDisplay *ui;
};

#endif // GOODSDISPLAY_H
