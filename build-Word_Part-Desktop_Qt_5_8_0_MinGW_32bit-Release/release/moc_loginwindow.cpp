/****************************************************************************
** Meta object code from reading C++ file 'loginwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Word_Part/loginwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoginWindow_t {
    QByteArrayData data[10];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginWindow_t qt_meta_stringdata_LoginWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LoginWindow"
QT_MOC_LITERAL(1, 12, 32), // "on_PasswordDisplayButton_pressed"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 33), // "on_PasswordDisplayButton_rele..."
QT_MOC_LITERAL(4, 80, 28), // "on_PasswordInput_textChanged"
QT_MOC_LITERAL(5, 109, 4), // "arg1"
QT_MOC_LITERAL(6, 114, 22), // "on_LoginButton_clicked"
QT_MOC_LITERAL(7, 137, 36), // "on_actionAbout_the_program_tr..."
QT_MOC_LITERAL(8, 174, 36), // "on_actionAbout_the_authors_tr..."
QT_MOC_LITERAL(9, 211, 36) // "on_actionUser_Instructions_tr..."

    },
    "LoginWindow\0on_PasswordDisplayButton_pressed\0"
    "\0on_PasswordDisplayButton_released\0"
    "on_PasswordInput_textChanged\0arg1\0"
    "on_LoginButton_clicked\0"
    "on_actionAbout_the_program_triggered\0"
    "on_actionAbout_the_authors_triggered\0"
    "on_actionUser_Instructions_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginWindow *_t = static_cast<LoginWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_PasswordDisplayButton_pressed(); break;
        case 1: _t->on_PasswordDisplayButton_released(); break;
        case 2: _t->on_PasswordInput_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_LoginButton_clicked(); break;
        case 4: _t->on_actionAbout_the_program_triggered(); break;
        case 5: _t->on_actionAbout_the_authors_triggered(); break;
        case 6: _t->on_actionUser_Instructions_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject LoginWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_LoginWindow.data,
      qt_meta_data_LoginWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LoginWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LoginWindow.stringdata0))
        return static_cast<void*>(const_cast< LoginWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int LoginWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
