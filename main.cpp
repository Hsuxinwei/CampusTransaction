#include "login.h"
#include "register.h"
#include "transaction.h"
#include "sqlite.h"
#include "goodsdisplay.h"
#include "goodsinfomation.h"
#include "releasegoods.h"
#include "personalinfo.h"


#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Register r;
    Transaction t;
    Login l;
    GoodsDisplay gd;
    GoodsInfomation gi;
    PersonalInfo p;
    ReleaseGoods rg;


    l.show();

    QObject::connect(&l,SIGNAL(gotoRegister()),&r,SLOT(showRegister()));
    QObject::connect(&r,SIGNAL(gobackLogin()),&l,SLOT(showLogin()));
    QObject::connect(&r,SIGNAL(gobackLogin()),&l,SLOT(showLogin()));
    QObject::connect(&l,SIGNAL(gotoTransaction()),&t,SLOT(showTransaction()));
    QObject::connect(&t,SIGNAL(gotoGoodsDisplay()),&gd,SLOT(showGoodsDisplay()));
    QObject::connect(&t,SIGNAL(gotoPersonalInfo()),&p,SLOT(showPersonalInfo()));
    QObject::connect(&rg,SIGNAL(gotoGoodsInfo()),&gi,SLOT(showGoodsInfo()));
    QObject::connect(&t,SIGNAL(gotoReleaseGoods()),&rg,SLOT(showReleaseGoods()));
    //QObject::connect(&t,SIGNAL(gotoSell()),&s,SLOT(showSell()));



    return a.exec();
}
