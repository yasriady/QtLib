//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef DLABEL_H
#define DLABEL_H

#include "qtlib_global.h"
#include <QObject>
#include <QLabel>
#include <QShowEvent>
#include <QPaintEvent>
#include <QPainter>
#include <dsettings.h>

class QTLIBSHARED_EXPORT DLabel : public QLabel
{
    Q_OBJECT
public:
    explicit DLabel(QWidget *parent=Q_NULLPTR, Qt::WindowFlags f=Qt::WindowFlags());

protected:
    QString m_text;
    bool m_xFactor, m_yFactor;
    virtual void paintEvent(QPaintEvent *event);
    virtual void showEvent(QShowEvent *event);

public slots:
    void setText(const QString &text);
    QString text() const;

};

#endif // DLABEL_H
