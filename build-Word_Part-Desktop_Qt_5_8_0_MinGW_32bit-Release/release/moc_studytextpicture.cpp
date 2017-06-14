/****************************************************************************
** Meta object code from reading C++ file 'studytextpicture.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Word_Part/studytextpicture.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'studytextpicture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_noteTextPicture_t {
    QByteArrayData data[17];
    char stringdata0[349];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_noteTextPicture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_noteTextPicture_t qt_meta_stringdata_noteTextPicture = {
    {
QT_MOC_LITERAL(0, 0, 15), // "noteTextPicture"
QT_MOC_LITERAL(1, 16, 15), // "on_tool_pressed"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 27), // "on_littleToolButton_pressed"
QT_MOC_LITERAL(4, 61, 11), // "displayTool"
QT_MOC_LITERAL(5, 73, 33), // "on_counterclockwiseButton_pre..."
QT_MOC_LITERAL(6, 107, 23), // "on_enlageButton_pressed"
QT_MOC_LITERAL(7, 131, 23), // "on_narrowButton_pressed"
QT_MOC_LITERAL(8, 155, 26), // "on_clockwiseButton_pressed"
QT_MOC_LITERAL(9, 182, 24), // "on_addTextButton_pressed"
QT_MOC_LITERAL(10, 207, 11), // "receiveData"
QT_MOC_LITERAL(11, 219, 13), // "noteKnowlodge"
QT_MOC_LITERAL(12, 233, 27), // "on_addPictureButton_pressed"
QT_MOC_LITERAL(13, 261, 33), // "on_textPicturesList_doubleCli..."
QT_MOC_LITERAL(14, 295, 5), // "index"
QT_MOC_LITERAL(15, 301, 22), // "on_deletButton_pressed"
QT_MOC_LITERAL(16, 324, 24) // "on_historyButton_pressed"

    },
    "noteTextPicture\0on_tool_pressed\0\0"
    "on_littleToolButton_pressed\0displayTool\0"
    "on_counterclockwiseButton_pressed\0"
    "on_enlageButton_pressed\0on_narrowButton_pressed\0"
    "on_clockwiseButton_pressed\0"
    "on_addTextButton_pressed\0receiveData\0"
    "noteKnowlodge\0on_addPictureButton_pressed\0"
    "on_textPicturesList_doubleClicked\0"
    "index\0on_deletButton_pressed\0"
    "on_historyButton_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_noteTextPicture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    1,   87,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    1,   91,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void noteTextPicture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        noteTextPicture *_t = static_cast<noteTextPicture *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tool_pressed(); break;
        case 1: _t->on_littleToolButton_pressed(); break;
        case 2: _t->displayTool(); break;
        case 3: _t->on_counterclockwiseButton_pressed(); break;
        case 4: _t->on_enlageButton_pressed(); break;
        case 5: _t->on_narrowButton_pressed(); break;
        case 6: _t->on_clockwiseButton_pressed(); break;
        case 7: _t->on_addTextButton_pressed(); break;
        case 8: _t->receiveData((*reinterpret_cast< noteKnowlodge(*)>(_a[1]))); break;
        case 9: _t->on_addPictureButton_pressed(); break;
        case 10: _t->on_textPicturesList_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->on_deletButton_pressed(); break;
        case 12: _t->on_historyButton_pressed(); break;
        default: ;
        }
    }
}

const QMetaObject noteTextPicture::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_noteTextPicture.data,
      qt_meta_data_noteTextPicture,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *noteTextPicture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *noteTextPicture::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_noteTextPicture.stringdata0))
        return static_cast<void*>(const_cast< noteTextPicture*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int noteTextPicture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
