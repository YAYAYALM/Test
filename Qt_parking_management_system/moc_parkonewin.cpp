/****************************************************************************
** Meta object code from reading C++ file 'parkonewin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "parkonewin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parkonewin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ParkOneWin_t {
    QByteArrayData data[12];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParkOneWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParkOneWin_t qt_meta_stringdata_ParkOneWin = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ParkOneWin"
QT_MOC_LITERAL(1, 11, 8), // "mysignal"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 10), // "getweather"
QT_MOC_LITERAL(4, 32, 14), // "QNetworkReply*"
QT_MOC_LITERAL(5, 47, 1), // "p"
QT_MOC_LITERAL(6, 49, 18), // "on_rightBt_clicked"
QT_MOC_LITERAL(7, 68, 15), // "on_upBt_clicked"
QT_MOC_LITERAL(8, 84, 7), // "getData"
QT_MOC_LITERAL(9, 92, 23), // "on_actionquit_triggered"
QT_MOC_LITERAL(10, 116, 5), // "incar"
QT_MOC_LITERAL(11, 122, 7) // "getcard"

    },
    "ParkOneWin\0mysignal\0\0getweather\0"
    "QNetworkReply*\0p\0on_rightBt_clicked\0"
    "on_upBt_clicked\0getData\0on_actionquit_triggered\0"
    "incar\0getcard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParkOneWin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x09 /* Protected */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    0,   62,    2, 0x08 /* Private */,
      11,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ParkOneWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParkOneWin *_t = static_cast<ParkOneWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mysignal(); break;
        case 1: _t->getweather((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->on_rightBt_clicked(); break;
        case 3: _t->on_upBt_clicked(); break;
        case 4: _t->getData(); break;
        case 5: _t->on_actionquit_triggered(); break;
        case 6: _t->incar(); break;
        case 7: _t->getcard(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ParkOneWin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParkOneWin::mysignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ParkOneWin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ParkOneWin.data,
      qt_meta_data_ParkOneWin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ParkOneWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParkOneWin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ParkOneWin.stringdata0))
        return static_cast<void*>(const_cast< ParkOneWin*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ParkOneWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ParkOneWin::mysignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
