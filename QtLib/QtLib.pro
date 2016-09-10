#-------------------------------------------------
#
# Project created by QtCreator 2016-07-29T10:15:12
#
#-------------------------------------------------

CONFIG += c++11

QT       += core gui sql widgets multimedia printsupport network

TARGET = QtLib
TEMPLATE = lib

DEFINES += QTLIB_LIBRARY

CONFIG += c++11

SOURCES += qtlib.cpp \
    Testing/Thread/dialogthread.cpp \
    Testing/Thread/worker.cpp \
    Testing/dialogtesting.cpp \
    Testing/dialogtest_sound.cpp \
    Testing/Sound/mysound.cpp \
    MainWindow/dmainwindow.cpp \
    Testing/Sound/sound.cpp \
    qtlibmainwindow.cpp \
    Testing/QThreadPool/mythread.cpp \
    CallerSound/callersound.cpp \
    Object/dobject.cpp \
    Testing/Painter/mywidget.cpp \
    Testing/Painter/dialogpainter.cpp \
    PushButton/dpushbutton.cpp \
    StatusBar/dstatusbar.cpp \
    Print/dprint.cpp \
    Label/dlabel.cpp \
    Media/dmedia.cpp \
    App/application.cpp \
    Clock/dclock.cpp \
    Dialog/ddialog.cpp \
    Testing/mainwindowtesting.cpp \
    Logger/dlogger.cpp \
    ScrollingText/scrollingtext.cpp \
    Widget/dwidget.cpp \
    ScrollingText/scrolltext.cpp \
    CallerSound/dcallersounddialog.cpp \
    CallerSoundAlsa/dcallersoundworker.cpp \
    CallerSoundAlsa/dcallersoundalsa.cpp \
    CallerSoundAlsa/wavfile.cpp \
    StackedWidget/dstackedwidget.cpp \
    Label/dlabelpic.cpp \
    ScrollingText/drunningtext.cpp

HEADERS += qtlib.h\
        qtlib_global.h \
    Testing/Thread/dialogthread.h \
    Testing/Thread/worker.h \
    Testing/dialogtesting.h \
    Testing/dialogtest_sound.h \
    Testing/Sound/mysound.h \
    MainWindow/dmainwindow.h \
    Testing/Sound/sound.h \
    qtlibmainwindow.h \
    Testing/QThreadPool/mythread.h \
    CallerSound/callersound.h \
    Object/dobject.h \
    Testing/Painter/mywidget.h \
    Testing/Painter/dialogpainter.h \
    PushButton/dpushbutton.h \
    StatusBar/dstatusbar.h \
    Print/dprint.h \
    Label/dlabel.h \
    Media/dmedia.h \
    App/application.h \
    Clock/dclock.h \
    Dialog/ddialog.h \
    Inc/CallerSound \
    Inc/DebugStream \
    Inc/Clock \
    Inc/Dialog \
    Inc/Label \
    Inc/Logger \
    Inc/PushButton \
    Inc/StatusBar \
    Inc/MainWindow \
    Inc/Media \
    Inc/Object \
    Inc/Print \
    Inc/Testing \
    Inc/Application \
    Inc/Config \
    Testing/mainwindowtesting.h \
    Logger/dlogger.h \
    ScrollingText/scrollingtext.h \
    Logger/q_debugstream.h \
    Widget/dwidget.h \
    Inc/Widget \
    ScrollingText/scrolltext.h \
    CallerSound/dcallersounddialog.h \
    CallerSoundAlsa/dcallersoundworker.h \
    Inc/CallerSoundAlsa \
    CallerSoundAlsa/dcallersoundalsa.h \
    CallerSoundAlsa/wavfile.h \
    Inc/Setting \
    StackedWidget/dstackedwidget.h \
    Inc/StackedWidget \
    Label/dlabelpic.h \
    Inc/ScrollingText \
    ScrollingText/drunningtext.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

RESOURCES += \
    Resources/resources.qrc

FORMS += \
    Testing/Thread/dialogthread.ui \
    Testing/dialogtesting.ui \
    Testing/dialogtest_sound.ui \
    MainWindow/dmainwindow.ui \
    qtlibmainwindow.ui \
    Testing/Painter/dialogpainter.ui \
    Print/dprint.ui \
    Media/dmedia.ui \
    Dialog/ddialog.ui \
    Testing/mainwindowtesting.ui \
    Logger/dlogger.ui \
    CallerSound/dcallersounddialog.ui \
    StackedWidget/dstackedwidget.ui

DISTFILES += \
    Stylesheet/dark-theme.qss \
    Stylesheet/QQueue.qss


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../QtConfig/release/ -lQtConfig
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../QtConfig/debug/ -lQtConfig
else:unix:!macx: LIBS += -L$$OUT_PWD/../QtConfig/ -lQtConfig

INCLUDEPATH += $$PWD/../QtConfig
DEPENDPATH += $$PWD/../QtConfig

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../QtDB/release/ -lQtDB
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../QtDB/debug/ -lQtDB
else:unix:!macx: LIBS += -L$$OUT_PWD/../QtDB/ -lQtDB

INCLUDEPATH += $$PWD/../QtDB
DEPENDPATH += $$PWD/../QtDB

unix:!macx: LIBS += -lasound
