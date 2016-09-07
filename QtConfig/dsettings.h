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

#define CONFIGFILE                      APPDIR + SEP + "Extra" + SEP + APPNAME + ".ini"     //"config.ini"
#define CONFIXFILE                      APPDIR + SEP + "Extra" + SEP + APPNAME + ".inx"     //"config.inx"

#define mkCONFIX                        DSettings *confx = new DSettings(CONFIXFILE)
#define mkCONFIG                        DSettings *confg = new DSettings(CONFIGFILE)
#define KEY(expr)                       QString( objectName() ) + "/" + expr
#define KEY2(expr)                      QString( metaObject()->className() ) + "/" + expr   // used by DBManager only

#define SHOWME(expr)                    mkCONFIX; bool show = confx->boolean( KEY(expr), true );    if( !show ) hide();

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
