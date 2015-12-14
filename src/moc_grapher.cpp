/****************************************************************************
** Meta object code from reading C++ file 'grapher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FYP-2015-EEE/src/grapher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'grapher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_grapher_t {
    QByteArrayData data[23];
    char stringdata[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_grapher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_grapher_t qt_meta_stringdata_grapher = {
    {
QT_MOC_LITERAL(0, 0, 7), // "grapher"
QT_MOC_LITERAL(1, 8, 7), // "newData"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 8), // "newdata1"
QT_MOC_LITERAL(4, 26, 8), // "newdata2"
QT_MOC_LITERAL(5, 35, 8), // "newdata3"
QT_MOC_LITERAL(6, 44, 8), // "newdata4"
QT_MOC_LITERAL(7, 53, 11), // "setHandTool"
QT_MOC_LITERAL(8, 65, 9), // "bHandTool"
QT_MOC_LITERAL(9, 75, 8), // "setXZoom"
QT_MOC_LITERAL(10, 84, 6), // "bXZoom"
QT_MOC_LITERAL(11, 91, 8), // "setYZoom"
QT_MOC_LITERAL(12, 100, 6), // "bYZoom"
QT_MOC_LITERAL(13, 107, 12), // "setAutoScale"
QT_MOC_LITERAL(14, 120, 10), // "bAutoScale"
QT_MOC_LITERAL(15, 131, 9), // "setXMajor"
QT_MOC_LITERAL(16, 141, 6), // "XMajor"
QT_MOC_LITERAL(17, 148, 9), // "setXMinor"
QT_MOC_LITERAL(18, 158, 6), // "XMinor"
QT_MOC_LITERAL(19, 165, 9), // "setYMajor"
QT_MOC_LITERAL(20, 175, 6), // "YMajor"
QT_MOC_LITERAL(21, 182, 9), // "setYMinor"
QT_MOC_LITERAL(22, 192, 6) // "YMinor"

    },
    "grapher\0newData\0\0newdata1\0newdata2\0"
    "newdata3\0newdata4\0setHandTool\0bHandTool\0"
    "setXZoom\0bXZoom\0setYZoom\0bYZoom\0"
    "setAutoScale\0bAutoScale\0setXMajor\0"
    "XMajor\0setXMinor\0XMinor\0setYMajor\0"
    "YMajor\0setYMinor\0YMinor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_grapher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   59,    2, 0x0a /* Public */,
       7,    1,   68,    2, 0x0a /* Public */,
       9,    1,   71,    2, 0x0a /* Public */,
      11,    1,   74,    2, 0x0a /* Public */,
      13,    1,   77,    2, 0x0a /* Public */,
      15,    1,   80,    2, 0x0a /* Public */,
      17,    1,   83,    2, 0x0a /* Public */,
      19,    1,   86,    2, 0x0a /* Public */,
      21,    1,   89,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   22,

       0        // eod
};

void grapher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        grapher *_t = static_cast<grapher *>(_o);
        switch (_id) {
        case 0: _t->newData((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 1: _t->setHandTool((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setXZoom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setYZoom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setAutoScale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setXMajor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setXMinor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setYMajor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setYMinor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject grapher::staticMetaObject = {
    { &QwtPlot::staticMetaObject, qt_meta_stringdata_grapher.data,
      qt_meta_data_grapher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *grapher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *grapher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_grapher.stringdata))
        return static_cast<void*>(const_cast< grapher*>(this));
    return QwtPlot::qt_metacast(_clname);
}

int grapher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
