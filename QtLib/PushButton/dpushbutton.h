//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef DPUSHBUTTON_H
#define DPUSHBUTTON_H

#include "qtlib_global.h"
#include <QObject>
#include <QPushButton>
#include <QShowEvent>
#include <QPaintEvent>
#include <QPainter>
#include <Config>

class QTLIBSHARED_EXPORT DPushButton : public QPushButton
{
public:
    explicit DPushButton(QWidget *parent = Q_NULLPTR);
    explicit DPushButton(const QString &text, QWidget *parent = Q_NULLPTR);
    explicit DPushButton(const QIcon& icon, const QString &text, QWidget *parent = Q_NULLPTR);
    ~DPushButton();

private:
    QString m_text;
    bool m_xFactor, m_yFactor;

protected:
    virtual void paintEvent(QPaintEvent *event);
    virtual void showEvent(QShowEvent *event);

public slots:
    void setText(const QString &text);
    QString text() const;

};

#endif // DPUSHBUTTON_H
