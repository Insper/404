/****************************************************************************
** Meta object code from reading C++ file 'zoomableimageoptpanel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/qtutil/zoomableimageoptpanel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zoomableimageoptpanel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__qtutil__ZoomableOptPanel_t {
    QByteArrayData data[9];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__ZoomableOptPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__ZoomableOptPanel_t qt_meta_stringdata_cvv__qtutil__ZoomableOptPanel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "cvv::qtutil::ZoomableOptPanel"
QT_MOC_LITERAL(1, 30, 9), // "updateMat"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 7), // "cv::Mat"
QT_MOC_LITERAL(4, 49, 3), // "mat"
QT_MOC_LITERAL(5, 53, 19), // "updateConvertStatus"
QT_MOC_LITERAL(6, 73, 21), // "ImageConversionResult"
QT_MOC_LITERAL(7, 95, 6), // "result"
QT_MOC_LITERAL(8, 102, 7) // "setZoom"

    },
    "cvv::qtutil::ZoomableOptPanel\0updateMat\0"
    "\0cv::Mat\0mat\0updateConvertStatus\0"
    "ImageConversionResult\0result\0setZoom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__ZoomableOptPanel[] = {

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
       1,    1,   29,    2, 0x0a /* Public */,
       5,    2,   32,    2, 0x0a /* Public */,
       8,    2,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    2,    7,
    QMetaType::Void, QMetaType::QRectF, QMetaType::QReal,    2,    2,

       0        // eod
};

void cvv::qtutil::ZoomableOptPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZoomableOptPanel *_t = static_cast<ZoomableOptPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMat((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 1: _t->updateConvertStatus((*reinterpret_cast< const cv::Mat(*)>(_a[1])),(*reinterpret_cast< ImageConversionResult(*)>(_a[2]))); break;
        case 2: _t->setZoom((*reinterpret_cast< QRectF(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject cvv::qtutil::ZoomableOptPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cvv__qtutil__ZoomableOptPanel.data,
      qt_meta_data_cvv__qtutil__ZoomableOptPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::ZoomableOptPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::ZoomableOptPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__ZoomableOptPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int cvv::qtutil::ZoomableOptPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
