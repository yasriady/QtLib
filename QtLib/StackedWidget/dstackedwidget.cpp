#include "dstackedwidget.h"

DStackedWidget::DStackedWidget(QWidget *parent) :
    QStackedWidget(parent)
{
}

DStackedWidget::~DStackedWidget()
{
}

void DStackedWidget::showEvent(QShowEvent *event)
{
    mkCONFIX;
    int curIndex = confx->integr( KEY("stackedWidget"), 0);
    setCurrentIndex(curIndex);
    QStackedWidget::showEvent(event);
}
