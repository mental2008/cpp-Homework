/****************************************************************************
** Meta object code from reading C++ file 'changeworddialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Word_Part/changeworddialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'changeworddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChangeWordDialog_t {
    QByteArrayData data[11];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChangeWordDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChangeWordDialog_t qt_meta_stringdata_ChangeWordDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ChangeWordDialog"
QT_MOC_LITERAL(1, 17, 8), // "emitWord"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "Word"
QT_MOC_LITERAL(4, 32, 23), // "on_acceptButton_pressed"
QT_MOC_LITERAL(5, 56, 23), // "on_cancelButton_pressed"
QT_MOC_LITERAL(6, 80, 25), // "on_nounCheck_stateChanged"
QT_MOC_LITERAL(7, 106, 4), // "arg1"
QT_MOC_LITERAL(8, 111, 25), // "on_verbCheck_stateChanged"
QT_MOC_LITERAL(9, 137, 30), // "on_adjectiveCheck_stateChanged"
QT_MOC_LITERAL(10, 168, 27) // "on_adverbCheck_stateChanged"

    },
    "ChangeWordDialog\0emitWord\0\0Word\0"
    "on_acceptButton_pressed\0on_cancelButton_pressed\0"
    "on_nounCheck_stateChanged\0arg1\0"
    "on_verbCheck_stateChanged\0"
    "on_adjectiveCheck_stateChanged\0"
    "on_adverbCheck_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChangeWordDialog[] = {

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
       4,    0,   52,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    1,   54,    2, 0x08 /* Private */,
       8,    1,   57,    2, 0x08 /* Private */,
       9,    1,   60,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void ChangeWordDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChangeWordDialog *_t = static_cast<ChangeWordDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emitWord((*reinterpret_cast< Word(*)>(_a[1]))); break;
        case 1: _t->on_acceptButton_pressed(); break;
        case 2: _t->on_cancelButton_pressed(); break;
        case 3: _t->on_nounCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_verbCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_adjectiveCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_adverbCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChangeWordDialog::*_t)(Word );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChangeWordDialog::emitWord)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ChangeWordDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChangeWordDialog.data,
      qt_meta_data_ChangeWordDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ChangeWordDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChangeWordDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ChangeWordDialog.stringdata0))
        return static_cast<void*>(const_cast< ChangeWordDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ChangeWordDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void ChangeWordDialog::emitWord(Word _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
