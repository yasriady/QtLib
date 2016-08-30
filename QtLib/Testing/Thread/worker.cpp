#include "worker.h"

Worker::Worker(QObject *parent) : QObject(parent)
{

}

Worker::~Worker()
{

}

void Worker::process()
{
    for(int i=0; i< 10; i++)  {
        //qDebug(__PRETTY_FUNCTION__);
        emit signalProgress("MMDF");
        QThread::msleep(1000);
    }
}
