/****************************************************************************
** Meta object code from reading C++ file 'deviceio.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../FYP-2015-EEE/src/deviceio.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deviceio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_deviceIO_t {
    QByteArrayData data[6];
    char stringdata[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_deviceIO_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_deviceIO_t qt_meta_stringdata_deviceIO = {
    {
QT_MOC_LITERAL(0, 0, 8), // "deviceIO"
QT_MOC_LITERAL(1, 9, 20), // "defaultButtonClicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "cancelButtonClicked"
QT_MOC_LITERAL(4, 51, 19), // "finishButtonClicked"
QT_MOC_LITERAL(5, 71, 18) // "closeButtonClicked"

    },
    "deviceIO\0defaultButtonClicked\0\0"
    "cancelButtonClicked\0finishButtonClicked\0"
    "closeButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_deviceIO[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void deviceIO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        deviceIO *_t = static_cast<deviceIO *>(_o);
        switch (_id) {
        case 0: _t->defaultButtonClicked(); break;
        case 1: _t->cancelButtonClicked(); break;
        case 2: _t->finishButtonClicked(); break;
        case 3: _t->closeButtonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject deviceIO::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_deviceIO.data,
      qt_meta_data_deviceIO,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *deviceIO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *deviceIO::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_deviceIO.stringdata))
        return static_cast<void*>(const_cast< deviceIO*>(this));
    return QDialog::qt_metacast(_clname);
}

int deviceIO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
