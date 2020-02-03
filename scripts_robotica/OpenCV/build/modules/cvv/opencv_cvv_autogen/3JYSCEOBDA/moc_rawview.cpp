/****************************************************************************
** Meta object code from reading C++ file 'rawview.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/view/rawview.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rawview.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__view__Rawview_t {
    QByteArrayData data[24];
    char stringdata0[345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__view__Rawview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__view__Rawview_t qt_meta_stringdata_cvv__view__Rawview = {
    {
QT_MOC_LITERAL(0, 0, 18), // "cvv::view::Rawview"
QT_MOC_LITERAL(1, 19, 16), // "updateLeftFooter"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "newText"
QT_MOC_LITERAL(4, 45, 17), // "updateRightFooter"
QT_MOC_LITERAL(5, 63, 15), // "matchesSelected"
QT_MOC_LITERAL(6, 79, 23), // "std::vector<cv::DMatch>"
QT_MOC_LITERAL(7, 103, 7), // "matches"
QT_MOC_LITERAL(8, 111, 17), // "keyPointsSelected"
QT_MOC_LITERAL(9, 129, 25), // "std::vector<cv::KeyPoint>"
QT_MOC_LITERAL(10, 155, 9), // "keyPoints"
QT_MOC_LITERAL(11, 165, 13), // "selectMatches"
QT_MOC_LITERAL(12, 179, 10), // "keyPoints1"
QT_MOC_LITERAL(13, 190, 10), // "keyPoints2"
QT_MOC_LITERAL(14, 201, 15), // "selectKeyPoints"
QT_MOC_LITERAL(15, 217, 17), // "setMatchSelection"
QT_MOC_LITERAL(16, 235, 20), // "setKeyPointSelection"
QT_MOC_LITERAL(17, 256, 24), // "matchesKeyPointsSelected"
QT_MOC_LITERAL(18, 281, 11), // "filterQuery"
QT_MOC_LITERAL(19, 293, 5), // "query"
QT_MOC_LITERAL(20, 299, 11), // "updateQuery"
QT_MOC_LITERAL(21, 311, 18), // "requestSuggestions"
QT_MOC_LITERAL(22, 330, 8), // "showHelp"
QT_MOC_LITERAL(23, 339, 5) // "topic"

    },
    "cvv::view::Rawview\0updateLeftFooter\0"
    "\0newText\0updateRightFooter\0matchesSelected\0"
    "std::vector<cv::DMatch>\0matches\0"
    "keyPointsSelected\0std::vector<cv::KeyPoint>\0"
    "keyPoints\0selectMatches\0keyPoints1\0"
    "keyPoints2\0selectKeyPoints\0setMatchSelection\0"
    "setKeyPointSelection\0matchesKeyPointsSelected\0"
    "filterQuery\0query\0updateQuery\0"
    "requestSuggestions\0showHelp\0topic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__view__Rawview[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       5,    1,   85,    2, 0x06 /* Public */,
       8,    1,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    3,   91,    2, 0x0a /* Public */,
      14,    1,   98,    2, 0x0a /* Public */,
      15,    1,  101,    2, 0x0a /* Public */,
      16,    1,  104,    2, 0x0a /* Public */,
      17,    1,  107,    2, 0x0a /* Public */,
      18,    1,  110,    2, 0x08 /* Private */,
      20,    1,  113,    2, 0x08 /* Private */,
      21,    1,  116,    2, 0x08 /* Private */,
      22,    1,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 6,   12,   13,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   23,

       0        // eod
};

void cvv::view::Rawview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Rawview *_t = static_cast<Rawview *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateLeftFooter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->updateRightFooter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->matchesSelected((*reinterpret_cast< const std::vector<cv::DMatch>(*)>(_a[1]))); break;
        case 3: _t->keyPointsSelected((*reinterpret_cast< const std::vector<cv::KeyPoint>(*)>(_a[1]))); break;
        case 4: _t->selectMatches((*reinterpret_cast< const std::vector<cv::KeyPoint>(*)>(_a[1])),(*reinterpret_cast< const std::vector<cv::KeyPoint>(*)>(_a[2])),(*reinterpret_cast< const std::vector<cv::DMatch>(*)>(_a[3]))); break;
        case 5: _t->selectKeyPoints((*reinterpret_cast< const std::vector<cv::KeyPoint>(*)>(_a[1]))); break;
        case 6: _t->setMatchSelection((*reinterpret_cast< std::vector<cv::DMatch>(*)>(_a[1]))); break;
        case 7: _t->setKeyPointSelection((*reinterpret_cast< std::vector<cv::KeyPoint>(*)>(_a[1]))); break;
        case 8: _t->matchesKeyPointsSelected((*reinterpret_cast< const std::vector<cv::DMatch>(*)>(_a[1]))); break;
        case 9: _t->filterQuery((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->updateQuery((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->requestSuggestions((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->showHelp((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Rawview::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Rawview::updateLeftFooter)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Rawview::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Rawview::updateRightFooter)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Rawview::*_t)(const std::vector<cv::DMatch> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Rawview::matchesSelected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Rawview::*_t)(const std::vector<cv::KeyPoint> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Rawview::keyPointsSelected)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject cvv::view::Rawview::staticMetaObject = {
    { &MatchView::staticMetaObject, qt_meta_stringdata_cvv__view__Rawview.data,
      qt_meta_data_cvv__view__Rawview,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::view::Rawview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::view::Rawview::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__view__Rawview.stringdata0))
        return static_cast<void*>(this);
    return MatchView::qt_metacast(_clname);
}

int cvv::view::Rawview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MatchView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void cvv::view::Rawview::updateLeftFooter(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cvv::view::Rawview::updateRightFooter(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void cvv::view::Rawview::matchesSelected(const std::vector<cv::DMatch> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void cvv::view::Rawview::keyPointsSelected(const std::vector<cv::KeyPoint> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
