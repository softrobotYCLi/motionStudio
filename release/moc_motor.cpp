/****************************************************************************
** Meta object code from reading C++ file 'motor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../motor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'motor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Motor_t {
    QByteArrayData data[12];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Motor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Motor_t qt_meta_stringdata_Motor = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Motor"
QT_MOC_LITERAL(1, 6, 12), // "sendMoTorSpd"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 3), // "spd"
QT_MOC_LITERAL(4, 24, 3), // "acc"
QT_MOC_LITERAL(5, 28, 11), // "setSetSpeed"
QT_MOC_LITERAL(6, 40, 8), // "setSpeed"
QT_MOC_LITERAL(7, 49, 10), // "setCurrent"
QT_MOC_LITERAL(8, 60, 3), // "cur"
QT_MOC_LITERAL(9, 64, 10), // "setVoltage"
QT_MOC_LITERAL(10, 75, 3), // "vol"
QT_MOC_LITERAL(11, 79, 13) // "setAccelerate"

    },
    "Motor\0sendMoTorSpd\0\0spd\0acc\0setSetSpeed\0"
    "setSpeed\0setCurrent\0cur\0setVoltage\0"
    "vol\0setAccelerate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Motor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   49,    2, 0x0a /* Public */,
       6,    1,   52,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x0a /* Public */,
       9,    1,   58,    2, 0x0a /* Public */,
      11,    1,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,    4,

       0        // eod
};

void Motor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Motor *_t = static_cast<Motor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendMoTorSpd((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->setSetSpeed((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 2: _t->setSpeed((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 3: _t->setCurrent((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 4: _t->setVoltage((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 5: _t->setAccelerate((*reinterpret_cast< const double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Motor::*_t)(double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Motor::sendMoTorSpd)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Motor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Motor.data,
      qt_meta_data_Motor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Motor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Motor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Motor.stringdata0))
        return static_cast<void*>(const_cast< Motor*>(this));
    return QObject::qt_metacast(_clname);
}

int Motor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Motor::sendMoTorSpd(double _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
