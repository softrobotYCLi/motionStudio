#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mSysPowerStatus_(false),
    isRunning(false)
{
    ui->setupUi(this);
    qRegisterMetaType<QSqlQuery>("QSqlQuery");

    connect(&mUpdateTimer_,SIGNAL(timeout()),this,SLOT(updataView()));
    mUpdateTimer_.setInterval(10);

    pThreadTML = new QThread();
    pDriver_ = new servoDriver();
    pDriver_->moveToThread(pThreadTML);
    connect(pThreadTML,&QThread::finished,pThreadTML,&QThread::deleteLater);
    connect(pThreadTML,&QThread::finished,pDriver_,&servoDriver::deleteLater);
    connect(&mMotor1_,&Motor::sendMoTorSpd,pDriver_,&servoDriver::ctlSpd);
    connect(pDriver_,&servoDriver::sendSpd,&mMotor1_,&Motor::setSpeed);
    connect(pDriver_,&servoDriver::sendCur,&mMotor1_,&Motor::setCurrent);
    connect(pDriver_,&servoDriver::sendVol,&mMotor1_,&Motor::setVoltage);
    connect(&mUpdateTimer_,SIGNAL(timeout()),pDriver_,SLOT(getMotorData()));
    pThreadTML->start();

    customPlotInitialization();
    connect(&mUpdateTimer_, SIGNAL(timeout()), this, SLOT(refreshCustomPlotData()));

    pSqlDataBase = new cSqlDataBase();
    pThreadSQL = new QThread();
    pSqlDataBase->moveToThread(pThreadSQL);
    connect(pThreadSQL,&QThread::finished,pSqlDataBase,&QThread::deleteLater);
    connect(pThreadSQL,&QThread::finished,pThreadSQL,&QThread::deleteLater);
    connect(this,&MainWindow::sendDataToDB,pSqlDataBase,&cSqlDataBase::insertIntoDB);
    connect(this,&MainWindow::sendQueryStr,pSqlDataBase,&cSqlDataBase::queryFromDB);
    connect(pSqlDataBase,&cSqlDataBase::sendQueryRes,this,&MainWindow::getSqlResult);
    pThreadSQL->start();

    ui->dateEdit_queryData_2->setDate(QDate::currentDate());
}

MainWindow::~MainWindow()
{
    pThreadTML->quit();
    pThreadSQL->quit();
    delete ui;
}

bool MainWindow::customPlotInitialization()
{
    ui->widget_dc->addGraph();
    ui->widget_dc->graph(0)->setPen(QPen(Qt::blue));
    ui->widget_dc->graph(0)->setName("motorSpeed");

    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%m:%s"); // %h代表小时
    ui->widget_dc->xAxis->setTicker(timeTicker);
    ui->widget_dc->axisRect()->setupFullAxesBox();
    ui->widget_dc->yAxis->setLabel("电压(V)");

    // make left and bottom axes transfer their ranges to right and top axes:
    connect( ui->widget_dc->xAxis, SIGNAL(rangeChanged(QCPRange)),  ui->widget_dc->xAxis2, SLOT(setRange(QCPRange)));
    connect( ui->widget_dc->yAxis, SIGNAL(rangeChanged(QCPRange)),  ui->widget_dc->yAxis2, SLOT(setRange(QCPRange)));

    // setup a timer that repeatedly calls MainWindow::realtimeDataSlot:

    //dataTimer.start(0); // Interval 0 means to refresh as fast as possibl

    ui->widget_cur->addGraph();
    ui->widget_cur->graph(0)->setPen(QPen(Qt::red));
    ui->widget_cur->graph(0);
    ui->widget_cur->yAxis->setLabel("电流(A)");

    ui->widget_cur->xAxis->setTicker(timeTicker);
    ui->widget_cur->axisRect()->setupFullAxesBox();
    ui->widget_cur->yAxis->setRange(-1,1);
    connect( ui->widget_cur->xAxis, SIGNAL(rangeChanged(QCPRange)),  ui->widget_cur->xAxis2, SLOT(setRange(QCPRange)));
    connect( ui->widget_cur->yAxis, SIGNAL(rangeChanged(QCPRange)),  ui->widget_cur->yAxis2, SLOT(setRange(QCPRange)));

    ui->widget_spd->addGraph();
    ui->widget_spd->graph(0)->setPen(QPen(Qt::red));
    ui->widget_spd->graph(0);
    ui->widget_spd->yAxis->setLabel("转速(rpm)");

    ui->widget_spd->xAxis->setTicker(timeTicker);
    ui->widget_spd->axisRect()->setupFullAxesBox();
    //ui->widget->yAxis->setRange(-30,30);
    ui->widget_spd->addGraph();
    ui->widget_spd->graph(1)->setPen(QPen(Qt::green));
    ui->widget_spd->graph(1);
    ui->widget_spd->yAxis->setLabel("转速(rpm)");

    ui->widget_spd->xAxis->setTicker(timeTicker);

    connect( ui->widget_spd->xAxis, SIGNAL(rangeChanged(QCPRange)),  ui->widget_spd->xAxis2, SLOT(setRange(QCPRange)));
    connect( ui->widget_spd->yAxis, SIGNAL(rangeChanged(QCPRange)),  ui->widget_spd->yAxis2, SLOT(setRange(QCPRange)));



    return true;
}

void MainWindow::refreshCustomPlotData()
{
    static QTime time(QTime::currentTime());
    // calculate two new data points:
    double key = time.elapsed()/1000.0; // time elapsed since start of demo, in seconds  elaspsed上次开始后得持续时间
    static double lastPointKey = 0;
    static QVector<double> keyContainer;
    static QVector<double> dcContainer;
    static QVector<double> curContainer;
    static QVector<double> spdContainer;
    static QVector<double> setSpdContainer;
    if (key-lastPointKey > 0.02) // at most add point every 0.5 s
    {
      // add data to lines:
        keyContainer.push_back(key);
        dcContainer.push_back(mMotor1_.getVoltage());
        curContainer.push_back(mMotor1_.getCurrent());
        spdContainer.push_back(mMotor1_.getSpeed());
        setSpdContainer.push_back(mMotor1_.getSetSpeed());

      ui->widget_dc->graph(0)->setData(keyContainer,dcContainer,true);
      ui->widget_cur->graph(0)->setData(keyContainer,curContainer,true);
      ui->widget_spd->graph(0)->setData(keyContainer,spdContainer,true);
      ui->widget_spd->graph(1)->setData(keyContainer,setSpdContainer,true);
      lastPointKey = key;
      if (keyContainer.size() > 1000){
          keyContainer.pop_front();
          dcContainer.pop_front();
          curContainer.pop_front();
          spdContainer.pop_front();
          setSpdContainer.pop_front();
      }
      ui->widget_dc->graph(0)->rescaleValueAxis(true);
      ui->widget_cur->graph(0)->rescaleValueAxis(true);
      ui->widget_spd->graph(0)->rescaleValueAxis(true);
      ui->widget_spd->graph(1)->rescaleValueAxis(true);
      ui->widget_dc->xAxis->setRange(key, 8, Qt::AlignRight);
      ui->widget_cur->xAxis->setRange(key, 8, Qt::AlignRight);
      ui->widget_spd->xAxis->setRange(key, 8, Qt::AlignRight);

      ui->widget_dc->replot();
      ui->widget_cur->replot();
      ui->widget_spd->replot();


    }
    // make key axis range scroll with the data (at a constant range size of 8):




}

void MainWindow::getSqlResult(QSqlQuery query_dispResult_)
{
    QStandardItemModel  *model = new QStandardItemModel();
    model->setColumnCount(9);
    model->setHeaderData(0,Qt::Horizontal,"实验名称");
    model->setHeaderData(1,Qt::Horizontal,"实验人员姓名");
    model->setHeaderData(2,Qt::Horizontal,"实验序号");
    model->setHeaderData(3,Qt::Horizontal,"电机编号");
    model->setHeaderData(4,Qt::Horizontal,"电机电压");
    model->setHeaderData(5,Qt::Horizontal,"电机电流");
    model->setHeaderData(6,Qt::Horizontal,"电机设置速度");
    model->setHeaderData(7,Qt::Horizontal,"电机实际速度");
    model->setHeaderData(8,Qt::Horizontal,"电机时间");
    ui->tableView_2->setModel(model);
    int i = 0;
    while(query_dispResult_.next()){
        model->setItem(i,0,new QStandardItem(query_dispResult_.value(0).toString()));
        //设置字符颜色
        //model->item(i,0)->setForeground(QBrush(QColor(255, 0, 0)));
        //设置字符位置
        model->item(i,0)->setTextAlignment(Qt::AlignCenter);
        model->setItem(i,1,new QStandardItem(query_dispResult_.value(1).toString()));
        model->item(i,1)->setTextAlignment(Qt::AlignCenter);
        model->setItem(i,2,new QStandardItem(query_dispResult_.value(2).toString()));
        model->item(i,2)->setTextAlignment(Qt::AlignCenter);
        model->setItem(i,3,new QStandardItem(query_dispResult_.value(3).toString()));
        model->item(i,3)->setTextAlignment(Qt::AlignCenter);
        model->setItem(i,4,new QStandardItem(query_dispResult_.value(4).toString()));
        model->item(i,4)->setTextAlignment(Qt::AlignCenter);
        model->setItem(i,5,new QStandardItem(query_dispResult_.value(5).toString()));
        model->item(i,5)->setTextAlignment(Qt::AlignCenter);
        model->setItem(i,6,new QStandardItem(query_dispResult_.value(6).toString()));
        model->item(i,6)->setTextAlignment(Qt::AlignCenter);
        model->setItem(i,7,new QStandardItem(query_dispResult_.value(7).toString()));
        model->item(i,7)->setTextAlignment(Qt::AlignCenter);
        model->setItem(i,8,new QStandardItem(query_dispResult_.value(8).toString()));
        model->item(i,8)->setTextAlignment(Qt::AlignCenter);
        i++;

    }
}

void MainWindow::calSin()
{
    static QTime time(QTime::currentTime());
    double key = time.elapsed()/1000.0;
    static double elapsed = 0;
    if (key - elapsed > 0.1){
    mMotor1_.setSetSpeed(ui->doubleSpinBox_zxK->text().toDouble() * qSin(ui->doubleSpinBox_zxW->text().toDouble() * key)
                         + ui->doubleSpinBox_zxK->text().toDouble()
                         + ui->doubleSpinBox_zxdleta->text().toDouble());
        elapsed = key;
    }
}

void MainWindow::sendControlData()
{
    emit sendMotorData(mMotor1_.getSetSpeed(),mMotor1_.getAccelerate());
}

void MainWindow::updataView()
{
    ui->lineEdit_setSpd->setText(QString::number(mMotor1_.getSetSpeed()));
    ui->lineEdit_Spd->setText(QString::number(mMotor1_.getSpeed()));
    ui->lineEdit_cur->setText(QString::number(mMotor1_.getCurrent()));
    ui->lineEdit_vol->setText(QString::number(mMotor1_.getVoltage()));
    ui->lineEdit_wate->setText(QString::number(mMotor1_.getVoltage()*mMotor1_.getCurrent()));

    emit sendDataToDB(ui->lineEdit_expName->text(),ui->lineEdit_personName->text(),ui->lineEdit_expNo->text(),
                               mMotor1_.getID(),mMotor1_.getVoltage(),mMotor1_.getCurrent(),mMotor1_.getSetSpeed(),
                               mMotor1_.getSpeed());
}



void MainWindow::on_pushButton_sysPower_clicked()
{
    if (!mSysPowerStatus_){
        //系统处于关闭状态
        ui->pushButton_sysPower->setText("关闭");
        mSysPowerStatus_ = true;
    }else{
        //系统处于启动状态
        ui->pushButton_sysPower->setText("启动");
        mSysPowerStatus_ = false;
    }
}

void MainWindow::on_pushButton_hsPower_clicked()
{
    if (mSysPowerStatus_ ){
        //系统电源处于启动状态

        if (!isRunning){
            //其它模式都没有运行
            mMotor1_.setSetSpeed(ui->doubleSpinBox_hsSpd->text().toDouble());
            mMotor1_.setAccelerate(ui->doubleSpinBox_hs_acc->text().toDouble());

            isRunning = true;
            mUpdateTimer_.start();
            ui->pushButton_hsPower->setText("停止");
        }
        else{
            mMotor1_.setSetSpeed(0);
            isRunning = false;
            mUpdateTimer_.stop();
            ui->pushButton_hsPower->setText("启动");

        }
    }else{
        //系统电源处于启动状态
        QMessageBox::warning(this,"warning","请先打开电源");
    }
}

void MainWindow::on_doubleSpinBox_hsSpd_editingFinished()
{
    mMotor1_.setSetSpeed(ui->doubleSpinBox_hsSpd->text().toDouble());
}

void MainWindow::on_pushButton_zxPower_clicked()
{
    if (mSysPowerStatus_ ){
        //系统电源处于启动状态
        if (!isRunning){
            //其它模式都没有运行
            isRunning = true;
            connect(&mUpdateTimer_,&QTimer::timeout,this,&MainWindow::calSin);
            mUpdateTimer_.start();
            ui->pushButton_zxPower->setText("停止");
        }
        else{
            disconnect(&mUpdateTimer_,&QTimer::timeout,this,&MainWindow::calSin);
            mMotor1_.setSetSpeed(0);
            isRunning = false;
            mUpdateTimer_.stop();
            ui->pushButton_zxPower->setText("启动");

        }
    }else{
        //系统电源处于启动状态
        QMessageBox::warning(this,"warning","请先打开电源");
    }
}

void MainWindow::on_pushButton_tabQuery_2_clicked()
{
    QString query_str = "SELECT * FROM MOTOR1 WHERE TIME > '";
    query_str.append(ui->dateEdit_queryData_2->dateTime().toString("yyyy-MM-dd "));
    query_str.append(ui->timeEdit_start_2->time().toString("hh:mm:ss"));
    query_str.append("' AND TIME < '");
    query_str.append(ui->dateEdit_queryData_2->dateTime().toString("yyyy-MM-dd "));
    query_str.append(ui->timeEdit_end_2->time().toString("hh:mm:ss"));
    query_str.append("'");
    emit sendQueryStr(query_str);
}
