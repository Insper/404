/****************************************************************************
** Meta object code from reading C++ file 'diffFilterWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/qtutil/filter/diffFilterWidget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diffFilterWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__qtutil__DiffFilterFunction_t {
    QByteArrayData data[4];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__DiffFilterFunction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__DiffFilterFunction_t qt_meta_stringdata_cvv__qtutil__DiffFilterFunction = {
    {
QT_MOC_LITERAL(0, 0, 31), // "cvv::qtutil::DiffFilterFunction"
QT_MOC_LITERAL(1, 32, 16), // "updateFilterType"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 4) // "type"

    },
    "cvv::qtutil::DiffFilterFunction\0"
    "updateFilterType\0\0type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__DiffFilterFunction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void cvv::qtutil::DiffFilterFunction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DiffFilterFunction *_t = static_cast<DiffFilterFunction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateFilterType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cvv::qtutil::DiffFilterFunction::staticMetaObject = {
    { &FilterFunctionWidget<2,1>::staticMetaObject, qt_meta_stringdata_cvv__qtutil__DiffFilterFunction.data,
      qt_meta_data_cvv__qtutil__DiffFilterFunction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::DiffFilterFunction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::DiffFilterFunction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__DiffFilterFunction.stringdata0))
        return static_cast<void*>(this);
    return FilterFunctionWidget<2,1>::qt_metacast(_clname);
}

int cvv::qtutil::DiffFilterFunction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FilterFunctionWidget<2,1>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
