/****************************************************************************
** Meta object code from reading C++ file 'csqldatabase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../csqldatabase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'csqldatabase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cSqlDataBase_t {
    QByteArrayData data[14];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cSqlDataBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cSqlDataBase_t qt_meta_stringdata_cSqlDataBase = {
    {
QT_MOC_LITERAL(0, 0, 12), // "cSqlDataBase"
QT_MOC_LITERAL(1, 13, 12), // "sendQueryRes"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "QSqlQuery"
QT_MOC_LITERAL(4, 37, 12), // "insertIntoDB"
QT_MOC_LITERAL(5, 50, 7), // "expName"
QT_MOC_LITERAL(6, 58, 7), // "usrName"
QT_MOC_LITERAL(7, 66, 5), // "expNo"
QT_MOC_LITERAL(8, 72, 2), // "id"
QT_MOC_LITERAL(9, 75, 3), // "cur"
QT_MOC_LITERAL(10, 79, 3), // "vol"
QT_MOC_LITERAL(11, 83, 6), // "setSpd"
QT_MOC_LITERAL(12, 90, 3), // "spd"
QT_MOC_LITERAL(13, 94, 11) // "queryFromDB"

    },
    "cSqlDataBase\0sendQueryRes\0\0QSqlQuery\0"
    "insertIntoDB\0expName\0usrName\0expNo\0"
    "id\0cur\0vol\0setSpd\0spd\0queryFromDB"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cSqlDataBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    8,   32,    2, 0x0a /* Public */,
      13,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::UInt, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    5,    6,    7,    8,    9,   10,   11,   12,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void cSqlDataBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cSqlDataBase *_t = static_cast<cSqlDataBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendQueryRes((*reinterpret_cast< QSqlQuery(*)>(_a[1]))); break;
        case 1: _t->insertIntoDB((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8]))); break;
        case 2: _t->queryFromDB((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (cSqlDataBase::*_t)(QSqlQuery );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&cSqlDataBase::sendQueryRes)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cSqlDataBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cSqlDataBase.data,
      qt_meta_data_cSqlDataBase,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cSqlDataBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cSqlDataBase::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cSqlDataBase.stringdata0))
        return static_cast<void*>(const_cast< cSqlDataBase*>(this));
    return QObject::qt_metacast(_clname);
}

int cSqlDataBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void cSqlDataBase::sendQueryRes(QSqlQuery _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
