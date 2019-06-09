#ifndef SQLITE_H
#define SQLITE_H

#include <QObject>

#include <QtSql>

#include <QSqlDatabase>

#include <QDebug>



static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "connect_sql");//1
    QFile file("/storage/emulated/0/data/CampusTransaction.db");//2
    if(!file.exists()||file.size()==0){//3
        QFile::copy("assets:/CampusTransaction/CampusTransaction.db", "/storage/emulated/0/data/CampusTransaction.db");//4
        QFile::setPermissions("/storage/emulated/0/data/CampusTransaction.db",QFile::ReadUser  | QFile::WriteUser);//设置权限//5
    }
    db.setDatabaseName("/storage/emulated/0/data/CampusTransaction.db");//6
   // db.open();//7
    if(db.open())
    {
        return true;
    }

    return false;
}

#endif // SQLITE_H
