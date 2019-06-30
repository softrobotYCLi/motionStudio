/****************************************************************************
** Meta object code from reading C++ file 'servodriver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../servodriver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'servodriver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_servoDriver_t {
    QByteArrayData data[10];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_servoDriver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_servoDriver_t qt_meta_stringdata_servoDriver = {
    {
QT_MOC_LITERAL(0, 0, 11), // "servoDriver"
QT_MOC_LITERAL(1, 12, 7), // "sendSpd"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "sendVol"
QT_MOC_LITERAL(4, 29, 7), // "sendCur"
QT_MOC_LITERAL(5, 37, 7), // "sendErr"
QT_MOC_LITERAL(6, 45, 6), // "ctlSpd"
QT_MOC_LITERAL(7, 52, 3), // "spd"
QT_MOC_LITERAL(8, 56, 3), // "acc"
QT_MOC_LITERAL(9, 60, 12) // "getMotorData"

    },
    "servoDriver\0sendSpd\0\0sendVol\0sendCur\0"
    "sendErr\0ctlSpd\0spd\0acc\0getMotorData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_servoDriver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   56,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Int, QMetaType::Double,    2,
    QMetaType::Int, QMetaType::Double,    2,
    QMetaType::Int, QMetaType::Double,    2,
    QMetaType::Int, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    7,    8,
    QMetaType::Void,

       0        // eod
};

void servoDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        servoDriver *_t = static_cast<servoDriver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->sendSpd((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->sendVol((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->sendCur((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->sendErr((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: _t->ctlSpd((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->getMotorData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (servoDriver::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&servoDriver::sendSpd)) {
                *result = 0;
                return;
            }
        }
        {
            typedef int (servoDriver::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&servoDriver::sendVol)) {
                *result = 1;
                return;
            }
        }
        {
            typedef int (servoDriver::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&servoDriver::sendCur)) {
                *result = 2;
                return;
            }
        }
        {
            typedef int (servoDriver::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&servoDriver::sendErr)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject servoDriver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_servoDriver.data,
      qt_meta_data_servoDriver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *servoDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *servoDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_servoDriver.stringdata0))
        return static_cast<void*>(const_cast< servoDriver*>(this));
    return QObject::qt_metacast(_clname);
}

int servoDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
int servoDriver::sendSpd(double _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int servoDriver::sendVol(double _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
int servoDriver::sendCur(double _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
int servoDriver::sendErr(QString _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
