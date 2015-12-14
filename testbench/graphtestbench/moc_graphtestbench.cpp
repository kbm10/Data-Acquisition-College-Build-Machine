/****************************************************************************
** Meta object code from reading C++ file 'graphtestbench.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../FYP-2015-EEE/testbench/graphtestbench/graphtestbench.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphtestbench.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_graphTestBench_t {
    QByteArrayData data[10];
    char stringdata[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_graphTestBench_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_graphTestBench_t qt_meta_stringdata_graphTestBench = {
    {
QT_MOC_LITERAL(0, 0, 14), // "graphTestBench"
QT_MOC_LITERAL(1, 15, 10), // "injectelec"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "injectchem"
QT_MOC_LITERAL(4, 38, 10), // "injectsine"
QT_MOC_LITERAL(5, 49, 13), // "deviceRespond"
QT_MOC_LITERAL(6, 63, 11), // "deviceSend6"
QT_MOC_LITERAL(7, 75, 11), // "deviceSend7"
QT_MOC_LITERAL(8, 87, 11), // "deviceSend8"
QT_MOC_LITERAL(9, 99, 11) // "deviceSend9"

    },
    "graphTestBench\0injectelec\0\0injectchem\0"
    "injectsine\0deviceRespond\0deviceSend6\0"
    "deviceSend7\0deviceSend8\0deviceSend9"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_graphTestBench[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void graphTestBench::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        graphTestBench *_t = static_cast<graphTestBench *>(_o);
        switch (_id) {
        case 0: _t->injectelec(); break;
        case 1: _t->injectchem(); break;
        case 2: _t->injectsine(); break;
        case 3: _t->deviceRespond(); break;
        case 4: _t->deviceSend6(); break;
        case 5: _t->deviceSend7(); break;
        case 6: _t->deviceSend8(); break;
        case 7: _t->deviceSend9(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject graphTestBench::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_graphTestBench.data,
      qt_meta_data_graphTestBench,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *graphTestBench::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *graphTestBench::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_graphTestBench.stringdata))
        return static_cast<void*>(const_cast< graphTestBench*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int graphTestBench::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
