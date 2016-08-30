/****************************************************************************
** Meta object code from reading C++ file 'dialogthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Testing/Thread/dialogthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DialogThread_t {
    QByteArrayData data[10];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogThread_t qt_meta_stringdata_DialogThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DialogThread"
QT_MOC_LITERAL(1, 13, 33), // "on_pushButton_StartThread_cli..."
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 11), // "errorString"
QT_MOC_LITERAL(4, 60, 3), // "err"
QT_MOC_LITERAL(5, 64, 12), // "slotProgress"
QT_MOC_LITERAL(6, 77, 3), // "str"
QT_MOC_LITERAL(7, 81, 31), // "on_pushButton_PlaySound_clicked"
QT_MOC_LITERAL(8, 113, 34), // "on_pushButton_QSoundEffect_cl..."
QT_MOC_LITERAL(9, 148, 31) // "on_pushButton_PlayMedia_clicked"

    },
    "DialogThread\0on_pushButton_StartThread_clicked\0"
    "\0errorString\0err\0slotProgress\0str\0"
    "on_pushButton_PlaySound_clicked\0"
    "on_pushButton_QSoundEffect_clicked\0"
    "on_pushButton_PlayMedia_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       5,    1,   48,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogThread *_t = static_cast<DialogThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_StartThread_clicked(); break;
        case 1: _t->errorString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->slotProgress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_PlaySound_clicked(); break;
        case 4: _t->on_pushButton_QSoundEffect_clicked(); break;
        case 5: _t->on_pushButton_PlayMedia_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject DialogThread::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogThread.data,
      qt_meta_data_DialogThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DialogThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DialogThread.stringdata0))
        return static_cast<void*>(const_cast< DialogThread*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
