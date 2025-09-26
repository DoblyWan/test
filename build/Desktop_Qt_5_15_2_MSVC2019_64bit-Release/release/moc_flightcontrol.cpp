/****************************************************************************
** Meta object code from reading C++ file 'flightcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../control/flightcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flightcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlightControl_t {
    QByteArrayData data[38];
    char stringdata0[811];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightControl_t qt_meta_stringdata_FlightControl = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FlightControl"
QT_MOC_LITERAL(1, 14, 18), // "cameraStateChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 1), // "i"
QT_MOC_LITERAL(4, 36, 5), // "state"
QT_MOC_LITERAL(5, 42, 20), // "readPendingDatagrams"
QT_MOC_LITERAL(6, 63, 13), // "sendHeartbeat"
QT_MOC_LITERAL(7, 77, 21), // "GamePad_X_btn_pressed"
QT_MOC_LITERAL(8, 99, 7), // "pressed"
QT_MOC_LITERAL(9, 107, 21), // "GamePad_Y_btn_pressed"
QT_MOC_LITERAL(10, 129, 21), // "GamePad_A_btn_pressed"
QT_MOC_LITERAL(11, 151, 21), // "GamePad_B_btn_pressed"
QT_MOC_LITERAL(12, 173, 24), // "GamePad_Back_btn_pressed"
QT_MOC_LITERAL(13, 198, 25), // "GamePad_Start_btn_pressed"
QT_MOC_LITERAL(14, 224, 22), // "GamePad_LB_btn_pressed"
QT_MOC_LITERAL(15, 247, 22), // "GamePad_RB_btn_pressed"
QT_MOC_LITERAL(16, 270, 22), // "GamePad_Up_btn_pressed"
QT_MOC_LITERAL(17, 293, 24), // "GamePad_Down_btn_pressed"
QT_MOC_LITERAL(18, 318, 24), // "GamePad_Left_btn_pressed"
QT_MOC_LITERAL(19, 343, 25), // "GamePad_Right_btn_pressed"
QT_MOC_LITERAL(20, 369, 11), // "armedSwitch"
QT_MOC_LITERAL(21, 381, 3), // "arm"
QT_MOC_LITERAL(22, 385, 31), // "on_handleEnabled_checkedChanged"
QT_MOC_LITERAL(23, 417, 7), // "checked"
QT_MOC_LITERAL(24, 425, 11), // "btn_control"
QT_MOC_LITERAL(25, 437, 33), // "on_verticalSlider_actionTrigg..."
QT_MOC_LITERAL(26, 471, 6), // "action"
QT_MOC_LITERAL(27, 478, 35), // "on_verticalSlider_2_actionTri..."
QT_MOC_LITERAL(28, 514, 30), // "on_verticalSlider_valueChanged"
QT_MOC_LITERAL(29, 545, 5), // "value"
QT_MOC_LITERAL(30, 551, 32), // "on_verticalSlider_2_valueChanged"
QT_MOC_LITERAL(31, 584, 41), // "on_monocularCameraA1Switch_ch..."
QT_MOC_LITERAL(32, 626, 41), // "on_monocularCameraA2Switch_ch..."
QT_MOC_LITERAL(33, 668, 39), // "on_binocularCameraSwitch_chec..."
QT_MOC_LITERAL(34, 708, 41), // "on_monocularCameraB1Switch_ch..."
QT_MOC_LITERAL(35, 750, 41), // "on_monocularCameraB2Switch_ch..."
QT_MOC_LITERAL(36, 792, 13), // "cameraControl"
QT_MOC_LITERAL(37, 806, 4) // "open"

    },
    "FlightControl\0cameraStateChanged\0\0i\0"
    "state\0readPendingDatagrams\0sendHeartbeat\0"
    "GamePad_X_btn_pressed\0pressed\0"
    "GamePad_Y_btn_pressed\0GamePad_A_btn_pressed\0"
    "GamePad_B_btn_pressed\0GamePad_Back_btn_pressed\0"
    "GamePad_Start_btn_pressed\0"
    "GamePad_LB_btn_pressed\0GamePad_RB_btn_pressed\0"
    "GamePad_Up_btn_pressed\0GamePad_Down_btn_pressed\0"
    "GamePad_Left_btn_pressed\0"
    "GamePad_Right_btn_pressed\0armedSwitch\0"
    "arm\0on_handleEnabled_checkedChanged\0"
    "checked\0btn_control\0"
    "on_verticalSlider_actionTriggered\0"
    "action\0on_verticalSlider_2_actionTriggered\0"
    "on_verticalSlider_valueChanged\0value\0"
    "on_verticalSlider_2_valueChanged\0"
    "on_monocularCameraA1Switch_checkedChanged\0"
    "on_monocularCameraA2Switch_checkedChanged\0"
    "on_binocularCameraSwitch_checkedChanged\0"
    "on_monocularCameraB1Switch_checkedChanged\0"
    "on_monocularCameraB2Switch_checkedChanged\0"
    "cameraControl\0open"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  154,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  159,    2, 0x08 /* Private */,
       6,    0,  160,    2, 0x08 /* Private */,
       7,    1,  161,    2, 0x08 /* Private */,
       9,    1,  164,    2, 0x08 /* Private */,
      10,    1,  167,    2, 0x08 /* Private */,
      11,    1,  170,    2, 0x08 /* Private */,
      12,    1,  173,    2, 0x08 /* Private */,
      13,    1,  176,    2, 0x08 /* Private */,
      14,    1,  179,    2, 0x08 /* Private */,
      15,    1,  182,    2, 0x08 /* Private */,
      16,    1,  185,    2, 0x08 /* Private */,
      17,    1,  188,    2, 0x08 /* Private */,
      18,    1,  191,    2, 0x08 /* Private */,
      19,    1,  194,    2, 0x08 /* Private */,
      20,    1,  197,    2, 0x08 /* Private */,
      22,    1,  200,    2, 0x08 /* Private */,
      24,    0,  203,    2, 0x08 /* Private */,
      25,    1,  204,    2, 0x08 /* Private */,
      27,    1,  207,    2, 0x08 /* Private */,
      28,    1,  210,    2, 0x08 /* Private */,
      30,    1,  213,    2, 0x08 /* Private */,
      31,    1,  216,    2, 0x08 /* Private */,
      32,    1,  219,    2, 0x08 /* Private */,
      33,    1,  222,    2, 0x08 /* Private */,
      34,    1,  225,    2, 0x08 /* Private */,
      35,    1,  228,    2, 0x08 /* Private */,
      36,    2,  231,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,   37,

       0        // eod
};

void FlightControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlightControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cameraStateChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->readPendingDatagrams(); break;
        case 2: _t->sendHeartbeat(); break;
        case 3: _t->GamePad_X_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->GamePad_Y_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->GamePad_A_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->GamePad_B_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->GamePad_Back_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->GamePad_Start_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->GamePad_LB_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->GamePad_RB_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->GamePad_Up_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->GamePad_Down_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->GamePad_Left_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->GamePad_Right_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->armedSwitch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->on_handleEnabled_checkedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->btn_control(); break;
        case 18: _t->on_verticalSlider_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_verticalSlider_2_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->on_verticalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_verticalSlider_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->on_monocularCameraA1Switch_checkedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->on_monocularCameraA2Switch_checkedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->on_binocularCameraSwitch_checkedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->on_monocularCameraB1Switch_checkedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->on_monocularCameraB2Switch_checkedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->cameraControl((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FlightControl::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightControl::cameraStateChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FlightControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FlightControl.data,
    qt_meta_data_FlightControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightControl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FlightControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void FlightControl::cameraStateChanged(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
