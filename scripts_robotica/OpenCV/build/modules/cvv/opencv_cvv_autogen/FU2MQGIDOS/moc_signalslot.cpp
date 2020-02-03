/****************************************************************************
** Meta object code from reading C++ file 'signalslot.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/qtutil/signalslot.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signalslot.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__qtutil__Signal_t {
    QByteArrayData data[3];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__Signal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__Signal_t qt_meta_stringdata_cvv__qtutil__Signal = {
    {
QT_MOC_LITERAL(0, 0, 19), // "cvv::qtutil::Signal"
QT_MOC_LITERAL(1, 20, 6), // "signal"
QT_MOC_LITERAL(2, 27, 0) // ""

    },
    "cvv::qtutil::Signal\0signal\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__Signal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void cvv::qtutil::Signal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Signal *_t = static_cast<Signal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Signal::*_t)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Signal::signal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cvv::qtutil::Signal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cvv__qtutil__Signal.data,
      qt_meta_data_cvv__qtutil__Signal,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::Signal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::Signal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__Signal.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cvv::qtutil::Signal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void cvv::qtutil::Signal::signal()const
{
    QMetaObject::activate(const_cast< cvv::qtutil::Signal *>(this), &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_cvv__qtutil__Slot_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__Slot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__Slot_t qt_meta_stringdata_cvv__qtutil__Slot = {
    {
QT_MOC_LITERAL(0, 0, 17), // "cvv::qtutil::Slot"
QT_MOC_LITERAL(1, 18, 4), // "slot"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "cvv::qtutil::Slot\0slot\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__Slot[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void cvv::qtutil::Slot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Slot *_t = static_cast<Slot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cvv::qtutil::Slot::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cvv__qtutil__Slot.data,
      qt_meta_data_cvv__qtutil__Slot,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::Slot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::Slot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__Slot.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cvv::qtutil::Slot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cvv__qtutil__SignalQString_t {
    QByteArrayData data[4];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__SignalQString_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__SignalQString_t qt_meta_stringdata_cvv__qtutil__SignalQString = {
    {
QT_MOC_LITERAL(0, 0, 26), // "cvv::qtutil::SignalQString"
QT_MOC_LITERAL(1, 27, 6), // "signal"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 1) // "t"

    },
    "cvv::qtutil::SignalQString\0signal\0\0t"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__SignalQString[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void cvv::qtutil::SignalQString::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SignalQString *_t = static_cast<SignalQString *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SignalQString::*_t)(QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalQString::signal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cvv::qtutil::SignalQString::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cvv__qtutil__SignalQString.data,
      qt_meta_data_cvv__qtutil__SignalQString,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::SignalQString::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::SignalQString::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__SignalQString.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cvv::qtutil::SignalQString::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void cvv::qtutil::SignalQString::signal(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< cvv::qtutil::SignalQString *>(this), &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_cvv__qtutil__SlotQString_t {
    QByteArrayData data[4];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__SlotQString_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__SlotQString_t qt_meta_stringdata_cvv__qtutil__SlotQString = {
    {
QT_MOC_LITERAL(0, 0, 24), // "cvv::qtutil::SlotQString"
QT_MOC_LITERAL(1, 25, 4), // "slot"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 1) // "t"

    },
    "cvv::qtutil::SlotQString\0slot\0\0t"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__SlotQString[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void cvv::qtutil::SlotQString::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SlotQString *_t = static_cast<SlotQString *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cvv::qtutil::SlotQString::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cvv__qtutil__SlotQString.data,
      qt_meta_data_cvv__qtutil__SlotQString,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::SlotQString::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::SlotQString::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__SlotQString.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cvv::qtutil::SlotQString::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_cvv__qtutil__SignalMatRef_t {
    QByteArrayData data[5];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__SignalMatRef_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__SignalMatRef_t qt_meta_stringdata_cvv__qtutil__SignalMatRef = {
    {
QT_MOC_LITERAL(0, 0, 25), // "cvv::qtutil::SignalMatRef"
QT_MOC_LITERAL(1, 26, 6), // "signal"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "cv::Mat&"
QT_MOC_LITERAL(4, 43, 3) // "mat"

    },
    "cvv::qtutil::SignalMatRef\0signal\0\0"
    "cv::Mat&\0mat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__SignalMatRef[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void cvv::qtutil::SignalMatRef::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SignalMatRef *_t = static_cast<SignalMatRef *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SignalMatRef::*_t)(cv::Mat & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalMatRef::signal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cvv::qtutil::SignalMatRef::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cvv__qtutil__SignalMatRef.data,
      qt_meta_data_cvv__qtutil__SignalMatRef,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::SignalMatRef::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::SignalMatRef::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__SignalMatRef.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cvv::qtutil::SignalMatRef::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void cvv::qtutil::SignalMatRef::signal(cv::Mat & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< cvv::qtutil::SignalMatRef *>(this), &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_cvv__qtutil__SlotBool_t {
    QByteArrayData data[4];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__SlotBool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__SlotBool_t qt_meta_stringdata_cvv__qtutil__SlotBool = {
    {
QT_MOC_LITERAL(0, 0, 21), // "cvv::qtutil::SlotBool"
QT_MOC_LITERAL(1, 22, 4), // "slot"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 1) // "t"

    },
    "cvv::qtutil::SlotBool\0slot\0\0t"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__SlotBool[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void cvv::qtutil::SlotBool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SlotBool *_t = static_cast<SlotBool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cvv::qtutil::SlotBool::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cvv__qtutil__SlotBool.data,
      qt_meta_data_cvv__qtutil__SlotBool,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::SlotBool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::SlotBool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__SlotBool.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cvv::qtutil::SlotBool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
