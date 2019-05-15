#include "login.h"
#include "register.h"
#include "transaction.h"
//#include "sell.h"
//#include "tiffimg.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Register r;
    Transaction t;
    Login l;
   // Sell s;
    l.show();

    QObject::connect(&l,SIGNAL(showRegister()),&r,SLOT(receiveRegister()));
    QObject::connect(&r,SIGNAL(gobackLogin()),&l,SLOT(showLogin()));
    QObject::connect(&r,SIGNAL(gobackLogin()),&l,SLOT(showLogin()));
    QObject::connect(&l,SIGNAL(gotoTransaction()),&t,SLOT(showTransaction()));
    //QObject::connect(&t,SIGNAL(gotoSell()),&s,SLOT(showSell()));


    return a.exec();
}
