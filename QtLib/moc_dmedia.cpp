/****************************************************************************
** Meta object code from reading C++ file 'dmedia.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Media/dmedia.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dmedia.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DMedia_t {
    QByteArrayData data[8];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DMedia_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DMedia_t qt_meta_stringdata_DMedia = {
    {
QT_MOC_LITERAL(0, 0, 6), // "DMedia"
QT_MOC_LITERAL(1, 7, 13), // "slotReadyRead"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 10), // "slotFinish"
QT_MOC_LITERAL(4, 33, 8), // "exitCode"
QT_MOC_LITERAL(5, 42, 22), // "slotReadStandardOutput"
QT_MOC_LITERAL(6, 65, 16), // "slotMediaStarted"
QT_MOC_LITERAL(7, 82, 16) // "on_start_clicked"

    },
    "DMedia\0slotReadyRead\0\0slotFinish\0"
    "exitCode\0slotReadStandardOutput\0"
    "slotMediaStarted\0on_start_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DMedia[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DMedia::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DMedia *_t = static_cast<DMedia *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotReadyRead(); break;
        case 1: _t->slotFinish((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotReadStandardOutput(); break;
        case 3: _t->slotMediaStarted(); break;
        case 4: _t->on_start_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject DMedia::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_DMedia.data,
      qt_meta_data_DMedia,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DMedia::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DMedia::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DMedia.stringdata0))
        return static_cast<void*>(const_cast< DMedia*>(this));
    return QFrame::qt_metacast(_clname);
}

int DMedia::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
