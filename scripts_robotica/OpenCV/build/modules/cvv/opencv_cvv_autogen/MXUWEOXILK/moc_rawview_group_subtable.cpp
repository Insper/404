/****************************************************************************
** Meta object code from reading C++ file 'rawview_group_subtable.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/gui/rawview_group_subtable.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rawview_group_subtable.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__gui__RawviewGroupSubtable_t {
    QByteArrayData data[14];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__gui__RawviewGroupSubtable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__gui__RawviewGroupSubtable_t qt_meta_stringdata_cvv__gui__RawviewGroupSubtable = {
    {
QT_MOC_LITERAL(0, 0, 30), // "cvv::gui::RawviewGroupSubtable"
QT_MOC_LITERAL(1, 31, 17), // "setMatchSelection"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 23), // "std::vector<cv::DMatch>"
QT_MOC_LITERAL(4, 74, 7), // "matches"
QT_MOC_LITERAL(5, 82, 20), // "setKeyPointSelection"
QT_MOC_LITERAL(6, 103, 25), // "std::vector<cv::KeyPoint>"
QT_MOC_LITERAL(7, 129, 9), // "keyPoints"
QT_MOC_LITERAL(8, 139, 19), // "customMenuRequested"
QT_MOC_LITERAL(9, 159, 8), // "location"
QT_MOC_LITERAL(10, 168, 16), // "customMenuAction"
QT_MOC_LITERAL(11, 185, 8), // "QAction*"
QT_MOC_LITERAL(12, 194, 6), // "action"
QT_MOC_LITERAL(13, 201, 16) // "selectionChanged"

    },
    "cvv::gui::RawviewGroupSubtable\0"
    "setMatchSelection\0\0std::vector<cv::DMatch>\0"
    "matches\0setKeyPointSelection\0"
    "std::vector<cv::KeyPoint>\0keyPoints\0"
    "customMenuRequested\0location\0"
    "customMenuAction\0QAction*\0action\0"
    "selectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__gui__RawviewGroupSubtable[] = {

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
       8,    1,   45,    2, 0x08 /* Private */,
      10,    1,   48,    2, 0x08 /* Private */,
      13,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QPoint,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,

       0        // eod
};

void cvv::gui::RawviewGroupSubtable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RawviewGroupSubtable *_t = static_cast<RawviewGroupSubtable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setMatchSelection((*reinterpret_cast< std::vector<cv::DMatch>(*)>(_a[1]))); break;
        case 1: _t->setKeyPointSelection((*reinterpret_cast< std::vector<cv::KeyPoint>(*)>(_a[1]))); break;
        case 2: _t->customMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->customMenuAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->selectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject cvv::gui::RawviewGroupSubtable::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cvv__gui__RawviewGroupSubtable.data,
      qt_meta_data_cvv__gui__RawviewGroupSubtable,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::gui::RawviewGroupSubtable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::gui::RawviewGroupSubtable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__gui__RawviewGroupSubtable.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int cvv::gui::RawviewGroupSubtable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
