/****************************************************************************
** Meta object code from reading C++ file 'control.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../control.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Control_t {
    QByteArrayData data[58];
    char stringdata0[1259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Control_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Control_t qt_meta_stringdata_Control = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Control"
QT_MOC_LITERAL(1, 8, 13), // "stateTransfer"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 35), // "std::unordered_map<QString,QS..."
QT_MOC_LITERAL(4, 59, 12), // "modifiedData"
QT_MOC_LITERAL(5, 72, 18), // "cameraStateChanged"
QT_MOC_LITERAL(6, 91, 1), // "i"
QT_MOC_LITERAL(7, 93, 5), // "state"
QT_MOC_LITERAL(8, 99, 15), // "handleLightData"
QT_MOC_LITERAL(9, 115, 11), // "light_level"
QT_MOC_LITERAL(10, 127, 5), // "value"
QT_MOC_LITERAL(11, 133, 9), // "lightType"
QT_MOC_LITERAL(12, 143, 13), // "cameraControl"
QT_MOC_LITERAL(13, 157, 4), // "open"
QT_MOC_LITERAL(14, 162, 21), // "GamePad_X_btn_pressed"
QT_MOC_LITERAL(15, 184, 7), // "pressed"
QT_MOC_LITERAL(16, 192, 21), // "GamePad_Y_btn_pressed"
QT_MOC_LITERAL(17, 214, 21), // "GamePad_A_btn_pressed"
QT_MOC_LITERAL(18, 236, 21), // "GamePad_B_btn_pressed"
QT_MOC_LITERAL(19, 258, 24), // "GamePad_Back_btn_pressed"
QT_MOC_LITERAL(20, 283, 25), // "GamePad_Start_btn_pressed"
QT_MOC_LITERAL(21, 309, 22), // "GamePad_LB_btn_pressed"
QT_MOC_LITERAL(22, 332, 22), // "GamePad_RB_btn_pressed"
QT_MOC_LITERAL(23, 355, 22), // "GamePad_Up_btn_pressed"
QT_MOC_LITERAL(24, 378, 24), // "GamePad_Down_btn_pressed"
QT_MOC_LITERAL(25, 403, 24), // "GamePad_Left_btn_pressed"
QT_MOC_LITERAL(26, 428, 25), // "GamePad_Right_btn_pressed"
QT_MOC_LITERAL(27, 454, 29), // "GamePad_Left_axis_btn_pressed"
QT_MOC_LITERAL(28, 484, 30), // "GamePad_Right_axis_btn_pressed"
QT_MOC_LITERAL(29, 515, 14), // "jetson_msg_get"
QT_MOC_LITERAL(30, 530, 17), // "do_send_joyhandle"
QT_MOC_LITERAL(31, 548, 14), // "machine_online"
QT_MOC_LITERAL(32, 563, 11), // "btn_control"
QT_MOC_LITERAL(33, 575, 30), // "on_switchButton_checkedChanged"
QT_MOC_LITERAL(34, 606, 7), // "checked"
QT_MOC_LITERAL(35, 614, 8), // "heatBeat"
QT_MOC_LITERAL(36, 623, 32), // "on_switchButton_2_checkedChanged"
QT_MOC_LITERAL(37, 656, 19), // "on_exit_btn_clicked"
QT_MOC_LITERAL(38, 676, 35), // "on_Control_mode_currentIndexC..."
QT_MOC_LITERAL(39, 712, 5), // "index"
QT_MOC_LITERAL(40, 718, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(41, 742, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(42, 766, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(43, 790, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(44, 814, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(45, 838, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(46, 862, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(47, 886, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(48, 910, 33), // "on_verticalSlider_actionTrigg..."
QT_MOC_LITERAL(49, 944, 6), // "action"
QT_MOC_LITERAL(50, 951, 35), // "on_verticalSlider_2_actionTri..."
QT_MOC_LITERAL(51, 987, 30), // "on_verticalSlider_valueChanged"
QT_MOC_LITERAL(52, 1018, 32), // "on_verticalSlider_2_valueChanged"
QT_MOC_LITERAL(53, 1051, 41), // "on_monocularCameraA1Switch_ch..."
QT_MOC_LITERAL(54, 1093, 41), // "on_monocularCameraA2Switch_ch..."
QT_MOC_LITERAL(55, 1135, 39), // "on_binocularCameraSwitch_chec..."
QT_MOC_LITERAL(56, 1175, 41), // "on_monocularCameraB1Switch_ch..."
QT_MOC_LITERAL(57, 1217, 41) // "on_monocularCameraB2Switch_ch..."

    },
    "Control\0stateTransfer\0\0"
    "std::unordered_map<QString,QString>\0"
    "modifiedData\0cameraStateChanged\0i\0"
    "state\0handleLightData\0light_level\0"
    "value\0lightType\0cameraControl\0open\0"
    "GamePad_X_btn_pressed\0pressed\0"
    "GamePad_Y_btn_pressed\0GamePad_A_btn_pressed\0"
    "GamePad_B_btn_pressed\0GamePad_Back_btn_pressed\0"
    "GamePad_Start_btn_pressed\0"
    "GamePad_LB_btn_pressed\0GamePad_RB_btn_pressed\0"
    "GamePad_Up_btn_pressed\0GamePad_Down_btn_pressed\0"
    "GamePad_Left_btn_pressed\0"
    "GamePad_Right_btn_pressed\0"
    "GamePad_Left_axis_btn_pressed\0"
    "GamePad_Right_axis_btn_pressed\0"
    "jetson_msg_get\0do_send_joyhandle\0"
    "machine_online\0btn_control\0"
    "on_switchButton_checkedChanged\0checked\0"
    "heatBeat\0on_switchButton_2_checkedChanged\0"
    "on_exit_btn_clicked\0"
    "on_Control_mode_currentIndexChanged\0"
    "index\0on_pushButton_7_clicked\0"
    "on_pushButton_6_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_5_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_9_clicked\0"
    "on_pushButton_8_clicked\0"
    "on_verticalSlider_actionTriggered\0"
    "action\0on_verticalSlider_2_actionTriggered\0"
    "on_verticalSlider_valueChanged\0"
    "on_verticalSlider_2_valueChanged\0"
    "on_monocularCameraA1Switch_checkedChanged\0"
    "on_monocularCameraA2Switch_checkedChanged\0"
    "on_binocularCameraSwitch_checkedChanged\0"
    "on_monocularCameraB1Switch_checkedChanged\0"
    "on_monocularCameraB2Switch_checkedChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Control[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  234,    2, 0x06 /* Public */,
       5,    2,  237,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    3,  242,    2, 0x0a /* Public */,
      12,    2,  249,    2, 0x0a /* Public */,
      14,    1,  254,    2, 0x08 /* Private */,
      16,    1,  257,    2, 0x08 /* Private */,
      17,    1,  260,    2, 0x08 /* Private */,
      18,    1,  263,    2, 0x08 /* Private */,
      19,    1,  266,    2, 0x08 /* Private */,
      20,    1,  269,    2, 0x08 /* Private */,
      21,    1,  272,    2, 0x08 /* Private */,
      22,    1,  275,    2, 0x08 /* Private */,
      23,    1,  278,    2, 0x08 /* Private */,
      24,    1,  281,    2, 0x08 /* Private */,
      25,    1,  284,    2, 0x08 /* Private */,
      26,    1,  287,    2, 0x08 /* Private */,
      27,    1,  290,    2, 0x08 /* Private */,
      28,    1,  293,    2, 0x08 /* Private */,
      29,    0,  296,    2, 0x08 /* Private */,
      30,    0,  297,    2, 0x08 /* Private */,
      31,    0,  298,    2, 0x08 /* Private */,
      32,    0,  299,    2, 0x08 /* Private */,
      33,    1,  300,    2, 0x08 /* Private */,
      35,    0,  303,    2, 0x08 /* Private */,
      36,    1,  304,    2, 0x08 /* Private */,
      37,    0,  307,    2, 0x08 /* Private */,
      38,    1,  308,    2, 0x08 /* Private */,
      40,    0,  311,    2, 0x08 /* Private */,
      41,    0,  312,    2, 0x08 /* Private */,
      42,    0,  313,    2, 0x08 /* Private */,
      43,    0,  314,    2, 0x08 /* Private */,
      44,    0,  315,    2, 0x08 /* Private */,
      45,    0,  316,    2, 0x08 /* Private */,
      46,    0,  317,    2, 0x08 /* Private */,
      47,    0,  318,    2, 0x08 /* Private */,
      48,    1,  319,    2, 0x08 /* Private */,
      50,    1,  322,    2, 0x08 /* Private */,
      51,    1,  325,    2, 0x08 /* Private */,
      52,    1,  328,    2, 0x08 /* Private */,
      53,    1,  331,    2, 0x08 /* Private */,
      54,    1,  334,    2, 0x08 /* Private */,
      55,    1,  337,    2, 0x08 /* Private */,
      56,    1,  340,    2, 0x08 /* Private */,
      57,    1,  343,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    9,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    6,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::Bool,   34,

       0        // eod
};

void Control::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Control *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateTransfer((*reinterpret_cast< const std::unordered_map<QString,QString>(*)>(_a[1]))); break;
        case 1: _t->cameraStateChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->handleLightData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->cameraControl((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->GamePad_X_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->GamePad_Y_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->GamePad_A_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->GamePad_B_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->GamePad_Back_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->GamePad_Start_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->GamePad_LB_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->GamePad_RB_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->GamePad_Up_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->GamePad_Down_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->GamePad_Left_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->GamePad_Right_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->GamePad_Left_axis_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->GamePad_Right_axis_btn_pressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->jetson_msg_get(); break;
        case 19: _t->do_send_joyhandle(); break;
        case 20: _t->machine_online(); break;
        case 21: _t->btn_control(); break;
        case 22: _t->on_switchButton_checkedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->heatBeat(); break;
        case 24: _t->on_switchButton_2_checkedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->on_exit_btn_clicked(); break;
        case 26: _t->on_Control_mode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->on_pushButton_7_clicked(); break;
        case 28: _t->on_pushButton_6_clicked(); break;
        case 29: _t->on_pushButton_3_clicked(); break;
        case 30: _t->on_pushButton_5_clicked(); break;
        case 31: _t->on_pushButton_4_clicked(); break;
        case 32: _t->on_pushButton_2_clicked(); break;
        case 33: _t->on_pushButton_9_clicked(); break;
        case 34: _t->on_pushButton_8_clicked(); break;
        case 35: _t->on_verticalSlider_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->on_verticalSlider_2_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->on_verticalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->on_verticalSlider_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->on_monocularCameraA1Switch_checkedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->on_monocularCameraA2Switch_checkedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->on_binocularCameraSwitch_checkedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->on_monocularCameraB1Switch_checkedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->on_monocularCameraB2Switch_checkedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Control::*)(const std::unordered_map<QString,QString> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Control::stateTransfer)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Control::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Control::cameraStateChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Control::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Control.data,
    qt_meta_data_Control,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Control::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Control.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 44;
    }
    return _id;
}

// SIGNAL 0
void Control::stateTransfer(const std::unordered_map<QString,QString> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Control::cameraStateChanged(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
