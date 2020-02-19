/****************************************************************************
** Meta object code from reading C++ file 'cvvmatch.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/qtutil/matchview/cvvmatch.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cvvmatch.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__qtutil__CVVMatch_t {
    QByteArrayData data[12];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__CVVMatch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__CVVMatch_t qt_meta_stringdata_cvv__qtutil__CVVMatch = {
    {
QT_MOC_LITERAL(0, 0, 21), // "cvv::qtutil::CVVMatch"
QT_MOC_LITERAL(1, 22, 14), // "updateSettings"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "MatchSettings&"
QT_MOC_LITERAL(4, 53, 8), // "settings"
QT_MOC_LITERAL(5, 62, 6), // "setPen"
QT_MOC_LITERAL(6, 69, 3), // "pen"
QT_MOC_LITERAL(7, 73, 7), // "setShow"
QT_MOC_LITERAL(8, 81, 1), // "b"
QT_MOC_LITERAL(9, 83, 14), // "updateRightKey"
QT_MOC_LITERAL(10, 98, 7), // "visible"
QT_MOC_LITERAL(11, 106, 13) // "updateLeftKey"

    },
    "cvv::qtutil::CVVMatch\0updateSettings\0"
    "\0MatchSettings&\0settings\0setPen\0pen\0"
    "setShow\0b\0updateRightKey\0visible\0"
    "updateLeftKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__CVVMatch[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       7,    1,   45,    2, 0x0a /* Public */,
       9,    1,   48,    2, 0x0a /* Public */,
      11,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QPen,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void cvv::qtutil::CVVMatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CVVMatch *_t = static_cast<CVVMatch *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateSettings((*reinterpret_cast< MatchSettings(*)>(_a[1]))); break;
        case 1: _t->setPen((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 2: _t->setShow((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->updateRightKey((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateLeftKey((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cvv::qtutil::CVVMatch::staticMetaObject = {
    { &QGraphicsObject::staticMetaObject, qt_meta_stringdata_cvv__qtutil__CVVMatch.data,
      qt_meta_data_cvv__qtutil__CVVMatch,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::CVVMatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::CVVMatch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__CVVMatch.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "cv::DMatch"))
        return static_cast< cv::DMatch*>(this);
    return QGraphicsObject::qt_metacast(_clname);
}

int cvv::qtutil::CVVMatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
