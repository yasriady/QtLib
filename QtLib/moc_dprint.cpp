/****************************************************************************
** Meta object code from reading C++ file 'dprint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Print/dprint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dprint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DPrint_t {
    QByteArrayData data[7];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DPrint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DPrint_t qt_meta_stringdata_DPrint = {
    {
QT_MOC_LITERAL(0, 0, 6), // "DPrint"
QT_MOC_LITERAL(1, 7, 11), // "slotPreview"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "QPrinter*"
QT_MOC_LITERAL(4, 30, 7), // "printer"
QT_MOC_LITERAL(5, 38, 23), // "on_toolButton_2_clicked"
QT_MOC_LITERAL(6, 62, 16) // "on_print_clicked"

    },
    "DPrint\0slotPreview\0\0QPrinter*\0printer\0"
    "on_toolButton_2_clicked\0on_print_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DPrint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       5,    0,   32,    2, 0x08 /* Private */,
       6,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DPrint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DPrint *_t = static_cast<DPrint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotPreview((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 1: _t->on_toolButton_2_clicked(); break;
        case 2: _t->on_print_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject DPrint::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_DPrint.data,
      qt_meta_data_DPrint,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DPrint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DPrint::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DPrint.stringdata0))
        return static_cast<void*>(const_cast< DPrint*>(this));
    return QFrame::qt_metacast(_clname);
}

int DPrint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
