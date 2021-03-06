#ifndef SERVODRIVER_H
#define SERVODRIVER_H

#include <QObject>
#include "TML_lib.h"
#include "motor.h"
#include <QDebug>
class servoDriver : public QObject
{
    Q_OBJECT
public:
    explicit servoDriver(QObject *parent = 0);

    ~servoDriver(){
        TS_Power(POWER_OFF);
        TS_CloseChannel(-1);
    }

    bool initServoDriver();

    void getSpd();
    void getVol();
    void getCur();

    void setMotorPower(bool status){
        if (status)
            TS_Power(POWER_ON);
        else
            TS_Power(POWER_OFF);
    }

private:

signals:
    sendSpd(double);
    sendVol(double);
    sendCur(double);
    sendErr(QString);
public slots:
    void ctlSpd(double spd,double acc);
    void getMotorData();

};

#endif // SERVODRIVER_H
