//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef DCLOCK_H
#define DCLOCK_H

#include "qtlib_global.h"
#include <Label/dlabel.h>
#include <QTimer>
#include <dsettings.h>

class QTLIBSHARED_EXPORT DClock : public DLabel
{
    Q_OBJECT
public:
    explicit DClock(QWidget *parent=Q_NULLPTR, Qt::WindowFlags f=Qt::WindowFlags());

private:
    QTimer *m_timer;

private slots:
    void slotTimer();

protected:
    void showEvent(QShowEvent *event);

};

#endif // DCLOCK_H
