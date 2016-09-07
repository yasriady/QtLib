//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef DWIDGET_H
#define DWIDGET_H

#include <QObject>
#include <QWidget>
#include <Inc/Config>
#include <Inc/Object>
#include <Inc/Setting>

class DWidget : public QWidget, public DObject
{
    Q_OBJECT
public:
    explicit DWidget(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());

    void setStyleSheet(QString styleSheet="");

protected:
    QString m_windowName;
    virtual void customInit() = 0;
    void showEvent(QShowEvent *event);
    virtual void closeEvent(QCloseEvent *event);

};

#endif // DWIDGET_H
