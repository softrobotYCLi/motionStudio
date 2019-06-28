/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_personName;
    QLineEdit *lineEdit_expName;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *lineEdit_expNo;
    QPushButton *pushButton_sysPower;
    QLabel *label_4;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_7;
    QLabel *label_13;
    QPushButton *pushButton_zxPower;
    QLabel *label_14;
    QDoubleSpinBox *doubleSpinBox_zxK;
    QLabel *label_15;
    QDoubleSpinBox *doubleSpinBox_zxW;
    QLabel *label_16;
    QDoubleSpinBox *doubleSpinBox_zxdleta;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_hsPower;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_hsSpd;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_hs_acc;
    QLabel *label_12;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QLabel *label_7;
    QLineEdit *lineEdit_vol;
    QLabel *label_8;
    QLineEdit *lineEdit_cur;
    QLabel *label_9;
    QLineEdit *lineEdit_setSpd;
    QLabel *label_10;
    QLineEdit *lineEdit_Spd;
    QLabel *label_11;
    QLineEdit *lineEdit_wate;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_6;
    QCustomPlot *widget_dc;
    QCustomPlot *widget_cur;
    QCustomPlot *widget_spd;
    QWidget *tab_2;
    QGridLayout *gridLayout_28;
    QGroupBox *groupBox_14;
    QGridLayout *gridLayout_27;
    QTableView *tableView_2;
    QGroupBox *groupBox_13;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_63;
    QDateEdit *dateEdit_queryData_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_64;
    QComboBox *comboBox_selectFlywheel_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_65;
    QTimeEdit *timeEdit_start_2;
    QLabel *label_66;
    QTimeEdit *timeEdit_end_2;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_tabQuery_2;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1189, 574);
        QIcon icon;
        icon.addFile(QStringLiteral("../build-motionStudio-Desktop_Qt_5_6_0_MinGW_32bit-Debug/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lineEdit_personName = new QLineEdit(groupBox);
        lineEdit_personName->setObjectName(QStringLiteral("lineEdit_personName"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_personName->sizePolicy().hasHeightForWidth());
        lineEdit_personName->setSizePolicy(sizePolicy);
        lineEdit_personName->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_personName, 1, 1, 1, 1);

        lineEdit_expName = new QLineEdit(groupBox);
        lineEdit_expName->setObjectName(QStringLiteral("lineEdit_expName"));
        sizePolicy.setHeightForWidth(lineEdit_expName->sizePolicy().hasHeightForWidth());
        lineEdit_expName->setSizePolicy(sizePolicy);
        lineEdit_expName->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_expName, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_expNo = new QLineEdit(groupBox);
        lineEdit_expNo->setObjectName(QStringLiteral("lineEdit_expNo"));
        sizePolicy.setHeightForWidth(lineEdit_expNo->sizePolicy().hasHeightForWidth());
        lineEdit_expNo->setSizePolicy(sizePolicy);
        lineEdit_expNo->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_expNo, 2, 1, 1, 1);

        pushButton_sysPower = new QPushButton(groupBox);
        pushButton_sysPower->setObjectName(QStringLiteral("pushButton_sysPower"));

        gridLayout_3->addWidget(pushButton_sysPower, 3, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_7 = new QGridLayout(groupBox_4);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_7->addWidget(label_13, 0, 0, 1, 1);

        pushButton_zxPower = new QPushButton(groupBox_4);
        pushButton_zxPower->setObjectName(QStringLiteral("pushButton_zxPower"));

        gridLayout_7->addWidget(pushButton_zxPower, 0, 1, 1, 1);

        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_7->addWidget(label_14, 1, 0, 1, 1);

        doubleSpinBox_zxK = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_zxK->setObjectName(QStringLiteral("doubleSpinBox_zxK"));
        doubleSpinBox_zxK->setValue(20);

        gridLayout_7->addWidget(doubleSpinBox_zxK, 1, 1, 1, 1);

        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_7->addWidget(label_15, 2, 0, 1, 1);

        doubleSpinBox_zxW = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_zxW->setObjectName(QStringLiteral("doubleSpinBox_zxW"));
        doubleSpinBox_zxW->setValue(2);

        gridLayout_7->addWidget(doubleSpinBox_zxW, 2, 1, 1, 1);

        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_7->addWidget(label_16, 3, 0, 1, 1);

        doubleSpinBox_zxdleta = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_zxdleta->setObjectName(QStringLiteral("doubleSpinBox_zxdleta"));
        doubleSpinBox_zxdleta->setValue(20);

        gridLayout_7->addWidget(doubleSpinBox_zxdleta, 3, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_4, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButton_hsPower = new QPushButton(groupBox_2);
        pushButton_hsPower->setObjectName(QStringLiteral("pushButton_hsPower"));

        gridLayout_4->addWidget(pushButton_hsPower, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 1, 0, 1, 1);

        doubleSpinBox_hsSpd = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_hsSpd->setObjectName(QStringLiteral("doubleSpinBox_hsSpd"));
        doubleSpinBox_hsSpd->setMinimum(-100);
        doubleSpinBox_hsSpd->setMaximum(100);
        doubleSpinBox_hsSpd->setValue(10);

        gridLayout_4->addWidget(doubleSpinBox_hsSpd, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 2, 0, 1, 1);

        doubleSpinBox_hs_acc = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_hs_acc->setObjectName(QStringLiteral("doubleSpinBox_hs_acc"));
        doubleSpinBox_hs_acc->setMinimum(0.01);
        doubleSpinBox_hs_acc->setMaximum(2);
        doubleSpinBox_hs_acc->setSingleStep(0.1);
        doubleSpinBox_hs_acc->setValue(0.05);

        gridLayout_4->addWidget(doubleSpinBox_hs_acc, 2, 1, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_4->addWidget(label_12, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        lineEdit_vol = new QLineEdit(groupBox_5);
        lineEdit_vol->setObjectName(QStringLiteral("lineEdit_vol"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_vol->sizePolicy().hasHeightForWidth());
        lineEdit_vol->setSizePolicy(sizePolicy1);
        lineEdit_vol->setAlignment(Qt::AlignCenter);
        lineEdit_vol->setReadOnly(true);

        gridLayout_5->addWidget(lineEdit_vol, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_5->addWidget(label_8, 1, 0, 1, 1);

        lineEdit_cur = new QLineEdit(groupBox_5);
        lineEdit_cur->setObjectName(QStringLiteral("lineEdit_cur"));
        sizePolicy1.setHeightForWidth(lineEdit_cur->sizePolicy().hasHeightForWidth());
        lineEdit_cur->setSizePolicy(sizePolicy1);
        lineEdit_cur->setAlignment(Qt::AlignCenter);
        lineEdit_cur->setReadOnly(true);

        gridLayout_5->addWidget(lineEdit_cur, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_5->addWidget(label_9, 2, 0, 1, 1);

        lineEdit_setSpd = new QLineEdit(groupBox_5);
        lineEdit_setSpd->setObjectName(QStringLiteral("lineEdit_setSpd"));
        sizePolicy1.setHeightForWidth(lineEdit_setSpd->sizePolicy().hasHeightForWidth());
        lineEdit_setSpd->setSizePolicy(sizePolicy1);
        lineEdit_setSpd->setAlignment(Qt::AlignCenter);
        lineEdit_setSpd->setReadOnly(true);

        gridLayout_5->addWidget(lineEdit_setSpd, 2, 1, 1, 1);

        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_5->addWidget(label_10, 3, 0, 1, 1);

        lineEdit_Spd = new QLineEdit(groupBox_5);
        lineEdit_Spd->setObjectName(QStringLiteral("lineEdit_Spd"));
        sizePolicy1.setHeightForWidth(lineEdit_Spd->sizePolicy().hasHeightForWidth());
        lineEdit_Spd->setSizePolicy(sizePolicy1);
        lineEdit_Spd->setAlignment(Qt::AlignCenter);
        lineEdit_Spd->setReadOnly(true);

        gridLayout_5->addWidget(lineEdit_Spd, 3, 1, 1, 1);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_5->addWidget(label_11, 4, 0, 1, 1);

        lineEdit_wate = new QLineEdit(groupBox_5);
        lineEdit_wate->setObjectName(QStringLiteral("lineEdit_wate"));
        sizePolicy1.setHeightForWidth(lineEdit_wate->sizePolicy().hasHeightForWidth());
        lineEdit_wate->setSizePolicy(sizePolicy1);
        lineEdit_wate->setAlignment(Qt::AlignCenter);
        lineEdit_wate->setReadOnly(true);

        gridLayout_5->addWidget(lineEdit_wate, 4, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_5, 1, 1, 1, 1);

        groupBox_6 = new QGroupBox(tab);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        widget_dc = new QCustomPlot(groupBox_6);
        widget_dc->setObjectName(QStringLiteral("widget_dc"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_dc->sizePolicy().hasHeightForWidth());
        widget_dc->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(widget_dc, 0, 0, 1, 1);

        widget_cur = new QCustomPlot(groupBox_6);
        widget_cur->setObjectName(QStringLiteral("widget_cur"));
        sizePolicy2.setHeightForWidth(widget_cur->sizePolicy().hasHeightForWidth());
        widget_cur->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(widget_cur, 1, 0, 1, 1);

        widget_spd = new QCustomPlot(groupBox_6);
        widget_spd->setObjectName(QStringLiteral("widget_spd"));
        sizePolicy2.setHeightForWidth(widget_spd->sizePolicy().hasHeightForWidth());
        widget_spd->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(widget_spd, 2, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_6, 0, 2, 2, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_28 = new QGridLayout(tab_2);
        gridLayout_28->setSpacing(6);
        gridLayout_28->setContentsMargins(11, 11, 11, 11);
        gridLayout_28->setObjectName(QStringLiteral("gridLayout_28"));
        groupBox_14 = new QGroupBox(tab_2);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        gridLayout_27 = new QGridLayout(groupBox_14);
        gridLayout_27->setSpacing(6);
        gridLayout_27->setContentsMargins(11, 11, 11, 11);
        gridLayout_27->setObjectName(QStringLiteral("gridLayout_27"));
        tableView_2 = new QTableView(groupBox_14);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tableView_2->sizePolicy().hasHeightForWidth());
        tableView_2->setSizePolicy(sizePolicy3);

        gridLayout_27->addWidget(tableView_2, 0, 0, 2, 1);


        gridLayout_28->addWidget(groupBox_14, 1, 0, 1, 1);

        groupBox_13 = new QGroupBox(tab_2);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_2 = new QHBoxLayout(groupBox_13);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_63 = new QLabel(groupBox_13);
        label_63->setObjectName(QStringLiteral("label_63"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_63->sizePolicy().hasHeightForWidth());
        label_63->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(label_63);

        dateEdit_queryData_2 = new QDateEdit(groupBox_13);
        dateEdit_queryData_2->setObjectName(QStringLiteral("dateEdit_queryData_2"));
        dateEdit_queryData_2->setCalendarPopup(true);

        horizontalLayout_2->addWidget(dateEdit_queryData_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        label_64 = new QLabel(groupBox_13);
        label_64->setObjectName(QStringLiteral("label_64"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_64->sizePolicy().hasHeightForWidth());
        label_64->setSizePolicy(sizePolicy5);

        horizontalLayout_2->addWidget(label_64);

        comboBox_selectFlywheel_2 = new QComboBox(groupBox_13);
        comboBox_selectFlywheel_2->setObjectName(QStringLiteral("comboBox_selectFlywheel_2"));

        horizontalLayout_2->addWidget(comboBox_selectFlywheel_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        label_65 = new QLabel(groupBox_13);
        label_65->setObjectName(QStringLiteral("label_65"));

        horizontalLayout_2->addWidget(label_65);

        timeEdit_start_2 = new QTimeEdit(groupBox_13);
        timeEdit_start_2->setObjectName(QStringLiteral("timeEdit_start_2"));

        horizontalLayout_2->addWidget(timeEdit_start_2);

        label_66 = new QLabel(groupBox_13);
        label_66->setObjectName(QStringLiteral("label_66"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_66->sizePolicy().hasHeightForWidth());
        label_66->setSizePolicy(sizePolicy6);

        horizontalLayout_2->addWidget(label_66);

        timeEdit_end_2 = new QTimeEdit(groupBox_13);
        timeEdit_end_2->setObjectName(QStringLiteral("timeEdit_end_2"));
        timeEdit_end_2->setAutoFillBackground(false);
        timeEdit_end_2->setProperty("showGroupSeparator", QVariant(false));
        timeEdit_end_2->setCalendarPopup(false);
        timeEdit_end_2->setTime(QTime(23, 59, 59));

        horizontalLayout_2->addWidget(timeEdit_end_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        pushButton_tabQuery_2 = new QPushButton(groupBox_13);
        pushButton_tabQuery_2->setObjectName(QStringLiteral("pushButton_tabQuery_2"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(pushButton_tabQuery_2->sizePolicy().hasHeightForWidth());
        pushButton_tabQuery_2->setSizePolicy(sizePolicy7);

        horizontalLayout_2->addWidget(pushButton_tabQuery_2);


        gridLayout_28->addWidget(groupBox_13, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1189, 26));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "HDUmotionStudio", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\345\256\236\351\252\214\344\277\241\346\201\257", 0));
        lineEdit_personName->setText(QApplication::translate("MainWindow", "LYC", 0));
        lineEdit_expName->setText(QApplication::translate("MainWindow", "TEST", 0));
        label->setText(QApplication::translate("MainWindow", "\345\256\236\351\252\214\345\220\215\347\247\260", 0));
        label_3->setText(QApplication::translate("MainWindow", "\345\256\236\351\252\214\347\274\226\345\217\267", 0));
        label_2->setText(QApplication::translate("MainWindow", "\345\256\236\351\252\214\344\272\272\345\221\230", 0));
        lineEdit_expNo->setText(QApplication::translate("MainWindow", "20190623", 0));
        pushButton_sysPower->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250", 0));
        label_4->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\347\224\265\346\272\220", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\346\255\243\345\274\246\346\250\241\345\274\217", 0));
        label_13->setText(QApplication::translate("MainWindow", "\346\255\243\345\274\246\346\250\241\345\274\217", 0));
        pushButton_zxPower->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250", 0));
        label_14->setText(QApplication::translate("MainWindow", "K", 0));
        label_15->setText(QApplication::translate("MainWindow", "W", 0));
        label_16->setText(QApplication::translate("MainWindow", "delta", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\201\222\351\200\237\346\250\241\345\274\217", 0));
        pushButton_hsPower->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250", 0));
        label_5->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\351\200\237\345\272\246", 0));
        label_6->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\212\240\351\200\237\345\272\246", 0));
        label_12->setText(QApplication::translate("MainWindow", "\346\201\222\351\200\237\346\250\241\345\274\217", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\346\225\260\346\215\256\346\230\276\347\244\272", 0));
        label_7->setText(QApplication::translate("MainWindow", "\347\224\265\346\234\272\347\224\265\345\216\213", 0));
        label_8->setText(QApplication::translate("MainWindow", "\347\224\265\346\234\272\347\224\265\346\265\201", 0));
        label_9->setText(QApplication::translate("MainWindow", "\346\234\237\346\234\233\351\200\237\345\272\246", 0));
        label_10->setText(QApplication::translate("MainWindow", "\345\256\236\346\227\266\351\200\237\345\272\246", 0));
        label_11->setText(QApplication::translate("MainWindow", "\347\224\265\346\234\272\345\212\237\347\216\207", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\346\263\242\345\275\242\346\230\276\347\244\272", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\347\224\265\346\234\2721", 0));
        groupBox_14->setTitle(QApplication::translate("MainWindow", "\346\237\245\350\257\242\347\273\223\346\236\234", 0));
        groupBox_13->setTitle(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\227\266\351\227\264", 0));
        label_63->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\227\245\346\234\237", 0));
        label_64->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\347\224\265\346\234\272", 0));
        comboBox_selectFlywheel_2->clear();
        comboBox_selectFlywheel_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
        );
        label_65->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\227\266\351\227\264", 0));
        timeEdit_start_2->setDisplayFormat(QApplication::translate("MainWindow", "H:mm", 0));
        label_66->setText(QApplication::translate("MainWindow", "\347\273\223\346\235\237\346\227\266\351\227\264", 0));
        pushButton_tabQuery_2->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\273\237\350\256\241", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
