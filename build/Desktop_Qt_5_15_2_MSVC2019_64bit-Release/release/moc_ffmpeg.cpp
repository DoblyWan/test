/****************************************************************************
** Meta object code from reading C++ file 'ffmpeg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../ffmpeg/ffmpeg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ffmpeg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FFmpegThread_t {
    QByteArrayData data[17];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FFmpegThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FFmpegThread_t qt_meta_stringdata_FFmpegThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FFmpegThread"
QT_MOC_LITERAL(1, 13, 12), // "receiveImage"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "image"
QT_MOC_LITERAL(4, 33, 16), // "judgeOpenSuccess"
QT_MOC_LITERAL(5, 50, 4), // "flag"
QT_MOC_LITERAL(6, 55, 6), // "setUrl"
QT_MOC_LITERAL(7, 62, 3), // "url"
QT_MOC_LITERAL(8, 66, 4), // "init"
QT_MOC_LITERAL(9, 71, 4), // "free"
QT_MOC_LITERAL(10, 76, 4), // "play"
QT_MOC_LITERAL(11, 81, 5), // "pause"
QT_MOC_LITERAL(12, 87, 4), // "next"
QT_MOC_LITERAL(13, 92, 4), // "stop"
QT_MOC_LITERAL(14, 97, 11), // "startRecord"
QT_MOC_LITERAL(15, 109, 8), // "filename"
QT_MOC_LITERAL(16, 118, 10) // "stopRecord"

    },
    "FFmpegThread\0receiveImage\0\0image\0"
    "judgeOpenSuccess\0flag\0setUrl\0url\0init\0"
    "free\0play\0pause\0next\0stop\0startRecord\0"
    "filename\0stopRecord"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FFmpegThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   75,    2, 0x0a /* Public */,
       8,    0,   78,    2, 0x0a /* Public */,
       9,    0,   79,    2, 0x0a /* Public */,
      10,    0,   80,    2, 0x0a /* Public */,
      11,    0,   81,    2, 0x0a /* Public */,
      12,    0,   82,    2, 0x0a /* Public */,
      13,    0,   83,    2, 0x0a /* Public */,
      14,    1,   84,    2, 0x0a /* Public */,
      16,    0,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,

       0        // eod
};

void FFmpegThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FFmpegThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveImage((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->judgeOpenSuccess((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { bool _r = _t->init();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->free(); break;
        case 5: _t->play(); break;
        case 6: _t->pause(); break;
        case 7: _t->next(); break;
        case 8: _t->stop(); break;
        case 9: _t->startRecord((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->stopRecord(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FFmpegThread::*)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FFmpegThread::receiveImage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FFmpegThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FFmpegThread::judgeOpenSuccess)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FFmpegThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_FFmpegThread.data,
    qt_meta_data_FFmpegThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FFmpegThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FFmpegThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FFmpegThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int FFmpegThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void FFmpegThread::receiveImage(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FFmpegThread::judgeOpenSuccess(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_FFmpegWidget_t {
    QByteArrayData data[17];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FFmpegWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FFmpegWidget_t qt_meta_stringdata_FFmpegWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FFmpegWidget"
QT_MOC_LITERAL(1, 13, 12), // "openFinished"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "FFmpegWidget*"
QT_MOC_LITERAL(4, 41, 4), // "rtsp"
QT_MOC_LITERAL(5, 46, 13), // "closeFinished"
QT_MOC_LITERAL(6, 60, 11), // "updateImage"
QT_MOC_LITERAL(7, 72, 5), // "image"
QT_MOC_LITERAL(8, 78, 6), // "setUrl"
QT_MOC_LITERAL(9, 85, 3), // "url"
QT_MOC_LITERAL(10, 89, 4), // "open"
QT_MOC_LITERAL(11, 94, 5), // "pause"
QT_MOC_LITERAL(12, 100, 4), // "next"
QT_MOC_LITERAL(13, 105, 5), // "close"
QT_MOC_LITERAL(14, 111, 5), // "clear"
QT_MOC_LITERAL(15, 117, 15), // "receiveOpenFLag"
QT_MOC_LITERAL(16, 133, 4) // "flag"

    },
    "FFmpegWidget\0openFinished\0\0FFmpegWidget*\0"
    "rtsp\0closeFinished\0updateImage\0image\0"
    "setUrl\0url\0open\0pause\0next\0close\0clear\0"
    "receiveOpenFLag\0flag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FFmpegWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   70,    2, 0x08 /* Private */,
       8,    1,   73,    2, 0x0a /* Public */,
      10,    0,   76,    2, 0x0a /* Public */,
      11,    0,   77,    2, 0x0a /* Public */,
      12,    0,   78,    2, 0x0a /* Public */,
      13,    0,   79,    2, 0x0a /* Public */,
      14,    0,   80,    2, 0x0a /* Public */,
      15,    1,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void FFmpegWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FFmpegWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openFinished((*reinterpret_cast< FFmpegWidget*(*)>(_a[1]))); break;
        case 1: _t->closeFinished((*reinterpret_cast< FFmpegWidget*(*)>(_a[1]))); break;
        case 2: _t->updateImage((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 3: _t->setUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->open(); break;
        case 5: _t->pause(); break;
        case 6: _t->next(); break;
        case 7: _t->close(); break;
        case 8: _t->clear(); break;
        case 9: _t->receiveOpenFLag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FFmpegWidget* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FFmpegWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FFmpegWidget::*)(FFmpegWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FFmpegWidget::openFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FFmpegWidget::*)(FFmpegWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FFmpegWidget::closeFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FFmpegWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FFmpegWidget.data,
    qt_meta_data_FFmpegWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FFmpegWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FFmpegWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FFmpegWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FFmpegWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void FFmpegWidget::openFinished(FFmpegWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FFmpegWidget::closeFinished(FFmpegWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
