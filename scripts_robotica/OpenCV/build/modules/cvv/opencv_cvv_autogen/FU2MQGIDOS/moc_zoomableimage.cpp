/****************************************************************************
** Meta object code from reading C++ file 'zoomableimage.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/qtutil/zoomableimage.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zoomableimage.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__qtutil__ZoomableImage_t {
    QByteArrayData data[34];
    char stringdata0[394];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__ZoomableImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__ZoomableImage_t qt_meta_stringdata_cvv__qtutil__ZoomableImage = {
    {
QT_MOC_LITERAL(0, 0, 26), // "cvv::qtutil::ZoomableImage"
QT_MOC_LITERAL(1, 27, 22), // "updateConversionResult"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 7), // "cv::Mat"
QT_MOC_LITERAL(4, 59, 21), // "ImageConversionResult"
QT_MOC_LITERAL(5, 81, 10), // "updateArea"
QT_MOC_LITERAL(6, 92, 16), // "updateMouseHover"
QT_MOC_LITERAL(7, 109, 7), // "setArea"
QT_MOC_LITERAL(8, 117, 4), // "rect"
QT_MOC_LITERAL(9, 122, 4), // "zoom"
QT_MOC_LITERAL(10, 127, 7), // "setMatR"
QT_MOC_LITERAL(11, 135, 8), // "cv::Mat&"
QT_MOC_LITERAL(12, 144, 3), // "mat"
QT_MOC_LITERAL(13, 148, 6), // "setMat"
QT_MOC_LITERAL(14, 155, 7), // "setZoom"
QT_MOC_LITERAL(15, 163, 6), // "factor"
QT_MOC_LITERAL(16, 170, 17), // "setAutoShowValues"
QT_MOC_LITERAL(17, 188, 6), // "enable"
QT_MOC_LITERAL(18, 195, 12), // "setThreshold"
QT_MOC_LITERAL(19, 208, 9), // "threshold"
QT_MOC_LITERAL(20, 218, 13), // "showFullImage"
QT_MOC_LITERAL(21, 232, 17), // "setCTRLZoomFactor"
QT_MOC_LITERAL(22, 250, 22), // "setCTRLShiftZoomFactor"
QT_MOC_LITERAL(23, 273, 10), // "wheelEvent"
QT_MOC_LITERAL(24, 284, 12), // "QWheelEvent*"
QT_MOC_LITERAL(25, 297, 5), // "event"
QT_MOC_LITERAL(26, 303, 18), // "setUpdateAreaDelay"
QT_MOC_LITERAL(27, 322, 1), // "i"
QT_MOC_LITERAL(28, 324, 12), // "viewScrolled"
QT_MOC_LITERAL(29, 337, 10), // "drawValues"
QT_MOC_LITERAL(30, 348, 10), // "rightClick"
QT_MOC_LITERAL(31, 359, 3), // "pos"
QT_MOC_LITERAL(32, 363, 14), // "emitUpdateArea"
QT_MOC_LITERAL(33, 378, 15) // "queueUpdateArea"

    },
    "cvv::qtutil::ZoomableImage\0"
    "updateConversionResult\0\0cv::Mat\0"
    "ImageConversionResult\0updateArea\0"
    "updateMouseHover\0setArea\0rect\0zoom\0"
    "setMatR\0cv::Mat&\0mat\0setMat\0setZoom\0"
    "factor\0setAutoShowValues\0enable\0"
    "setThreshold\0threshold\0showFullImage\0"
    "setCTRLZoomFactor\0setCTRLShiftZoomFactor\0"
    "wheelEvent\0QWheelEvent*\0event\0"
    "setUpdateAreaDelay\0i\0viewScrolled\0"
    "drawValues\0rightClick\0pos\0emitUpdateArea\0"
    "queueUpdateArea"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__ZoomableImage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  134,    2, 0x06 /* Public */,
       5,    2,  139,    2, 0x06 /* Public */,
       6,    3,  144,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,  151,    2, 0x0a /* Public */,
      10,    1,  156,    2, 0x0a /* Public */,
      13,    1,  159,    2, 0x0a /* Public */,
      14,    1,  162,    2, 0x0a /* Public */,
      14,    0,  165,    2, 0x2a /* Public | MethodCloned */,
      16,    1,  166,    2, 0x0a /* Public */,
      16,    0,  169,    2, 0x2a /* Public | MethodCloned */,
      18,    1,  170,    2, 0x0a /* Public */,
      18,    0,  173,    2, 0x2a /* Public | MethodCloned */,
      20,    0,  174,    2, 0x0a /* Public */,
      21,    1,  175,    2, 0x0a /* Public */,
      21,    0,  178,    2, 0x2a /* Public | MethodCloned */,
      22,    1,  179,    2, 0x0a /* Public */,
      22,    0,  182,    2, 0x2a /* Public | MethodCloned */,
      23,    1,  183,    2, 0x0a /* Public */,
      26,    1,  186,    2, 0x0a /* Public */,
      28,    0,  189,    2, 0x08 /* Private */,
      29,    0,  190,    2, 0x08 /* Private */,
      30,    1,  191,    2, 0x08 /* Private */,
      32,    0,  194,    2, 0x08 /* Private */,
      33,    0,  195,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, QMetaType::QRectF, QMetaType::QReal,    2,    2,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QString, QMetaType::Bool,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QRectF, QMetaType::QReal,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 3,   12,
    QMetaType::Void, QMetaType::QReal,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   31,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cvv::qtutil::ZoomableImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZoomableImage *_t = static_cast<ZoomableImage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateConversionResult((*reinterpret_cast< const cv::Mat(*)>(_a[1])),(*reinterpret_cast< ImageConversionResult(*)>(_a[2]))); break;
        case 1: _t->updateArea((*reinterpret_cast< QRectF(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 2: _t->updateMouseHover((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->setArea((*reinterpret_cast< QRectF(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 4: _t->setMatR((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 5: _t->setMat((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 6: _t->setZoom((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->setZoom(); break;
        case 8: _t->setAutoShowValues((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setAutoShowValues(); break;
        case 10: _t->setThreshold((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 11: _t->setThreshold(); break;
        case 12: _t->showFullImage(); break;
        case 13: _t->setCTRLZoomFactor((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 14: _t->setCTRLZoomFactor(); break;
        case 15: _t->setCTRLShiftZoomFactor((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 16: _t->setCTRLShiftZoomFactor(); break;
        case 17: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 18: _t->setUpdateAreaDelay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->viewScrolled(); break;
        case 20: _t->drawValues(); break;
        case 21: _t->rightClick((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 22: _t->emitUpdateArea(); break;
        case 23: _t->queueUpdateArea(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ZoomableImage::*_t)(const cv::Mat & , ImageConversionResult ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZoomableImage::updateConversionResult)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ZoomableImage::*_t)(QRectF , qreal ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZoomableImage::updateArea)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ZoomableImage::*_t)(QPointF , QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZoomableImage::updateMouseHover)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject cvv::qtutil::ZoomableImage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cvv__qtutil__ZoomableImage.data,
      qt_meta_data_cvv__qtutil__ZoomableImage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::ZoomableImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::ZoomableImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__ZoomableImage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int cvv::qtutil::ZoomableImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void cvv::qtutil::ZoomableImage::updateConversionResult(const cv::Mat & _t1, ImageConversionResult _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< cvv::qtutil::ZoomableImage *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cvv::qtutil::ZoomableImage::updateArea(QRectF _t1, qreal _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< cvv::qtutil::ZoomableImage *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void cvv::qtutil::ZoomableImage::updateMouseHover(QPointF _t1, QString _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
