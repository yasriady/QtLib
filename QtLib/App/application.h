//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef APPLICATION_H
#define APPLICATION_H

#include "qtlib_global.h"
#include <QtWidgets/QApplication>
#include <QMetaObject>
#include <Config>
#include <Inc/Object>

class QTLIBSHARED_EXPORT Application : public QApplication, public DObject
{
public:
    Application(int &argc, char **argv, int = ApplicationFlags);


};

#endif // APPLICATION_H
