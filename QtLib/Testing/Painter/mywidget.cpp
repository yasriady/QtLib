#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{

}

void MyWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    //QRectF drawRect = QRectF(9.5, 9.5, 100, 50);
    QRectF drawRect = event->rect();
    int flags = Qt::TextDontClip|Qt::TextWordWrap; //more flags if needed
    QRect fontBoundRect =
          painter.fontMetrics().boundingRect(drawRect.toRect(),flags, "OK");
    float xFactor = drawRect.width() / fontBoundRect.width();
    float yFactor = drawRect.height() / fontBoundRect.height();
    float factor = xFactor < yFactor ? xFactor : yFactor;
    QFont f = painter.font();
    f.setPointSizeF(f.pointSizeF()*factor);
    painter.setFont(f);


    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::black);
    painter.drawText(drawRect, Qt::AlignCenter, "OK");
    painter.drawRect(drawRect);



}

//MyWidget::adaptFontSize(QPainter *painter, int flags, QRectF drawRect, QString text)
//{
//}
