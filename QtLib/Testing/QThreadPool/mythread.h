#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <qtlib_global.h>
#include <QRunnable>
#include <QtDebug>
#include <QThread>

class QTLIBSHARED_EXPORT MyThread : public QRunnable
{
public:
    MyThread();
    ~MyThread();

    void run();

};

#endif // MYTHREAD_H
