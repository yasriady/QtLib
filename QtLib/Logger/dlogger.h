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

//#define LOGGER(msg)      ui->logger->showResult(msg)

namespace Ui {
class DLogger;
}

class DLogger : public QWidget
{
    Q_OBJECT

public:
    explicit DLogger(QWidget *parent = 0);
    ~DLogger();

    void showResult(QString str);
    void log(QString str);

private slots:
    void on_textEdit_textChanged();
    void on_clear_clicked();
    void on_about_clicked();

private:
    Ui::DLogger *ui;
};

#endif // DLOGGER_H
