#include "csqldatabase.h"

cSqlDataBase::cSqlDataBase(QObject *parent) : QObject(parent)
{
    sqlInit();
    qRegisterMetaType<QSqlQuery>("QSqlQuery");
}

bool cSqlDataBase::sqlInit()
{
    //qDebug() << QSqlDatabase::drivers();查看当前支持的SQL驱动

    if (QSqlDatabase::contains("qt_sql_default_connection")) //判断是否存在这个连接
    {
        database_ = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        database_ = QSqlDatabase::addDatabase("QSQLITE"); //是SQLite对应的驱动名，不能改 第二个参数被省略了，
        database_.setUserName("HDU");        //第二个参数的默认参数就是上面提到的Qt默认连接名称qt_sql_default_connection。
        database_.setDatabaseName("motionDataBase.db");//如果需要使用自定义的连接名称
                                                   //（如果程序需要处理多个数据库文件的话就会这样），则应该加入第二个参数

        database_.setPassword("123456");
    }
    if (!database_.open()){
        qDebug()<<" sql init error!";
        return false;
    }
    return true;
}

QString cSqlDataBase::makeSaveString(QString expName, QString usrName, QString expNo,
                                     QString motorId, QString vol, QString cur,
                                     QString setSpd, QString spd)
{
    QString queryString;
    if (expName.isEmpty()){
        expName = "null";
    }
    if (usrName.isEmpty()){
        usrName = "null";
    }
    if (expNo.isEmpty()){
        expNo = "null";
    }
    if(!database_.tables().contains("MOTOR1"))
    {
        QString tempsql = "CREATE TABLE MOTOR1";
        tempsql.append("([EXPNAME] VARCHAR (50),[USRNAME] VARCHAR (50),[EXPNO] VARCHAR (50),"
                       "[MOTORID] VARCHAR (50),[VOL] DOUBLE, [CURRENT] DOUBLE, [SETSPEED] DOUBLE, [SPEED] DOUBLE,"
                       "[TIME] TimeStamp NOT NULL DEFAULT (datetime('now','localtime')))");
        QSqlQuery sql_query(database_);
        if (!sql_query.exec(tempsql))
        {
            qDebug() << sql_query.lastError().text();
        }
    }
    else{

        queryString.append("INSERT INTO MOTOR1");
        queryString.append("([EXPNAME],[USRNAME],[EXPNO],[MOTORID],[VOL],[CURRENT],[SETSPEED],[SPEED]) VALUES(");
        queryString.append("'"+expName+"',");
        queryString.append("'"+usrName+"',");
        queryString.append("'"+expNo+"',");
        queryString.append("'"+motorId+"',");
        queryString.append(vol+",");
        queryString.append(cur+",");
        queryString.append(setSpd+",");
        queryString.append(spd);
        queryString.append(")");
    }
    return queryString;
}

void cSqlDataBase::insertIntoDB(QString expName,QString usrName,QString expNo,
                                uint id,double cur,double vol,double setSpd,double spd)
{
    QString queryStr = makeSaveString(expName,usrName,expNo,QString::number(id),QString::number(cur),
                                      QString::number(vol),QString::number(setSpd),
                                      QString::number(spd));
    static QSqlQuery sql_query(database_);
    if(!sql_query.exec(queryStr))
    {
        qDebug() << sql_query.lastError().text();
    }
}

void cSqlDataBase::queryFromDB(QString query_string)
{
    QSqlQuery sql_query(database_);
    if (!sql_query.exec(query_string))
    {
        qDebug() << sql_query.lastError().text();
    }
    else{
        emit sendQueryRes(sql_query);
    }
}


