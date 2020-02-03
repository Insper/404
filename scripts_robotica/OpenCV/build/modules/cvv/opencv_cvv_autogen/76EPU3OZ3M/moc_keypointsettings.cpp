/****************************************************************************
** Meta object code from reading C++ file 'keypointsettings.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/qtutil/matchview/keypointsettings.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keypointsettings.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__qtutil__KeyPointSettings_t {
    QByteArrayData data[5];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__KeyPointSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__KeyPointSettings_t qt_meta_stringdata_cvv__qtutil__KeyPointSettings = {
    {
QT_MOC_LITERAL(0, 0, 29), // "cvv::qtutil::KeyPointSettings"
QT_MOC_LITERAL(1, 30, 15), // "settingsChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 17), // "KeyPointSettings&"
QT_MOC_LITERAL(4, 65, 9) // "updateAll"

    },
    "cvv::qtutil::KeyPointSettings\0"
    "settingsChanged\0\0KeyPointSettings&\0"
    "updateAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__KeyPointSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void cvv::qtutil::KeyPointSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KeyPointSettings *_t = static_cast<KeyPointSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->settingsChanged((*reinterpret_cast< KeyPointSettings(*)>(_a[1]))); break;
        case 1: _t->updateAll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (KeyPointSettings::*_t)(KeyPointSettings & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KeyPointSettings::settingsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cvv::qtutil::KeyPointSettings::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_cvv__qtutil__KeyPointSettings.data,
      qt_meta_data_cvv__qtutil__KeyPointSettings,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::KeyPointSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::KeyPointSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__KeyPointSettings.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int cvv::qtutil::KeyPointSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void cvv::qtutil::KeyPointSettings::settingsChanged(KeyPointSettings & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
