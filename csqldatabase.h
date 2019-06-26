#ifndef CSQLDATABASE_H
#define CSQLDATABASE_H

#include <QObject>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <motor.h>
#include <QMetaType>
class cSqlDataBase : public QObject
{
    Q_OBJECT
public:
    explicit cSqlDataBase(QObject *parent = 0);
    bool sqlInit();
    ~cSqlDataBase(){
        database_.close();
    }
    QString makeSaveString(QString expName, QString usrName, QString expNo,
                           QString motorId, QString cur, QString vol, QString setSpd,
                           QString spd);
signals:
    void sendQueryRes(QSqlQuery);
public slots:
    void insertIntoDB(QString expName,QString usrName,QString expNo,
                                  uint id,double cur,double vol,double setSpd,double spd);
    void queryFromDB(QString);
private:
    QSqlDatabase database_;
};

#endif // CSQLDATABASE_H
