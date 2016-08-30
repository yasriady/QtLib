//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef DMAINWINDOW_H
#define DMAINWINDOW_H

#include <QMainWindow>
#include <QtDebug>
#include <Object/dobject.h>
#include <QDir>
#include <Config>

namespace Ui {
class DMainWindow;
}

class QTLIBSHARED_EXPORT DMainWindow : public QMainWindow, public DObject
{
    Q_OBJECT

public:
    explicit DMainWindow(QWidget *parent = 0);
    virtual ~DMainWindow();

private:
    Ui::DMainWindow *ui;
    QString m_windowName;

protected:
    void init();
    virtual void closeEvent(QCloseEvent *event);
    virtual void showEvent(QShowEvent *event);
    void setStyleSheet(QString styleSheet="");


};

#endif // DMAINWINDOW_H
