#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"
#include "motor.h"
#include "servodriver.h"
#include <QTimer>
#include <QThread>
#include <QtMath>
#include "csqldatabase.h"
#include <QMetaType>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool customPlotInitialization();



signals:
    void sendMotorData(double,double);
    void sendDataToDB(QString expName, QString usrName, QString expNo,
                      uint motorId, double cur, double vol, double setSpd,
                      double spd);
    void sendQueryStr(QString);
private slots:
    void sendControlData();

    void refreshCustomPlotData();

    void getSqlResult(QSqlQuery);

    void calSin();

    void updataView();

    void on_pushButton_sysPower_clicked();

    void on_pushButton_hsPower_clicked();

    void on_doubleSpinBox_hsSpd_editingFinished();

    void on_pushButton_zxPower_clicked();

    void on_pushButton_tabQuery_2_clicked();

private:
    Ui::MainWindow *ui;
    Motor mMotor1_;
    servoDriver *pDriver_;
    bool mSysPowerStatus_;
    bool isRunning;
    QTimer mUpdateTimer_;
    QThread *pThreadTML;
    cSqlDataBase *pSqlDataBase;
    QThread *pThreadSQL;
};

#endif // MAINWINDOW_H
