#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <qtlib_global.h>
#include <QWidget>
#include <QPaintEvent>
#include <QPainter>

class QTLIBSHARED_EXPORT MyWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget *parent = 0);

signals:

public slots:

private:
    virtual void paintEvent(QPaintEvent* event);
    //adaptFontSize(QPainter * painter, int flags, QRectF drawRect, QString text);

};

#endif // MYWIDGET_H
