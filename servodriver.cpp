#include "servodriver.h"

servoDriver::servoDriver(QObject *parent) : QObject(parent)
{
    if (!initServoDriver()){
        qDebug()<<"servo init fail!";
    }
}

bool servoDriver::initServoDriver()
{
    if(TS_OpenChannel("COM1",CHANNEL_RS232,255,115200) < 0)
    {
        return false;
    }
    else
    {
        int idxSetup = TS_LoadSetup("190622.t.zip"); //1122
        if(idxSetup < 0)
        {
            return false;
        }
        if(!TS_SetupAxis(255,idxSetup))
        {
            return false;
        }
        if(!TS_SelectAxis(255))
        {
            return false;
        }
        if(!TS_DriveInitialisation())
        {
            return false;
        }
        if(!TS_Power(POWER_ON))
        {
            return false;
        }
    }
    return true;
}

void servoDriver::ctlSpd(double spd,double acc)
{
//    if(!TS_Power(POWER_ON)){
//        TS_Power(POWER_ON);
//    }
    if (!TS_MoveVelocity(spd,acc,UPDATE_IMMEDIATE,FROM_REFERENCE))
    {
        qDebug()<<"set spd error";
    }
}

void servoDriver::getMotorData()
{
    getSpd();
    getCur();
    getVol();
}

void servoDriver::getSpd()
{
    double speedm;
    if(!TS_GetFixedVariable("ASPD",speedm))
    {
        qDebug()<<"get spd error";
    }
    emit sendSpd(speedm);
}

void servoDriver::getVol()
{
    short vol;
    if(!TS_GetIntVariable("DC_Supply_Motor",vol))
    {
        qDebug()<<"get vol error";
    }
    emit sendVol(static_cast<double>(vol)/1000 - 5);
}

void servoDriver::getCur()
{
    short cur;
    if(!TS_GetIntVariable("Motor_Current",cur))
    {
        qDebug()<<"get cur error";
    }
    emit sendCur(static_cast<double>(cur)/1000);
}


