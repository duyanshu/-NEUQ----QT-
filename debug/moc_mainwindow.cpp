/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 23), // "on_displayVName_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(4, 60, 23), // "on_showLaneButt_clicked"
QT_MOC_LITERAL(5, 84, 27), // "on_showSidewalkButt_clicked"
QT_MOC_LITERAL(6, 112, 24), // "on_showScoreButt_clicked"
QT_MOC_LITERAL(7, 137, 29), // "on_SearchlineEdit_textChanged"
QT_MOC_LITERAL(8, 167, 4), // "arg1"
QT_MOC_LITERAL(9, 172, 27), // "on_FromLineEdit_textChanged"
QT_MOC_LITERAL(10, 200, 15), // "on_itemSelected"
QT_MOC_LITERAL(11, 216, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(12, 233, 4), // "item"
QT_MOC_LITERAL(13, 238, 25), // "on_TolineEdit_textChanged"
QT_MOC_LITERAL(14, 264, 22), // "on_RouteButton_clicked"
QT_MOC_LITERAL(15, 287, 18), // "on_AddSite_clicked"
QT_MOC_LITERAL(16, 306, 7), // "refresh"
QT_MOC_LITERAL(17, 314, 17), // "on_AddWay_clicked"
QT_MOC_LITERAL(18, 332, 25), // "on_ModifySiteName_clicked"
QT_MOC_LITERAL(19, 358, 24) // "on_ModifyWayName_clicked"

    },
    "MainWindow\0on_displayVName_clicked\0\0"
    "on_pushButton_4_clicked\0on_showLaneButt_clicked\0"
    "on_showSidewalkButt_clicked\0"
    "on_showScoreButt_clicked\0"
    "on_SearchlineEdit_textChanged\0arg1\0"
    "on_FromLineEdit_textChanged\0on_itemSelected\0"
    "QListWidgetItem*\0item\0on_TolineEdit_textChanged\0"
    "on_RouteButton_clicked\0on_AddSite_clicked\0"
    "refresh\0on_AddWay_clicked\0"
    "on_ModifySiteName_clicked\0"
    "on_ModifyWayName_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    1,   94,    2, 0x08 /* Private */,
       9,    1,   97,    2, 0x08 /* Private */,
      10,    1,  100,    2, 0x08 /* Private */,
      13,    1,  103,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,
      18,    0,  110,    2, 0x08 /* Private */,
      19,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_displayVName_clicked(); break;
        case 1: _t->on_pushButton_4_clicked(); break;
        case 2: _t->on_showLaneButt_clicked(); break;
        case 3: _t->on_showSidewalkButt_clicked(); break;
        case 4: _t->on_showScoreButt_clicked(); break;
        case 5: _t->on_SearchlineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_FromLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_itemSelected((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->on_TolineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_RouteButton_clicked(); break;
        case 10: _t->on_AddSite_clicked(); break;
        case 11: _t->refresh(); break;
        case 12: _t->on_AddWay_clicked(); break;
        case 13: _t->on_ModifySiteName_clicked(); break;
        case 14: _t->on_ModifyWayName_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
