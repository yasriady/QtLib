#-------------------------------------------------
#
# Project created by QtCreator 2016-08-20T03:48:44
#
#-------------------------------------------------

CONFIG  += c++11

QT      -= gui

QT      += widgets

TARGET = QtConfig
TEMPLATE = lib

DEFINES += QTCONFIG_LIBRARY

SOURCES += qtconfig.cpp \
    dsettings.cpp

HEADERS += qtconfig.h\
        qtconfig_global.h \
    dsettings.h \
    def.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

DISTFILES +=
