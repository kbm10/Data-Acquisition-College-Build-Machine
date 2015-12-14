/****************************************************************************
** Meta object code from reading C++ file 'graphtest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../FYP-2015-EEE/testbench/graphtestbench/graphtest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphtest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GraphTest_t {
    QByteArrayData data[10];
    char stringdata[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphTest_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphTest_t qt_meta_stringdata_GraphTest = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GraphTest"
QT_MOC_LITERAL(1, 10, 10), // "enableData"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 15), // "setHistoryRange"
QT_MOC_LITERAL(4, 38, 13), // "setFftOptions"
QT_MOC_LITERAL(5, 52, 9), // "enableFFT"
QT_MOC_LITERAL(6, 62, 15), // "enableScrolling"
QT_MOC_LITERAL(7, 78, 16), // "selectionChanged"
QT_MOC_LITERAL(8, 95, 10), // "mousePress"
QT_MOC_LITERAL(9, 106, 10) // "mouseWheel"

    },
    "GraphTest\0enableData\0\0setHistoryRange\0"
    "setFftOptions\0enableFFT\0enableScrolling\0"
    "selectionChanged\0mousePress\0mouseWheel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphTest[] = {

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

void GraphTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphTest *_t = static_cast<GraphTest *>(_o);
        switch (_id) {
        case 0: _t->enableData(); break;
        case 1: _t->setHistoryRange(); break;
        case 2: _t->setFftOptions(); break;
        case 3: _t->enableFFT(); break;
        case 4: _t->enableScrolling(); break;
        case 5: _t->selectionChanged(); break;
        case 6: _t->mousePress(); break;
        case 7: _t->mouseWheel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject GraphTest::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GraphTest.data,
      qt_meta_data_GraphTest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GraphTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphTest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GraphTest.stringdata))
        return static_cast<void*>(const_cast< GraphTest*>(this));
    return QWidget::qt_metacast(_clname);
}

int GraphTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
