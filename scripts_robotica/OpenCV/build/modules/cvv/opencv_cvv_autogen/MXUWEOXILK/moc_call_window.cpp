/****************************************************************************
** Meta object code from reading C++ file 'call_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../opencv_contrib/modules/cvv/src/gui/call_window.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'call_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cvv__gui__CallWindow_t {
    QByteArrayData data[15];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cvv__gui__CallWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cvv__gui__CallWindow_t qt_meta_stringdata_cvv__gui__CallWindow = {
    {
QT_MOC_LITERAL(0, 0, 20), // "cvv::gui::CallWindow"
QT_MOC_LITERAL(1, 21, 16), // "updateLeftFooter"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "newText"
QT_MOC_LITERAL(4, 47, 17), // "updateRightFooter"
QT_MOC_LITERAL(5, 65, 20), // "contextMenuRequested"
QT_MOC_LITERAL(6, 86, 8), // "location"
QT_MOC_LITERAL(7, 95, 17), // "contextMenuAction"
QT_MOC_LITERAL(8, 113, 8), // "QAction*"
QT_MOC_LITERAL(9, 122, 6), // "action"
QT_MOC_LITERAL(10, 129, 17), // "tabCloseRequested"
QT_MOC_LITERAL(11, 147, 5), // "index"
QT_MOC_LITERAL(12, 153, 4), // "step"
QT_MOC_LITERAL(13, 158, 11), // "fastForward"
QT_MOC_LITERAL(14, 170, 8) // "closeApp"

    },
    "cvv::gui::CallWindow\0updateLeftFooter\0"
    "\0newText\0updateRightFooter\0"
    "contextMenuRequested\0location\0"
    "contextMenuAction\0QAction*\0action\0"
    "tabCloseRequested\0index\0step\0fastForward\0"
    "closeApp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cvv__gui__CallWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    1,   57,    2, 0x0a /* Public */,
       5,    1,   60,    2, 0x08 /* Private */,
       7,    1,   63,    2, 0x08 /* Private */,
      10,    1,   66,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,
      13,    0,   70,    2, 0x08 /* Private */,
      14,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cvv::gui::CallWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CallWindow *_t = static_cast<CallWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateLeftFooter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->updateRightFooter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->contextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->contextMenuAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->step(); break;
        case 6: _t->fastForward(); break;
        case 7: _t->closeApp(); break;
        default: ;
        }
    }
}

const QMetaObject cvv::gui::CallWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_cvv__gui__CallWindow.data,
      qt_meta_data_cvv__gui__CallWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cvv::gui::CallWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cvv::gui::CallWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cvv__gui__CallWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int cvv::gui::CallWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
