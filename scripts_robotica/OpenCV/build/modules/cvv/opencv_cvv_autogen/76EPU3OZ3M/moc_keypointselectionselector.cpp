/****************************************************************************
** Meta object code from reading C++ file 'keypointselectionselector.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/qtutil/matchview/keypointselectionselector.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keypointselectionselector.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__qtutil__KeyPointSelectionSelector_t {
    QByteArrayData data[6];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__KeyPointSelectionSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__KeyPointSelectionSelector_t qt_meta_stringdata_cvv__qtutil__KeyPointSelectionSelector = {
    {
QT_MOC_LITERAL(0, 0, 38), // "cvv::qtutil::KeyPointSelectio..."
QT_MOC_LITERAL(1, 39, 6), // "remove"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 26), // "KeyPointSelectionSelector*"
QT_MOC_LITERAL(4, 74, 8), // "removeMe"
QT_MOC_LITERAL(5, 83, 14) // "changeSelector"

    },
    "cvv::qtutil::KeyPointSelectionSelector\0"
    "remove\0\0KeyPointSelectionSelector*\0"
    "removeMe\0changeSelector"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__KeyPointSelectionSelector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cvv::qtutil::KeyPointSelectionSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KeyPointSelectionSelector *_t = static_cast<KeyPointSelectionSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->remove((*reinterpret_cast< KeyPointSelectionSelector*(*)>(_a[1]))); break;
        case 1: _t->removeMe(); break;
        case 2: _t->changeSelector(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KeyPointSelectionSelector* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (KeyPointSelectionSelector::*_t)(KeyPointSelectionSelector * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyPointSelectionSelector::remove)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cvv::qtutil::KeyPointSelectionSelector::staticMetaObject = {
    { &KeyPointSelection::staticMetaObject, qt_meta_stringdata_cvv__qtutil__KeyPointSelectionSelector.data,
      qt_meta_data_cvv__qtutil__KeyPointSelectionSelector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::KeyPointSelectionSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::KeyPointSelectionSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__KeyPointSelectionSelector.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RegisterHelper<KeyPointSelection,std::vector<cv::KeyPoint>>"))
        return static_cast< RegisterHelper<KeyPointSelection,std::vector<cv::KeyPoint>>*>(this);
    return KeyPointSelection::qt_metacast(_clname);
}

int cvv::qtutil::KeyPointSelectionSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KeyPointSelection::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void cvv::qtutil::KeyPointSelectionSelector::remove(KeyPointSelectionSelector * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
