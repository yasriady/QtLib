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
    QStackedWidget::showEvent(event);
//    int curIndex = m_confix->integr( KEY1("currentIndex"), 0);
//    setCurrentIndex(curIndex);

    GETINT("currentIndex");

}
