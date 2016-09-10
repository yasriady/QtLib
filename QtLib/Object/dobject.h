//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef DOBJECT_H
#define DOBJECT_H

#include "qtlib_global.h"
#include <QString>
#include <QStringList>
#include <QImage>
#include <QPixmap>
#include <QPicture>
//#include "../def.h"
//#include <Inc/Setting>
#include "globals.h"
#include <QFile>
#include <QMessageBox>
#include <QTimer>

#define FN                          __PRETTY_FUNCTION__
#define WARNINGCUSTOMINIT           "WARNING: customInit() was not called."

// window setting
#define OBJECTNAME(expr)            expr->objectName()
#define GEOMETRY(expr)              APPNAME + "_" + OBJECTNAME(expr) + "_" + expr->property("windowName").toString() + "_geometry"
#define STATE(expr)                 APPNAME + "_" + OBJECTNAME(expr) + "_" + expr->property("windowName").toString() + "_state"

enum PIXMAPTYPE {
    Database,
    Network
};

class QTLIBSHARED_EXPORT DObject
{

public:
    DObject();

    QStringList NumericConverter2(const int& n);
    const QString NumericConverter1(const int& n);
    const QString str(const int &i);

public:
    const QString   mkText   (const bool &enable);
    const QImage    mkImage  (const bool &enable);
    const QPixmap   mkPixmap (const bool &connected);
    const QPicture  mkPicture(const bool &enable);

    //const QPixmap   mkPixmap ( PIXMAPTYPE pixmapType, const bool &connected);

    int mkRandom(const int low, const int high);
    QString textFromFile(const QString &filename, const bool &createNew);

    void toggleVisibility(QWidget *w);

    void customInit(QWidget *w, const QString &objectName, const QString &windowTitle, const bool &createNewStylesheet);
protected:
    bool m_visible;
    bool m_customInit;
    void showWarning(const QString &caption, const QString &message);
    void setStyleSheet2(QWidget *w, const bool &createNew, QString styleSheet="");

};

#endif // DOBJECT_H
