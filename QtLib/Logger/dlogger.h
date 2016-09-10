//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef DLOGGER_H
#define DLOGGER_H

#include <QWidget>
#include "q_debugstream.h"
#include <dsettings.h>
#include <QTimer>
#include <Inc/Widget>

//#define LOGGER(msg)      ui->logger->showResult(msg)

namespace Ui {
class DLogger;
}

class DLogger : public DWidget
{
    Q_OBJECT

    const QString VISIBLE = KEY1("visible");

public:
    explicit DLogger(QWidget *parent = 0);
    ~DLogger();

    void showResult(QString str);
    void log(QString str);
    //void showToggle();

private slots:
    void on_textEdit_textChanged();
    void on_clear_clicked();
    void on_about_clicked();
    void on_hide_clicked();
    //void customInit();

private:
    Ui::DLogger *ui;
    //bool m_shown;

protected:
    //void showEvent(QShowEvent *event);

};

#endif // DLOGGER_H
