/****************************************************************************
** Meta object code from reading C++ file 'rawview_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/qtutil/matchview/rawview_window.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rawview_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__qtutil__RawviewWindow_t {
    QByteArrayData data[10];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__RawviewWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__RawviewWindow_t qt_meta_stringdata_cvv__qtutil__RawviewWindow = {
    {
QT_MOC_LITERAL(0, 0, 26), // "cvv::qtutil::RawviewWindow"
QT_MOC_LITERAL(1, 27, 15), // "matchesSelected"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 23), // "std::vector<cv::DMatch>"
QT_MOC_LITERAL(4, 68, 7), // "matches"
QT_MOC_LITERAL(5, 76, 17), // "keyPointsSelected"
QT_MOC_LITERAL(6, 94, 25), // "std::vector<cv::KeyPoint>"
QT_MOC_LITERAL(7, 120, 9), // "keyPoints"
QT_MOC_LITERAL(8, 130, 13), // "selectMatches"
QT_MOC_LITERAL(9, 144, 15) // "selectKeyPoints"

    },
    "cvv::qtutil::RawviewWindow\0matchesSelected\0"
    "\0std::vector<cv::DMatch>\0matches\0"
    "keyPointsSelected\0std::vector<cv::KeyPoint>\0"
    "keyPoints\0selectMatches\0selectKeyPoints"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__RawviewWindow[] = {

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
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   40,    2, 0x0a /* Public */,
       9,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void cvv::qtutil::RawviewWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RawviewWindow *_t = static_cast<RawviewWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->matchesSelected((*reinterpret_cast< const std::vector<cv::DMatch>(*)>(_a[1]))); break;
        case 1: _t->keyPointsSelected((*reinterpret_cast< const std::vector<cv::KeyPoint>(*)>(_a[1]))); break;
        case 2: _t->selectMatches((*reinterpret_cast< const std::vector<cv::DMatch>(*)>(_a[1]))); break;
        case 3: _t->selectKeyPoints((*reinterpret_cast< const std::vector<cv::KeyPoint>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RawviewWindow::*_t)(const std::vector<cv::DMatch> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RawviewWindow::matchesSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RawviewWindow::*_t)(const std::vector<cv::KeyPoint> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RawviewWindow::keyPointsSelected)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject cvv::qtutil::RawviewWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_cvv__qtutil__RawviewWindow.data,
      qt_meta_data_cvv__qtutil__RawviewWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::RawviewWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::RawviewWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__RawviewWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int cvv::qtutil::RawviewWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void cvv::qtutil::RawviewWindow::matchesSelected(const std::vector<cv::DMatch> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cvv::qtutil::RawviewWindow::keyPointsSelected(const std::vector<cv::KeyPoint> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
