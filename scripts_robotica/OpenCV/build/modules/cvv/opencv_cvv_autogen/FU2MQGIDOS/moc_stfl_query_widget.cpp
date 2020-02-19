/****************************************************************************
** Meta object code from reading C++ file 'stfl_query_widget.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/qtutil/stfl_query_widget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stfl_query_widget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__qtutil__STFLQueryWidget_t {
    QByteArrayData data[11];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__STFLQueryWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__STFLQueryWidget_t qt_meta_stringdata_cvv__qtutil__STFLQueryWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "cvv::qtutil::STFLQueryWidget"
QT_MOC_LITERAL(1, 29, 12), // "filterSignal"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "query"
QT_MOC_LITERAL(4, 49, 15), // "userInputUpdate"
QT_MOC_LITERAL(5, 65, 18), // "requestSuggestions"
QT_MOC_LITERAL(6, 84, 8), // "showHelp"
QT_MOC_LITERAL(7, 93, 5), // "topic"
QT_MOC_LITERAL(8, 99, 13), // "returnPressed"
QT_MOC_LITERAL(9, 113, 11), // "textChanged"
QT_MOC_LITERAL(10, 125, 13) // "helpRequested"

    },
    "cvv::qtutil::STFLQueryWidget\0filterSignal\0"
    "\0query\0userInputUpdate\0requestSuggestions\0"
    "showHelp\0topic\0returnPressed\0textChanged\0"
    "helpRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__STFLQueryWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       5,    1,   55,    2, 0x06 /* Public */,
       6,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cvv::qtutil::STFLQueryWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STFLQueryWidget *_t = static_cast<STFLQueryWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filterSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->userInputUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->requestSuggestions((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->showHelp((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->returnPressed(); break;
        case 5: _t->textChanged(); break;
        case 6: _t->helpRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (STFLQueryWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STFLQueryWidget::filterSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (STFLQueryWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STFLQueryWidget::userInputUpdate)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (STFLQueryWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STFLQueryWidget::requestSuggestions)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (STFLQueryWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STFLQueryWidget::showHelp)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject cvv::qtutil::STFLQueryWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cvv__qtutil__STFLQueryWidget.data,
      qt_meta_data_cvv__qtutil__STFLQueryWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::STFLQueryWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::STFLQueryWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__STFLQueryWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int cvv::qtutil::STFLQueryWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void cvv::qtutil::STFLQueryWidget::filterSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cvv::qtutil::STFLQueryWidget::userInputUpdate(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void cvv::qtutil::STFLQueryWidget::requestSuggestions(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void cvv::qtutil::STFLQueryWidget::showHelp(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
