//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef DSETTINGS_H
#define DSETTINGS_H

#include "qtconfig_global.h"

#include <QSettings>
#include <QDir>
#include "def.h"
#include <QMetaObject>
#include <QFile>

#define GEOMETRY            CLASSNAME + "_" + property("windowName").toString() + "_geometry"
#define STATE               CLASSNAME + "_" + property("windowName").toString() + "_state"

//#define PRIVATESETTING      APPDIR + SEP + "Extra" + SEP + "setting.inx"
#define CONFIGFILE          APPDIR + SEP + "Extra" + SEP + "config.ini"
#define CONFIXFILE          APPDIR + SEP + "Extra" + SEP + "config.inx"

//#define mkSETTING           DSettings *setting = new DSettings(PRIVATESETTING)
#define mkCONFIX            DSettings *confx = new DSettings(CONFIXFILE)
#define mkCONFIG            DSettings *confg = new DSettings(CONFIGFILE)
#define KEY(expr)           QString::fromUtf8( metaObject()->className() ) + "/" + expr

class QTCONFIGSHARED_EXPORT DSettings : public QSettings
{
public:
    DSettings(const QString &fileName);

    void setString(const QString &key, const QString &value);
    QString string(const QString &key, const QString &defaultValue = QString());

    void setBoolean(const QString &key, const bool &value);
    bool boolean(const QString &key, const bool &defaultValue = false );

    void setIntegr(const QString &key, const int &value);
    int integr(const QString &key, const int &defaultValue = 0 );

};

#endif // DSETTINGS_H
