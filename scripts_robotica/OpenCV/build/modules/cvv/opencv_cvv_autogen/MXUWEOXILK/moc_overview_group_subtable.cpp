/****************************************************************************
** Meta object code from reading C++ file 'overview_group_subtable.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/gui/overview_group_subtable.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overview_group_subtable.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__gui__OverviewGroupSubtable_t {
    QByteArrayData data[10];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__gui__OverviewGroupSubtable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__gui__OverviewGroupSubtable_t qt_meta_stringdata_cvv__gui__OverviewGroupSubtable = {
    {
QT_MOC_LITERAL(0, 0, 31), // "cvv::gui::OverviewGroupSubtable"
QT_MOC_LITERAL(1, 32, 10), // "rowClicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 3), // "row"
QT_MOC_LITERAL(4, 48, 7), // "collumn"
QT_MOC_LITERAL(5, 56, 19), // "customMenuRequested"
QT_MOC_LITERAL(6, 76, 8), // "location"
QT_MOC_LITERAL(7, 85, 16), // "customMenuAction"
QT_MOC_LITERAL(8, 102, 8), // "QAction*"
QT_MOC_LITERAL(9, 111, 6) // "action"

    },
    "cvv::gui::OverviewGroupSubtable\0"
    "rowClicked\0\0row\0collumn\0customMenuRequested\0"
    "location\0customMenuAction\0QAction*\0"
    "action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__gui__OverviewGroupSubtable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x08 /* Private */,
       5,    1,   34,    2, 0x08 /* Private */,
       7,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void cvv::gui::OverviewGroupSubtable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OverviewGroupSubtable *_t = static_cast<OverviewGroupSubtable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rowClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->customMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->customMenuAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject cvv::gui::OverviewGroupSubtable::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cvv__gui__OverviewGroupSubtable.data,
      qt_meta_data_cvv__gui__OverviewGroupSubtable,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::gui::OverviewGroupSubtable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::gui::OverviewGroupSubtable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__gui__OverviewGroupSubtable.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int cvv::gui::OverviewGroupSubtable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
