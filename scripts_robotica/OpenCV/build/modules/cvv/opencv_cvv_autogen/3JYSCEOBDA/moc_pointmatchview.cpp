/****************************************************************************
** Meta object code from reading C++ file 'pointmatchview.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/view/pointmatchview.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pointmatchview.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__view__PointMatchView_t {
    QByteArrayData data[8];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__view__PointMatchView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__view__PointMatchView_t qt_meta_stringdata_cvv__view__PointMatchView = {
    {
QT_MOC_LITERAL(0, 0, 25), // "cvv::view::PointMatchView"
QT_MOC_LITERAL(1, 26, 17), // "setMatchSelection"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 23), // "std::vector<cv::DMatch>"
QT_MOC_LITERAL(4, 69, 9), // "selection"
QT_MOC_LITERAL(5, 79, 19), // "updateMousHoverOver"
QT_MOC_LITERAL(6, 99, 2), // "pt"
QT_MOC_LITERAL(7, 102, 3) // "str"

    },
    "cvv::view::PointMatchView\0setMatchSelection\0"
    "\0std::vector<cv::DMatch>\0selection\0"
    "updateMousHoverOver\0pt\0str"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__view__PointMatchView[] = {

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
       5,    3,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QString, QMetaType::Bool,    6,    7,    2,

       0        // eod
};

void cvv::view::PointMatchView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PointMatchView *_t = static_cast<PointMatchView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setMatchSelection((*reinterpret_cast< std::vector<cv::DMatch>(*)>(_a[1]))); break;
        case 1: _t->updateMousHoverOver((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject cvv::view::PointMatchView::staticMetaObject = {
    { &MatchView::staticMetaObject, qt_meta_stringdata_cvv__view__PointMatchView.data,
      qt_meta_data_cvv__view__PointMatchView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::view::PointMatchView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::view::PointMatchView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__view__PointMatchView.stringdata0))
        return static_cast<void*>(this);
    return MatchView::qt_metacast(_clname);
}

int cvv::view::PointMatchView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MatchView::qt_metacall(_c, _id, _a);
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
