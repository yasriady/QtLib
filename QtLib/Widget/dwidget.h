//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef DWIDGET_H
#define DWIDGET_H

#include <QObject>
#include <QWidget>
#include <Inc/Config>
#include <Inc/Object>
//#include <Inc/Setting>
#include "globals.h"
#include <QTimer>

class DWidget : public QWidget, public DObject
{
    Q_OBJECT
public:
    explicit DWidget(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
    void toggleVisibility() { DObject::toggleVisibility(this); }

protected:
    void closeEvent(QCloseEvent *event);
    //void resizeEvent(QResizeEvent *event);

protected Q_SLOTS:
    void windowLoaded();

};

#endif // DWIDGET_H
