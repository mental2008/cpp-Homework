/****************************************************************************
** Meta object code from reading C++ file 'choosewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Word_Part/choosewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'choosewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChooseWindow_t {
    QByteArrayData data[10];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChooseWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChooseWindow_t qt_meta_stringdata_ChooseWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ChooseWindow"
QT_MOC_LITERAL(1, 13, 28), // "on_actionKnowledge_triggered"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 30), // "on_actionLife_chores_triggered"
QT_MOC_LITERAL(4, 74, 29), // "on_actionStudy_plan_triggered"
QT_MOC_LITERAL(5, 104, 28), // "on_actionWord_list_triggered"
QT_MOC_LITERAL(6, 133, 25), // "on_WordListButton_pressed"
QT_MOC_LITERAL(7, 159, 26), // "on_KnowledgeButton_pressed"
QT_MOC_LITERAL(8, 186, 27), // "on_LifeChoresButton_pressed"
QT_MOC_LITERAL(9, 214, 26) // "on_StudyPlanButton_pressed"

    },
    "ChooseWindow\0on_actionKnowledge_triggered\0"
    "\0on_actionLife_chores_triggered\0"
    "on_actionStudy_plan_triggered\0"
    "on_actionWord_list_triggered\0"
    "on_WordListButton_pressed\0"
    "on_KnowledgeButton_pressed\0"
    "on_LifeChoresButton_pressed\0"
    "on_StudyPlanButton_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChooseWindow[] = {

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
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChooseWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChooseWindow *_t = static_cast<ChooseWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionKnowledge_triggered(); break;
        case 1: _t->on_actionLife_chores_triggered(); break;
        case 2: _t->on_actionStudy_plan_triggered(); break;
        case 3: _t->on_actionWord_list_triggered(); break;
        case 4: _t->on_WordListButton_pressed(); break;
        case 5: _t->on_KnowledgeButton_pressed(); break;
        case 6: _t->on_LifeChoresButton_pressed(); break;
        case 7: _t->on_StudyPlanButton_pressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ChooseWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ChooseWindow.data,
      qt_meta_data_ChooseWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ChooseWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChooseWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ChooseWindow.stringdata0))
        return static_cast<void*>(const_cast< ChooseWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ChooseWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
