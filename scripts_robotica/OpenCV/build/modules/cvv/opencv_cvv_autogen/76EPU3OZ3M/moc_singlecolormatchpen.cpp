/****************************************************************************
** Meta object code from reading C++ file 'singlecolormatchpen.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/qtutil/matchview/singlecolormatchpen.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'singlecolormatchpen.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__qtutil__SingleColorMatchPen_t {
    QByteArrayData data[5];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__SingleColorMatchPen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__SingleColorMatchPen_t qt_meta_stringdata_cvv__qtutil__SingleColorMatchPen = {
    {
QT_MOC_LITERAL(0, 0, 32), // "cvv::qtutil::SingleColorMatchPen"
QT_MOC_LITERAL(1, 33, 11), // "updateColor"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 5), // "color"
QT_MOC_LITERAL(4, 52, 18) // "colorButtonClicked"

    },
    "cvv::qtutil::SingleColorMatchPen\0"
    "updateColor\0\0color\0colorButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__SingleColorMatchPen[] = {

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
       4,    0,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void,

       0        // eod
};

void cvv::qtutil::SingleColorMatchPen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SingleColorMatchPen *_t = static_cast<SingleColorMatchPen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->colorButtonClicked(); break;
        default: ;
        }
    }
}

const QMetaObject cvv::qtutil::SingleColorMatchPen::staticMetaObject = {
    { &MatchSettings::staticMetaObject, qt_meta_stringdata_cvv__qtutil__SingleColorMatchPen.data,
      qt_meta_data_cvv__qtutil__SingleColorMatchPen,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::SingleColorMatchPen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::SingleColorMatchPen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__SingleColorMatchPen.stringdata0))
        return static_cast<void*>(this);
    return MatchSettings::qt_metacast(_clname);
}

int cvv::qtutil::SingleColorMatchPen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MatchSettings::qt_metacall(_c, _id, _a);
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
