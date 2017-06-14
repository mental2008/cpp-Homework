/****************************************************************************
** Meta object code from reading C++ file 'addworddialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Word_Part/addworddialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addworddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddWordDialog_t {
    QByteArrayData data[11];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddWordDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddWordDialog_t qt_meta_stringdata_AddWordDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AddWordDialog"
QT_MOC_LITERAL(1, 14, 8), // "emitWord"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "Word"
QT_MOC_LITERAL(4, 29, 25), // "on_nounCheck_stateChanged"
QT_MOC_LITERAL(5, 55, 4), // "arg1"
QT_MOC_LITERAL(6, 60, 25), // "on_verbCheck_stateChanged"
QT_MOC_LITERAL(7, 86, 30), // "on_adjectiveCheck_stateChanged"
QT_MOC_LITERAL(8, 117, 27), // "on_adverbCheck_stateChanged"
QT_MOC_LITERAL(9, 145, 23), // "on_acceptButton_pressed"
QT_MOC_LITERAL(10, 169, 23) // "on_cancelButton_pressed"

    },
    "AddWordDialog\0emitWord\0\0Word\0"
    "on_nounCheck_stateChanged\0arg1\0"
    "on_verbCheck_stateChanged\0"
    "on_adjectiveCheck_stateChanged\0"
    "on_adverbCheck_stateChanged\0"
    "on_acceptButton_pressed\0on_cancelButton_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddWordDialog[] = {

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
       4,    1,   52,    2, 0x08 /* Private */,
       6,    1,   55,    2, 0x08 /* Private */,
       7,    1,   58,    2, 0x08 /* Private */,
       8,    1,   61,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddWordDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddWordDialog *_t = static_cast<AddWordDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emitWord((*reinterpret_cast< Word(*)>(_a[1]))); break;
        case 1: _t->on_nounCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_verbCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_adjectiveCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_adverbCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_acceptButton_pressed(); break;
        case 6: _t->on_cancelButton_pressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddWordDialog::*_t)(Word );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddWordDialog::emitWord)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AddWordDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddWordDialog.data,
      qt_meta_data_AddWordDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddWordDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddWordDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddWordDialog.stringdata0))
        return static_cast<void*>(const_cast< AddWordDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddWordDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AddWordDialog::emitWord(Word _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
