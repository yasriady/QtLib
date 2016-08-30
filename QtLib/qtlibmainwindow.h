//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef QTLIBMAINWINDOW_H
#define QTLIBMAINWINDOW_H

#include <QMainWindow>
#include <Testing/QThreadPool/mythread.h>
#include <QThreadPool>
#include <QPainter>

namespace Ui {
class QtLibMainWindow;
}

class QtLibMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtLibMainWindow(QWidget *parent = 0);
    ~QtLibMainWindow();

private slots:
    void on_pushButton_QThreadPool_clicked();

    void on_pushButton_AdaptFontSize_clicked();

private:
    Ui::QtLibMainWindow *ui;


private:
    void adaptFontSize(QPainter* painter, int flags, QRectF drawRect, QString string);

};

#endif // QTLIBMAINWINDOW_H
