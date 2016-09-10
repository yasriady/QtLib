#ifndef DSTACKEDWIDGET_H
#define DSTACKEDWIDGET_H

#include <QStackedWidget>
//#include <Inc/Setting>
#include "globals.h"

class DStackedWidget : public QStackedWidget
{
    Q_OBJECT

public:
    explicit DStackedWidget(QWidget *parent = 0);
    ~DStackedWidget();

protected:
    void showEvent(QShowEvent *event);

};

#endif // DSTACKEDWIDGET_H
