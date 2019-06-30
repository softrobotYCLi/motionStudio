/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[29];
    char stringdata0[418];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "sendMotorData"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "sendDataToDB"
QT_MOC_LITERAL(4, 39, 7), // "expName"
QT_MOC_LITERAL(5, 47, 7), // "usrName"
QT_MOC_LITERAL(6, 55, 5), // "expNo"
QT_MOC_LITERAL(7, 61, 7), // "motorId"
QT_MOC_LITERAL(8, 69, 3), // "cur"
QT_MOC_LITERAL(9, 73, 3), // "vol"
QT_MOC_LITERAL(10, 77, 6), // "setSpd"
QT_MOC_LITERAL(11, 84, 3), // "spd"
QT_MOC_LITERAL(12, 88, 12), // "sendQueryStr"
QT_MOC_LITERAL(13, 101, 5), // "hxEnd"
QT_MOC_LITERAL(14, 107, 15), // "sendControlData"
QT_MOC_LITERAL(15, 123, 21), // "refreshCustomPlotData"
QT_MOC_LITERAL(16, 145, 12), // "getSqlResult"
QT_MOC_LITERAL(17, 158, 9), // "QSqlQuery"
QT_MOC_LITERAL(18, 168, 6), // "calSin"
QT_MOC_LITERAL(19, 175, 9), // "waitHxEnd"
QT_MOC_LITERAL(20, 185, 13), // "refreshHxMode"
QT_MOC_LITERAL(21, 199, 10), // "updataView"
QT_MOC_LITERAL(22, 210, 14), // "printErrorText"
QT_MOC_LITERAL(23, 225, 30), // "on_pushButton_sysPower_clicked"
QT_MOC_LITERAL(24, 256, 29), // "on_pushButton_hsPower_clicked"
QT_MOC_LITERAL(25, 286, 38), // "on_doubleSpinBox_hsSpd_editin..."
QT_MOC_LITERAL(26, 325, 29), // "on_pushButton_zxPower_clicked"
QT_MOC_LITERAL(27, 355, 32), // "on_pushButton_tabQuery_2_clicked"
QT_MOC_LITERAL(28, 388, 29) // "on_pushButton_hxPower_clicked"

    },
    "MainWindow\0sendMotorData\0\0sendDataToDB\0"
    "expName\0usrName\0expNo\0motorId\0cur\0vol\0"
    "setSpd\0spd\0sendQueryStr\0hxEnd\0"
    "sendControlData\0refreshCustomPlotData\0"
    "getSqlResult\0QSqlQuery\0calSin\0waitHxEnd\0"
    "refreshHxMode\0updataView\0printErrorText\0"
    "on_pushButton_sysPower_clicked\0"
    "on_pushButton_hsPower_clicked\0"
    "on_doubleSpinBox_hsSpd_editingFinished\0"
    "on_pushButton_zxPower_clicked\0"
    "on_pushButton_tabQuery_2_clicked\0"
    "on_pushButton_hxPower_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  104,    2, 0x06 /* Public */,
       3,    8,  109,    2, 0x06 /* Public */,
      12,    1,  126,    2, 0x06 /* Public */,
      13,    0,  129,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  130,    2, 0x08 /* Private */,
      15,    0,  131,    2, 0x08 /* Private */,
      16,    1,  132,    2, 0x08 /* Private */,
      18,    0,  135,    2, 0x08 /* Private */,
      19,    0,  136,    2, 0x08 /* Private */,
      20,    0,  137,    2, 0x08 /* Private */,
      21,    0,  138,    2, 0x08 /* Private */,
      22,    1,  139,    2, 0x08 /* Private */,
      23,    0,  142,    2, 0x08 /* Private */,
      24,    0,  143,    2, 0x08 /* Private */,
      25,    0,  144,    2, 0x08 /* Private */,
      26,    0,  145,    2, 0x08 /* Private */,
      27,    0,  146,    2, 0x08 /* Private */,
      28,    0,  147,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::UInt, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    4,    5,    6,    7,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendMotorData((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->sendDataToDB((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8]))); break;
        case 2: _t->sendQueryStr((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->hxEnd(); break;
        case 4: _t->sendControlData(); break;
        case 5: _t->refreshCustomPlotData(); break;
        case 6: _t->getSqlResult((*reinterpret_cast< QSqlQuery(*)>(_a[1]))); break;
        case 7: _t->calSin(); break;
        case 8: _t->waitHxEnd(); break;
        case 9: _t->refreshHxMode(); break;
        case 10: _t->updataView(); break;
        case 11: _t->printErrorText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->on_pushButton_sysPower_clicked(); break;
        case 13: _t->on_pushButton_hsPower_clicked(); break;
        case 14: _t->on_doubleSpinBox_hsSpd_editingFinished(); break;
        case 15: _t->on_pushButton_zxPower_clicked(); break;
        case 16: _t->on_pushButton_tabQuery_2_clicked(); break;
        case 17: _t->on_pushButton_hxPower_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendMotorData)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString , QString , QString , uint , double , double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendDataToDB)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendQueryStr)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::hxEnd)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sendMotorData(double _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::sendDataToDB(QString _t1, QString _t2, QString _t3, uint _t4, double _t5, double _t6, double _t7, double _t8)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::sendQueryStr(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::hxEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
