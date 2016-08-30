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
//#include <dsettings.h>
#include <QFile>

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

private:
//    const QString satuan[10] = {    "", "satu ", "dua ", "tiga ", "empat ", "lima ", "enam ", "tujuh ", "delapan ", "sembilan " };

public:
    const QString   mkText   (const bool &enable);
    const QImage    mkImage  (const bool &enable);
    const QPixmap   mkPixmap (const bool &connected);
    const QPicture  mkPicture(const bool &enable);

    //const QPixmap   mkPixmap ( PIXMAPTYPE pixmapType, const bool &connected);

    int mkRandom(const int low, const int high);
    QString textFromFile(const QString &filename);

protected:

};

#endif // DOBJECT_H
