/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RendimientoCarro/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata[365];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 23),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 29),
QT_MOC_LITERAL(4, 66, 32),
QT_MOC_LITERAL(5, 99, 31),
QT_MOC_LITERAL(6, 131, 29),
QT_MOC_LITERAL(7, 161, 31),
QT_MOC_LITERAL(8, 193, 21),
QT_MOC_LITERAL(9, 215, 41),
QT_MOC_LITERAL(10, 257, 5),
QT_MOC_LITERAL(11, 263, 26),
QT_MOC_LITERAL(12, 290, 32),
QT_MOC_LITERAL(13, 323, 40)
    },
    "MainWindow\0on_boton_llenar_clicked\0\0"
    "on_boton_agregarcarro_clicked\0"
    "on_boton_ver_rendimiento_clicked\0"
    "on_boton_eliminar_carro_clicked\0"
    "on_boton_guardardatos_clicked\0"
    "on_boton_descargardatos_clicked\0"
    "on_pushButton_clicked\0"
    "on_cb_carrosmodificar_currentIndexChanged\0"
    "index\0on_boton_modificar_clicked\0"
    "on_cb_carros_currentIndexChanged\0"
    "on_cb_carroseliminar_currentIndexChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08,
       3,    0,   70,    2, 0x08,
       4,    0,   71,    2, 0x08,
       5,    0,   72,    2, 0x08,
       6,    0,   73,    2, 0x08,
       7,    0,   74,    2, 0x08,
       8,    0,   75,    2, 0x08,
       9,    1,   76,    2, 0x08,
      11,    0,   79,    2, 0x08,
      12,    1,   80,    2, 0x08,
      13,    1,   83,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_boton_llenar_clicked(); break;
        case 1: _t->on_boton_agregarcarro_clicked(); break;
        case 2: _t->on_boton_ver_rendimiento_clicked(); break;
        case 3: _t->on_boton_eliminar_carro_clicked(); break;
        case 4: _t->on_boton_guardardatos_clicked(); break;
        case 5: _t->on_boton_descargardatos_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_cb_carrosmodificar_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_boton_modificar_clicked(); break;
        case 9: _t->on_cb_carros_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_cb_carroseliminar_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
