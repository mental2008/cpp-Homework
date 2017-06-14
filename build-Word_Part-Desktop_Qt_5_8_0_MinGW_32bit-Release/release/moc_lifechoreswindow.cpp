/****************************************************************************
** Meta object code from reading C++ file 'lifechoreswindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Word_Part/lifechoreswindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lifechoreswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LifeChoresWindow_t {
    QByteArrayData data[11];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LifeChoresWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LifeChoresWindow_t qt_meta_stringdata_LifeChoresWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "LifeChoresWindow"
QT_MOC_LITERAL(1, 17, 8), // "sendData"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 18), // "on_AddNote_clicked"
QT_MOC_LITERAL(4, 46, 18), // "on_Refresh_pressed"
QT_MOC_LITERAL(5, 65, 31), // "on_ListOfNote_itemDoubleClicked"
QT_MOC_LITERAL(6, 97, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(7, 114, 4), // "item"
QT_MOC_LITERAL(8, 119, 21), // "on_DeleteNote_pressed"
QT_MOC_LITERAL(9, 141, 19), // "on_EditNote_pressed"
QT_MOC_LITERAL(10, 161, 22) // "on_ListAllNote_pressed"

    },
    "LifeChoresWindow\0sendData\0\0"
    "on_AddNote_clicked\0on_Refresh_pressed\0"
    "on_ListOfNote_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0on_DeleteNote_pressed\0"
    "on_EditNote_pressed\0on_ListAllNote_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LifeChoresWindow[] = {

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
       3,    0,   52,    2, 0x08 /* Private */,
       4,    0,   53,    2, 0x08 /* Private */,
       5,    1,   54,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LifeChoresWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LifeChoresWindow *_t = static_cast<LifeChoresWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_AddNote_clicked(); break;
        case 2: _t->on_Refresh_pressed(); break;
        case 3: _t->on_ListOfNote_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->on_DeleteNote_pressed(); break;
        case 5: _t->on_EditNote_pressed(); break;
        case 6: _t->on_ListAllNote_pressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LifeChoresWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LifeChoresWindow::sendData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject LifeChoresWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_LifeChoresWindow.data,
      qt_meta_data_LifeChoresWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LifeChoresWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LifeChoresWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LifeChoresWindow.stringdata0))
        return static_cast<void*>(const_cast< LifeChoresWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int LifeChoresWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LifeChoresWindow::sendData(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
