/****************************************************************************
** Meta object code from reading C++ file 'cvvpointmatch.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/qtutil/matchview/cvvpointmatch.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cvvpointmatch.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__qtutil__CVVPointMatch_t {
    QByteArrayData data[5];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__CVVPointMatch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__CVVPointMatch_t qt_meta_stringdata_cvv__qtutil__CVVPointMatch = {
    {
QT_MOC_LITERAL(0, 0, 26), // "cvv::qtutil::CVVPointMatch"
QT_MOC_LITERAL(1, 27, 14), // "updateRightKey"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 7), // "visible"
QT_MOC_LITERAL(4, 51, 13) // "updateLeftKey"

    },
    "cvv::qtutil::CVVPointMatch\0updateRightKey\0"
    "\0visible\0updateLeftKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__CVVPointMatch[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void cvv::qtutil::CVVPointMatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CVVPointMatch *_t = static_cast<CVVPointMatch *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateRightKey((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateLeftKey((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cvv::qtutil::CVVPointMatch::staticMetaObject = {
    { &CVVMatch::staticMetaObject, qt_meta_stringdata_cvv__qtutil__CVVPointMatch.data,
      qt_meta_data_cvv__qtutil__CVVPointMatch,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::CVVPointMatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::CVVPointMatch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__CVVPointMatch.stringdata0))
        return static_cast<void*>(this);
    return CVVMatch::qt_metacast(_clname);
}

int cvv::qtutil::CVVPointMatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CVVMatch::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
