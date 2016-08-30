//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef DSTATUSBAR_H
#define DSTATUSBAR_H

#include "qtlib_global.h"
#include <QStatusBar>

class QTLIBSHARED_EXPORT DStatusBar : public QStatusBar
{
public:
    explicit DStatusBar(QWidget *parent = Q_NULLPTR);

};

#endif // DSTATUSBAR_H