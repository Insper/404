/****************************************************************************
** Meta object code from reading C++ file 'match_view.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/view/match_view.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'match_view.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__view__MatchView_t {
    QByteArrayData data[9];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__view__MatchView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__view__MatchView_t qt_meta_stringdata_cvv__view__MatchView = {
    {
QT_MOC_LITERAL(0, 0, 20), // "cvv::view::MatchView"
QT_MOC_LITERAL(1, 21, 16), // "updateLeftFooter"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "newText"
QT_MOC_LITERAL(4, 47, 18), // "updateRightFoooter"
QT_MOC_LITERAL(5, 66, 17), // "setMatchSelection"
QT_MOC_LITERAL(6, 84, 23), // "std::vector<cv::DMatch>"
QT_MOC_LITERAL(7, 108, 20), // "setKeyPointSelection"
QT_MOC_LITERAL(8, 129, 25) // "std::vector<cv::KeyPoint>"

    },
    "cvv::view::MatchView\0updateLeftFooter\0"
    "\0newText\0updateRightFoooter\0"
    "setMatchSelection\0std::vector<cv::DMatch>\0"
    "setKeyPointSelection\0std::vector<cv::KeyPoint>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__view__MatchView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void cvv::view::MatchView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MatchView *_t = static_cast<MatchView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateLeftFooter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->updateRightFoooter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setMatchSelection((*reinterpret_cast< std::vector<cv::DMatch>(*)>(_a[1]))); break;
        case 3: _t->setKeyPointSelection((*reinterpret_cast< std::vector<cv::KeyPoint>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MatchView::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MatchView::updateLeftFooter)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MatchView::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MatchView::updateRightFoooter)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject cvv::view::MatchView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cvv__view__MatchView.data,
      qt_meta_data_cvv__view__MatchView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::view::MatchView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::view::MatchView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__view__MatchView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int cvv::view::MatchView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void cvv::view::MatchView::updateLeftFooter(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cvv::view::MatchView::updateRightFoooter(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
