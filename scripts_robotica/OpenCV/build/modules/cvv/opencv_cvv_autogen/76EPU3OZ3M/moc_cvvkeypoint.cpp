/****************************************************************************
** Meta object code from reading C++ file 'cvvkeypoint.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/qtutil/matchview/cvvkeypoint.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cvvkeypoint.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__qtutil__CVVKeyPoint_t {
    QByteArrayData data[18];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__CVVKeyPoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__CVVKeyPoint_t qt_meta_stringdata_cvv__qtutil__CVVKeyPoint = {
    {
QT_MOC_LITERAL(0, 0, 24), // "cvv::qtutil::CVVKeyPoint"
QT_MOC_LITERAL(1, 25, 11), // "updatePoint"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "visible"
QT_MOC_LITERAL(4, 46, 14), // "updateSettings"
QT_MOC_LITERAL(5, 61, 17), // "KeyPointSettings&"
QT_MOC_LITERAL(6, 79, 8), // "settings"
QT_MOC_LITERAL(7, 88, 6), // "setPen"
QT_MOC_LITERAL(8, 95, 3), // "pen"
QT_MOC_LITERAL(9, 99, 8), // "setBrush"
QT_MOC_LITERAL(10, 108, 5), // "brush"
QT_MOC_LITERAL(11, 114, 7), // "setShow"
QT_MOC_LITERAL(12, 122, 1), // "b"
QT_MOC_LITERAL(13, 124, 14), // "updateImageSet"
QT_MOC_LITERAL(14, 139, 4), // "zoom"
QT_MOC_LITERAL(15, 144, 16), // "setZoomableImage"
QT_MOC_LITERAL(16, 161, 14), // "ZoomableImage*"
QT_MOC_LITERAL(17, 176, 5) // "image"

    },
    "cvv::qtutil::CVVKeyPoint\0updatePoint\0"
    "\0visible\0updateSettings\0KeyPointSettings&\0"
    "settings\0setPen\0pen\0setBrush\0brush\0"
    "setShow\0b\0updateImageSet\0zoom\0"
    "setZoomableImage\0ZoomableImage*\0image"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__CVVKeyPoint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x0a /* Public */,
       9,    1,   58,    2, 0x0a /* Public */,
      11,    1,   61,    2, 0x0a /* Public */,
      13,    2,   64,    2, 0x0a /* Public */,
      15,    1,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QPen,    8,
    QMetaType::Void, QMetaType::QBrush,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QRectF, QMetaType::QReal,    2,   14,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void cvv::qtutil::CVVKeyPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CVVKeyPoint *_t = static_cast<CVVKeyPoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatePoint((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateSettings((*reinterpret_cast< KeyPointSettings(*)>(_a[1]))); break;
        case 2: _t->setPen((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 3: _t->setBrush((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        case 4: _t->setShow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->updateImageSet((*reinterpret_cast< const QRectF(*)>(_a[1])),(*reinterpret_cast< const qreal(*)>(_a[2]))); break;
        case 6: _t->setZoomableImage((*reinterpret_cast< ZoomableImage*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ZoomableImage* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CVVKeyPoint::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CVVKeyPoint::updatePoint)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject cvv::qtutil::CVVKeyPoint::staticMetaObject = {
    { &QGraphicsObject::staticMetaObject, qt_meta_stringdata_cvv__qtutil__CVVKeyPoint.data,
      qt_meta_data_cvv__qtutil__CVVKeyPoint,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::CVVKeyPoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::CVVKeyPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__CVVKeyPoint.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "cv::KeyPoint"))
        return static_cast< cv::KeyPoint*>(this);
    return QGraphicsObject::qt_metacast(_clname);
}

int cvv::qtutil::CVVKeyPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void cvv::qtutil::CVVKeyPoint::updatePoint(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
