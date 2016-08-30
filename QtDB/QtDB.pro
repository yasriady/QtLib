#-------------------------------------------------
#
# Project created by QtCreator 2016-08-15T08:18:32
#
#-------------------------------------------------

CONFIG += c++11

QT       += sql widgets core

QT       -= gui

TARGET = QtDB
TEMPLATE = lib

DEFINES += QTDB_LIBRARY

SOURCES += qtdb.cpp \
    dbmanager.cpp

HEADERS += qtdb.h\
        qtdb_global.h \
    dbmanager.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

unix:!macx: LIBS += -L$$OUT_PWD/../QtConfig/ -lQtConfig

INCLUDEPATH += $$PWD/../QtConfig
DEPENDPATH += $$PWD/../QtConfig

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../QtConfig/release/ -lQtConfig
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../QtConfig/debug/ -lQtConfig

INCLUDEPATH += $$PWD/../QtConfig
DEPENDPATH += $$PWD/../QtConfig
