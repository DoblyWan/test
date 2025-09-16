QT       += core
QT       += gui
QT       += sql
QT       += webenginewidgets
QT       += gamepad
QT       += network
QT       += xml
QT       += multimedia
QT       += multimediawidgets


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets



CONFIG += c++17

msvc {
    QMAKE_CFLAGS += /utf-8
    QMAKE_CXXFLAGS += /utf-8
}

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    control.cpp \
    customcontrol.cpp \
    dialog.cpp \
    main.cpp \
    mainwindow.cpp \
    player/histogramwidget.cpp \
    player/player.cpp \
    player/playercontrols.cpp \
    player/playlistmodel.cpp \
    player/videowidget.cpp \
    printhandler.cpp \
    pythonworker.cpp \
    recordthread.cpp

HEADERS += \
    control.h \
    customcontrol.h \
    include/dialog.h \
    mainwindow.h \
    player/histogramwidget.h \
    player/player.h \
    player/playercontrols.h \
    player/playlistmodel.h \
    player/videowidget.h \
    printhandler.h \
    pythonworker.h \
    recordthread.h

FORMS += \
    control.ui \
    dialog.ui \
    mainwindow.ui


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/qucsdk/ -lquc
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/qucsdk/ -lqucd

# include ui lib
INCLUDEPATH += $$PWD/qucsdk
DEPENDPATH += $$PWD/qucsdk

INCLUDEPATH += $$PWD/qucinclude
DEPENDPATH += $$PWD/qucinclude

#python
INCLUDEPATH += D:/Tools/Python/Python39/include
LIBS += -LD:/Tools/Python/Python39/libs -lpython39

# 添加 Windows 用户界面库
win32:LIBS += -luser32

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc


INCLUDEPATH += $$PWD/ffmpeg
include ($$PWD/ffmpeg/ffmpeg.pri)

INCLUDEPATH += $$PWD/player


