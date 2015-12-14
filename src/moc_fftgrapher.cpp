/****************************************************************************
** Meta object code from reading C++ file 'fftgrapher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FYP-2015-EEE/src/fftgrapher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fftgrapher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_fftGrapher_t {
    QByteArrayData data[16];
    char stringdata[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fftGrapher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fftGrapher_t qt_meta_stringdata_fftGrapher = {
    {
QT_MOC_LITERAL(0, 0, 10), // "fftGrapher"
QT_MOC_LITERAL(1, 11, 7), // "newData"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "newdata1"
QT_MOC_LITERAL(4, 29, 8), // "newdata2"
QT_MOC_LITERAL(5, 38, 8), // "newdata3"
QT_MOC_LITERAL(6, 47, 8), // "newdata4"
QT_MOC_LITERAL(7, 56, 9), // "reDrawFFT"
QT_MOC_LITERAL(8, 66, 9), // "setXMajor"
QT_MOC_LITERAL(9, 76, 6), // "XMajor"
QT_MOC_LITERAL(10, 83, 9), // "setXMinor"
QT_MOC_LITERAL(11, 93, 6), // "XMinor"
QT_MOC_LITERAL(12, 100, 9), // "setYMajor"
QT_MOC_LITERAL(13, 110, 6), // "YMajor"
QT_MOC_LITERAL(14, 117, 9), // "setYMinor"
QT_MOC_LITERAL(15, 127, 6) // "YMinor"

    },
    "fftGrapher\0newData\0\0newdata1\0newdata2\0"
    "newdata3\0newdata4\0reDrawFFT\0setXMajor\0"
    "XMajor\0setXMinor\0XMinor\0setYMajor\0"
    "YMajor\0setYMinor\0YMinor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fftGrapher[] = {

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
       1,    4,   44,    2, 0x0a /* Public */,
       7,    0,   53,    2, 0x0a /* Public */,
       8,    1,   54,    2, 0x0a /* Public */,
      10,    1,   57,    2, 0x0a /* Public */,
      12,    1,   60,    2, 0x0a /* Public */,
      14,    1,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   15,

       0        // eod
};

void fftGrapher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        fftGrapher *_t = static_cast<fftGrapher *>(_o);
        switch (_id) {
        case 0: _t->newData((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 1: _t->reDrawFFT(); break;
        case 2: _t->setXMajor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setXMinor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setYMajor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setYMinor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject fftGrapher::staticMetaObject = {
    { &QwtPlot::staticMetaObject, qt_meta_stringdata_fftGrapher.data,
      qt_meta_data_fftGrapher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *fftGrapher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fftGrapher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_fftGrapher.stringdata))
        return static_cast<void*>(const_cast< fftGrapher*>(this));
    return QwtPlot::qt_metacast(_clname);
}

int fftGrapher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlot::qt_metacall(_c, _id, _a);
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
