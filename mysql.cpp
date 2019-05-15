#include "mysql.h"

void connect_mysql()
{

    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("111.231.14.117");      //连接数据库主机名，这里需要注意（若填的为”127.0.0.1“，出现不能连接，则改为localhost)
    db.setPort(33306);                 //连接数据库端口号，与设置一致
    db.setDatabaseName("CampusTransaction");      //连接数据库名，与设置一致
    db.setUserName("root");          //数据库用户名，与设置一致
    db.setPassword("970206");    //数据库密码，与设置一致
    db.open();
    if(!db.open())
    {
             qDebug()<<"不能连接"<<"connect to mysql error"<<db.lastError().text();
            return ;
    }
    else
    {
              qDebug()<<"连接成功"<<"connect to mysql OK";
    }
}
