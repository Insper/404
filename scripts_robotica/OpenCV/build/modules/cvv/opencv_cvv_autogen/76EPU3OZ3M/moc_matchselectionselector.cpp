/****************************************************************************
** Meta object code from reading C++ file 'matchselectionselector.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/qtutil/matchview/matchselectionselector.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'matchselectionselector.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__qtutil__MatchSelectionSelector_t {
    QByteArrayData data[6];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__MatchSelectionSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__MatchSelectionSelector_t qt_meta_stringdata_cvv__qtutil__MatchSelectionSelector = {
    {
QT_MOC_LITERAL(0, 0, 35), // "cvv::qtutil::MatchSelectionSe..."
QT_MOC_LITERAL(1, 36, 6), // "remove"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 23), // "MatchSelectionSelector*"
QT_MOC_LITERAL(4, 68, 8), // "removeMe"
QT_MOC_LITERAL(5, 77, 14) // "changeSelector"

    },
    "cvv::qtutil::MatchSelectionSelector\0"
    "remove\0\0MatchSelectionSelector*\0"
    "removeMe\0changeSelector"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__MatchSelectionSelector[] = {

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

void cvv::qtutil::MatchSelectionSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MatchSelectionSelector *_t = static_cast<MatchSelectionSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->remove((*reinterpret_cast< MatchSelectionSelector*(*)>(_a[1]))); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MatchSelectionSelector* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MatchSelectionSelector::*_t)(MatchSelectionSelector * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MatchSelectionSelector::remove)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cvv::qtutil::MatchSelectionSelector::staticMetaObject = {
    { &MatchSelection::staticMetaObject, qt_meta_stringdata_cvv__qtutil__MatchSelectionSelector.data,
      qt_meta_data_cvv__qtutil__MatchSelectionSelector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::MatchSelectionSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::MatchSelectionSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__MatchSelectionSelector.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RegisterHelper<MatchSelection,std::vector<cv::DMatch>>"))
        return static_cast< RegisterHelper<MatchSelection,std::vector<cv::DMatch>>*>(this);
    return MatchSelection::qt_metacast(_clname);
}

int cvv::qtutil::MatchSelectionSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MatchSelection::qt_metacall(_c, _id, _a);
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
void cvv::qtutil::MatchSelectionSelector::remove(MatchSelectionSelector * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
