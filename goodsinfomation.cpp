//发布商品界面
#include "goodsinfomation.h"
#include "ui_goodsinfomation.h"

QString selectedFileName;

#ifdef Q_OS_ANDROID
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT void JNICALL
Java_xw_QtAndroid_CampusTransaction_CampusTransaction_fileSelected(JNIEnv */*env*/,
                                                             jobject /*obj*/,
                                                             jstring results)
{
    selectedFileName = QAndroidJniObject(results).toString();
}

#ifdef __cplusplus
}
#endif
#endif

GoodsInfomation::GoodsInfomation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GoodsInfomation)
{
    ui->setupUi(this);
    connect(this,SIGNAL(clicked()),this,SLOT(on_photo1QPB_clicked()));
    //connect(this,SIGNAL(clicked()),this,SLOT(on_photo2QPB_clicked()));
   // connect(this,SIGNAL(clicked()),this,SLOT(on_photo3QPB_clicked()));
}

GoodsInfomation::~GoodsInfomation()
{
    delete ui;
}

void GoodsInfomation::addimage(QString path,QPushButton *QPB)
{
    QPixmap p(path);
    int widthp = QPB->width();
    int heightp = QPB->height();
    QPixmap p1 = p.scaled(QSize(widthp,heightp));
    QIcon icon(p1);
    QPB->setIcon(icon);
    QPB->setIconSize(QSize(p1.width(),p1.height()));
    QPB->setFixedSize(widthp,heightp);
}

void GoodsInfomation::showGoodsInfo()
{
    this->show();
}

void GoodsInfomation::on_backQPB_clicked()
{
    this->hide();
    emit gotoReleaseGoods();
}

void GoodsInfomation::on_publishQPB_clicked()
{
    this->hide();
    emit gotoReleaseGoods();
}

void GoodsInfomation::on_photo1QPB_clicked()
{
    ui->photo1QPB->setText("");
    selectedFileName = "#";
    QAndroidJniObject::callStaticMethod<void>("xw/QtAndroid/CampusTransaction/CampusTransaction",
                                              "openAnImage",
                                              "()V");

    while(selectedFileName == "#")
        qApp->processEvents();

    if(QFile(selectedFileName).exists())
        this->addimage(selectedFileName,ui->photo1QPB);


}

void GoodsInfomation::on_photo2QPB_clicked()
{
  /*  ui->photo2QPB->setText("");
    selectedFileName = "#";
    QAndroidJniObject::callStaticMethod<void>("xw/QtAndroid/CampusTransaction/CampusTransaction",
                                              "openAnImage",
                                              "()V");

    while(selectedFileName == "#")
        qApp->processEvents();

    if(QFile(selectedFileName).exists())
        this->addimage(selectedFileName,ui->photo2QPB);*/

}

void GoodsInfomation::on_photo3QPB_clicked()
{
  /*  ui->photo3QPB->setText("");
    selectedFileName = "#";
    QAndroidJniObject::callStaticMethod<void>("xw/QtAndroid/CampusTransaction/CampusTransaction",
                                              "openAnImage",
                                              "()V");

    while(selectedFileName == "#")
        qApp->processEvents();

    if(QFile(selectedFileName).exists())
        this->addimage(selectedFileName,ui->photo3QPB);*/

}
