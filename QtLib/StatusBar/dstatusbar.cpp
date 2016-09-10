#include "dstatusbar.h"


DStatusBar::DStatusBar(QWidget *parent)
    : QStatusBar(parent)
{
}

void DStatusBar::showEvent(QShowEvent *event)
{
    QStatusBar::showEvent(event);
    GETBOOL("visible");
}
