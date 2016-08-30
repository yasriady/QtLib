//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef DMEDIA_H
#define DMEDIA_H

#include "qtlib_global.h"
#include <QFrame>
#include <QProcess>
#include <QtDebug>
#include <QWindow>
#include <QThread>
#include <dsettings.h>

namespace Ui {
class DMedia;
}

class QTLIBSHARED_EXPORT DMedia : public QFrame
{
    Q_OBJECT

public:
    explicit DMedia(QWidget *parent = 0);
    ~DMedia();

    void runMedia();
    WId getWinId(const QString &name);

private:
    Ui::DMedia *ui;
    WId m_wId;

private slots:
    void slotReadyRead();
    void slotFinish(int exitCode);
    void slotReadStandardOutput();
    void slotMediaStarted();
    void on_start_clicked();

protected:
    void showEvent(QShowEvent *event);

};

#endif // DMEDIA_H
