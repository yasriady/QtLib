#include "dpushbutton.h"

DPushButton::DPushButton(QWidget *parent)
    : QPushButton(parent)
{
    m_xFactor = false;
    m_yFactor = false;
}

DPushButton::DPushButton(const QString &text, QWidget *parent)
    : QPushButton(text, parent)
{
    m_xFactor = false;
    m_yFactor = false;
}

DPushButton::DPushButton(const QIcon &icon, const QString &text, QWidget *parent)
    :QPushButton(icon, text, parent)
{
    m_xFactor = false;
    m_yFactor = false;
}

DPushButton::~DPushButton()
{
}

void DPushButton::paintEvent(QPaintEvent *event)
{

    setText("");
    QPushButton::paintEvent(event);

    QPainter painter(this);
    QRectF drawRect = event->rect();

    int flags = Qt::TextDontClip|Qt::TextWordWrap; //more flags if needed
    QRect fontBoundRect = painter.fontMetrics().boundingRect(drawRect.toRect(),flags, m_text);
    float xFactor = drawRect.width() / fontBoundRect.width();
    float yFactor = drawRect.height() / fontBoundRect.height();

    float factor;
    if( m_yFactor ) {
        factor = yFactor * 0.90;
    } else if( m_xFactor ) {
        factor = xFactor * 1.00;
    } else {
        factor = xFactor < yFactor ? xFactor : yFactor;
        factor =  factor * 0.80; // Ddy: resized to make a bit smaller
    }

    QFont f = font();
    f.setPointSizeF(f.pointSizeF()*factor);
    painter.setFont(f);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.drawText(drawRect, Qt::AlignCenter, m_text);

}

void DPushButton::showEvent(QShowEvent *event)
{
    m_xFactor = property("xFactor").toBool();
    m_yFactor = property("yFactor").toBool();
    m_text = text();
    //    QPushButton::setText("");
    QPushButton::showEvent(event);
}

void DPushButton::setText(const QString &text)
{
    //clear();m_text
    //m_text = text;
    QPushButton::setText(text);
}

QString DPushButton::text() const
{
    return QPushButton::text();
}
