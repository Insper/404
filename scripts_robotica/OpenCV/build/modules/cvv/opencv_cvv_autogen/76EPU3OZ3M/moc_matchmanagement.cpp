/****************************************************************************
** Meta object code from reading C++ file 'matchmanagement.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/qtutil/matchview/matchmanagement.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'matchmanagement.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__qtutil__MatchManagement_t {
    QByteArrayData data[23];
    char stringdata0[335];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__MatchManagement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__MatchManagement_t qt_meta_stringdata_cvv__qtutil__MatchManagement = {
    {
QT_MOC_LITERAL(0, 0, 28), // "cvv::qtutil::MatchManagement"
QT_MOC_LITERAL(1, 29, 15), // "updateSelection"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 23), // "std::vector<cv::DMatch>"
QT_MOC_LITERAL(4, 70, 9), // "selection"
QT_MOC_LITERAL(5, 80, 24), // "applySettingsToSelection"
QT_MOC_LITERAL(6, 105, 14), // "MatchSettings&"
QT_MOC_LITERAL(7, 120, 14), // "addToSelection"
QT_MOC_LITERAL(8, 135, 10), // "cv::DMatch"
QT_MOC_LITERAL(9, 146, 5), // "match"
QT_MOC_LITERAL(10, 152, 15), // "singleSelection"
QT_MOC_LITERAL(11, 168, 12), // "setSelection"
QT_MOC_LITERAL(12, 181, 10), // "addSetting"
QT_MOC_LITERAL(13, 192, 13), // "removeSetting"
QT_MOC_LITERAL(14, 206, 22), // "MatchSettingsSelector*"
QT_MOC_LITERAL(15, 229, 7), // "setting"
QT_MOC_LITERAL(16, 237, 12), // "addSelection"
QT_MOC_LITERAL(17, 250, 15), // "removeSelection"
QT_MOC_LITERAL(18, 266, 23), // "MatchSelectionSelector*"
QT_MOC_LITERAL(19, 290, 8), // "selector"
QT_MOC_LITERAL(20, 299, 14), // "applySelection"
QT_MOC_LITERAL(21, 314, 9), // "selectAll"
QT_MOC_LITERAL(22, 324, 10) // "selectNone"

    },
    "cvv::qtutil::MatchManagement\0"
    "updateSelection\0\0std::vector<cv::DMatch>\0"
    "selection\0applySettingsToSelection\0"
    "MatchSettings&\0addToSelection\0cv::DMatch\0"
    "match\0singleSelection\0setSelection\0"
    "addSetting\0removeSetting\0"
    "MatchSettingsSelector*\0setting\0"
    "addSelection\0removeSelection\0"
    "MatchSelectionSelector*\0selector\0"
    "applySelection\0selectAll\0selectNone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__MatchManagement[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   80,    2, 0x0a /* Public */,
      10,    1,   83,    2, 0x0a /* Public */,
      11,    1,   86,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    1,   90,    2, 0x0a /* Public */,
      16,    0,   93,    2, 0x0a /* Public */,
      17,    1,   94,    2, 0x0a /* Public */,
      20,    0,   97,    2, 0x0a /* Public */,
      21,    0,   98,    2, 0x0a /* Public */,
      22,    0,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cvv::qtutil::MatchManagement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MatchManagement *_t = static_cast<MatchManagement *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateSelection((*reinterpret_cast< const std::vector<cv::DMatch>(*)>(_a[1]))); break;
        case 1: _t->applySettingsToSelection((*reinterpret_cast< MatchSettings(*)>(_a[1]))); break;
        case 2: _t->addToSelection((*reinterpret_cast< const cv::DMatch(*)>(_a[1]))); break;
        case 3: _t->singleSelection((*reinterpret_cast< const cv::DMatch(*)>(_a[1]))); break;
        case 4: _t->setSelection((*reinterpret_cast< const std::vector<cv::DMatch>(*)>(_a[1]))); break;
        case 5: _t->addSetting(); break;
        case 6: _t->removeSetting((*reinterpret_cast< MatchSettingsSelector*(*)>(_a[1]))); break;
        case 7: _t->addSelection(); break;
        case 8: _t->removeSelection((*reinterpret_cast< MatchSelectionSelector*(*)>(_a[1]))); break;
        case 9: _t->applySelection(); break;
        case 10: _t->selectAll(); break;
        case 11: _t->selectNone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MatchSettingsSelector* >(); break;
            }
            break;
        case 8:
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
            typedef void (MatchManagement::*_t)(const std::vector<cv::DMatch> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MatchManagement::updateSelection)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MatchManagement::*_t)(MatchSettings & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MatchManagement::applySettingsToSelection)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject cvv::qtutil::MatchManagement::staticMetaObject = {
    { &MatchSettings::staticMetaObject, qt_meta_stringdata_cvv__qtutil__MatchManagement.data,
      qt_meta_data_cvv__qtutil__MatchManagement,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::MatchManagement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::MatchManagement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__MatchManagement.stringdata0))
        return static_cast<void*>(this);
    return MatchSettings::qt_metacast(_clname);
}

int cvv::qtutil::MatchManagement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MatchSettings::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void cvv::qtutil::MatchManagement::updateSelection(const std::vector<cv::DMatch> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cvv::qtutil::MatchManagement::applySettingsToSelection(MatchSettings & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
