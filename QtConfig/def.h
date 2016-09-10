//--------------------------------------------------------
// file name   : def.h
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef DEF_H
#define DEF_H

#include <QtDebug>
#include <QDir>
#include <QApplication>
#include <QDateTime>
#include <QMetaObject>

#define __PF__                  qDebug() << __PRETTY_FUNCTION__
#define __PF(expr)              __PF__; qDebug() << expr

// SQLite3 database name
#define APPDB                   APPDIR + SEP + APPNAME + ".db"

#define SVR                     "SVR"
#define CLI                     "CLI"
#define NOT_REGISTERED          "Not Registered"
#define NA                      "N/A"
#define NOTFOUND                "Not Found"
#define CONNECTED               "Connected"
#define NOTCONNECTED            "Not Connected"
#define DISCONNECTED            "Disconnected"
#define LOGOUT                  "Logout"

#define CURDATETIME             QDateTime::currentDateTime()
#define CURDATETIME_            CURDATETIME.toString(DATETIMEFORMAT)
#define TODAY                   QDateTime( CURDATETIME )
#define TODAY_                  QString( CURDATETIME.toString(DATEFORMAT) )
#define CURDATE                 QDateTime( CURDATETIME )
#define CURDATE_                QString( CURDATETIME.toString(DATEFORMAT) )
#define CURTIME                 QDateTime( CURDATETIME )
#define CURTIME_                QString( CURDATETIME.toString(TIMEFORMAT) )
#define DATEFORMAT              "yyyy-MM-dd"
#define TIMEFORMAT              "hh:mm:ss"
#define DATETIMEFORMAT          QString("%1 %2").arg(DATEFORMAT).arg(TIMEFORMAT)
#define DATETIME_NA             QDateTime::fromString("1970-01-01 01:01:01", DATETIMEFORMAT)
#define DATETIME_NA_            QString( DATETIME_NA.toString(DATETIMEFORMAT) )

#define UNUSED(expr)            do { (void)(expr); } while(0)

#define SEP                     QDir::separator()
#define APPDIR                  QApplication::applicationDirPath()
#define APPNAME                 QApplication::applicationName()
#define CLASSNAME               QString( metaObject()->className() )
#define mkTEXT(expr)            QString( expr ? CONNECTED : NOTCONNECTED )
#define EXTRADIR                QString( APPDIR + SEP + "Extra" + SEP )
#define qssDIR                  QString( EXTRADIR + "qss" )
#define AUDIODIR                QString( EXTRADIR + "Audio" )
#define PICTUREDIR              QString( EXTRADIR + "Picture" )

// Defined for Taxonomy
#define RUNNINGTEXT             "RUNNINGTEXT"


#endif // DEF_H
