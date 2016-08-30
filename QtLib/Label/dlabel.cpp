#include "dlabel.h"

DLabel::DLabel(QWidget *parent, Qt::WindowFlags f)
    : QLabel( parent, f )
{
    m_text = QLabel::text();
    clear();
}

void DLabel::paintEvent(QPaintEvent *event)
{
    QLabel::paintEvent(event);

    QString string = m_text;
    QPainter painter(this);
    QRectF drawRect = event->rect();
    int flags = Qt::TextDontClip|Qt::TextWordWrap; //more flags if needed
    QRect fontBoundRect = painter.fontMetrics().boundingRect(drawRect.toRect(),flags, string);
    float xFactor = drawRect.width() / fontBoundRect.width();
    float yFactor = drawRect.height() / fontBoundRect.height();

    float factor;
    if( m_yFactor ) {
        factor = yFactor * 0.90;
    } else if( m_xFactor ) {
        factor = xFactor * 1.00;
    } else {
        factor = xFactor < yFactor ? xFactor : yFactor;
        factor =  factor * 1.0;
    }

    QFont f = painter.font();
    f.setPointSizeF(f.pointSizeF()*factor);
    painter.setFont(f);
    painter.setRenderHint(QPainter::Antialiasing);
    //painter.setPen(Qt::black);
    //painter.drawText(drawRect, Qt::AlignCenter, string);
    painter.drawText(drawRect, alignment(), string);
    //painter.drawRect(drawRect);

}

void DLabel::showEvent(QShowEvent */*event*/)
{
    m_xFactor = property("xFactor").toBool();
    m_yFactor = property("yFactor").toBool();
}

void DLabel::setText(const QString &text)
{
    m_text = text;
    QLabel::setText(text);
    clear();
}

QString DLabel::text() const
{
    QString txt = m_text;
    return txt;
}

void DLabel::setPixmapFile(const QString &filename)
{__PF(filename);
    const QPixmap &pixmap( EXTRADIR + filename);
    QLabel::setPixmap(pixmap);
}
