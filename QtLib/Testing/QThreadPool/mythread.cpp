#include "mythread.h"

MyThread::MyThread()
{

}

MyThread::~MyThread()
{

}

void MyThread::run()
{
    for( int i=0; i<1000; i++ ) {
        qDebug() << QString("MyThread").toLatin1();
        QThread::msleep(500);
    }

}
