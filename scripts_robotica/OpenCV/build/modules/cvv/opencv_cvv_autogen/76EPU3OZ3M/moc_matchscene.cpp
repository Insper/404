/****************************************************************************
** Meta object code from reading C++ file 'matchscene.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/qtutil/matchview/matchscene.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'matchscene.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__qtutil__structures__MatchSceneGraphicsView_t {
    QByteArrayData data[4];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__structures__MatchSceneGraphicsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__structures__MatchSceneGraphicsView_t qt_meta_stringdata_cvv__qtutil__structures__MatchSceneGraphicsView = {
    {
QT_MOC_LITERAL(0, 0, 47), // "cvv::qtutil::structures::Matc..."
QT_MOC_LITERAL(1, 48, 13), // "signalResized"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 17) // "signalContextMenu"

    },
    "cvv::qtutil::structures::MatchSceneGraphicsView\0"
    "signalResized\0\0signalContextMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__structures__MatchSceneGraphicsView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,

       0        // eod
};

void cvv::qtutil::structures::MatchSceneGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MatchSceneGraphicsView *_t = static_cast<MatchSceneGraphicsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalResized(); break;
        case 1: _t->signalContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MatchSceneGraphicsView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MatchSceneGraphicsView::signalResized)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MatchSceneGraphicsView::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MatchSceneGraphicsView::signalContextMenu)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject cvv::qtutil::structures::MatchSceneGraphicsView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_cvv__qtutil__structures__MatchSceneGraphicsView.data,
      qt_meta_data_cvv__qtutil__structures__MatchSceneGraphicsView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::structures::MatchSceneGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::structures::MatchSceneGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__structures__MatchSceneGraphicsView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int cvv::qtutil::structures::MatchSceneGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void cvv::qtutil::structures::MatchSceneGraphicsView::signalResized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void cvv::qtutil::structures::MatchSceneGraphicsView::signalContextMenu(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_cvv__qtutil__MatchScene_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__qtutil__MatchScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__qtutil__MatchScene_t qt_meta_stringdata_cvv__qtutil__MatchScene = {
    {
QT_MOC_LITERAL(0, 0, 23), // "cvv::qtutil::MatchScene"
QT_MOC_LITERAL(1, 24, 16), // "selectAllVisible"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 10), // "viewReized"
QT_MOC_LITERAL(4, 53, 10), // "rightClick"
QT_MOC_LITERAL(5, 64, 3) // "pos"

    },
    "cvv::qtutil::MatchScene\0selectAllVisible\0"
    "\0viewReized\0rightClick\0pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__qtutil__MatchScene[] = {

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
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    5,

       0        // eod
};

void cvv::qtutil::MatchScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MatchScene *_t = static_cast<MatchScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectAllVisible(); break;
        case 1: _t->viewReized(); break;
        case 2: _t->rightClick((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cvv::qtutil::MatchScene::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_cvv__qtutil__MatchScene.data,
      qt_meta_data_cvv__qtutil__MatchScene,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::qtutil::MatchScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::qtutil::MatchScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__qtutil__MatchScene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int cvv::qtutil::MatchScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
