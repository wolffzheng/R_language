/****************************************************************************
** Meta object code from reading C++ file 'qtdensity.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qt/qtdensity.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtdensity.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtDensity_t {
    QByteArrayData data[9];
    char stringdata[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDensity_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDensity_t qt_meta_stringdata_QtDensity = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QtDensity"
QT_MOC_LITERAL(1, 10, 12), // "getBandwidth"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 2), // "bw"
QT_MOC_LITERAL(4, 27, 9), // "getKernel"
QT_MOC_LITERAL(5, 37, 6), // "kernel"
QT_MOC_LITERAL(6, 44, 16), // "getRandomDataCmd"
QT_MOC_LITERAL(7, 61, 3), // "txt"
QT_MOC_LITERAL(8, 65, 16) // "runRandomDataCmd"

    },
    "QtDensity\0getBandwidth\0\0bw\0getKernel\0"
    "kernel\0getRandomDataCmd\0txt\0"
    "runRandomDataCmd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDensity[] = {

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
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       6,    1,   40,    2, 0x08 /* Private */,
       8,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void QtDensity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtDensity *_t = static_cast<QtDensity *>(_o);
        switch (_id) {
        case 0: _t->getBandwidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->getKernel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->getRandomDataCmd((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->runRandomDataCmd(); break;
        default: ;
        }
    }
}

const QMetaObject QtDensity::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtDensity.data,
      qt_meta_data_QtDensity,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtDensity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDensity::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtDensity.stringdata))
        return static_cast<void*>(const_cast< QtDensity*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QtDensity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
