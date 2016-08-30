#ifndef DIALOGTHREAD_H
#define DIALOGTHREAD_H

#include <qtlib_global.h>
#include <QDialog>
#include <QThread>
#include "worker.h"
#include <QEventLoop>
//#include <QSound>
//#include <QSoundEffect>
//#include <QMediaPlayer>

// https://mayaposch.wordpress.com/2011/11/01/how-to-really-truly-use-qthreads-the-full-explanation/

namespace Ui {
class DialogThread;
}

class QTLIBSHARED_EXPORT DialogThread : public QDialog
{
    Q_OBJECT

public:
    explicit DialogThread(QWidget *parent = 0);
    ~DialogThread();

private slots:
    void on_pushButton_StartThread_clicked();

private:
    Ui::DialogThread *ui;

private slots:
    void errorString(QString err);
    void slotProgress(const QString &str);


    void on_pushButton_PlaySound_clicked();
    void on_pushButton_QSoundEffect_clicked();

    void on_pushButton_PlayMedia_clicked();

private:
    int playSound(const QString &);
    bool playSound2(const QString &fileName);
    void playMedia(const QString &fileName);

    QEventLoop loop;


};

#endif // DIALOGTHREAD_H
