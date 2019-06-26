#-------------------------------------------------
#
# Project created by QtCreator 2019-06-19T20:10:31
#
#-------------------------------------------------

QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = motionStudio
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    motor.cpp \
    servodriver.cpp \
    qcustomplot.cpp \
    csqldatabase.cpp

HEADERS  += mainwindow.h \
    motor.h \
    servodriver.h \
    qcustomplot.h \
    csqldatabase.h

FORMS    += mainwindow.ui

QT += sql

LIBS += -LC:/mycode/motionStudio -lTML_lib
LIBS += -LC:/mycode/motionStudio -ltmlcomm
