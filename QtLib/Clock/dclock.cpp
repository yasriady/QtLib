#include "dclock.h"

DClock::DClock(QWidget *parent, Qt::WindowFlags f)
    : DLabel(parent, f)
{

    QTimer *timer = new QTimer(this);
    connect( timer, SIGNAL(timeout()), this, SLOT(slotTimer()) );
    timer->start(1000);
}

void DClock::slotTimer()
{
    const QString &tm = QTime::currentTime().toString();
    setText(tm);
}

void DClock::showEvent(QShowEvent *event)
{
    slotTimer();
    DLabel::showEvent(event);
}
