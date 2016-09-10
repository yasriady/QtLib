#include "dcallersoundalsa.h"

DCallerSoundAlsa::DCallerSoundAlsa(QObject *parent) : QObject(parent)
{

}

DCallerSoundAlsa::~DCallerSoundAlsa()
{

}

void DCallerSoundAlsa::call(const QStringList &fileList)
{   // play list of files
    QThread *thread = new QThread();
    DCallerSoundWorker *worker = new DCallerSoundWorker();

    worker->setFileList(fileList);
 
    worker->moveToThread(thread);
    connect( worker, SIGNAL(finished()), this, SLOT(finished()) );                  // Ddy
    connect( worker, SIGNAL(error(QString)), this, SLOT(errorString(QString)) );
    connect( thread, SIGNAL(started()), worker, SLOT(playFileList()) );
    connect( worker, SIGNAL(finished()), thread, SLOT(quit()) );
    connect( worker, SIGNAL(finished()), worker, SLOT(deleteLater()) );
    connect( thread, SIGNAL(finished()), thread, SLOT(deleteLater()) );
    thread->start();
}

void DCallerSoundAlsa::call(const QString &fileName)
{
    QStringList fileList;
    fileList << fileName;
    call(fileList);
}

void DCallerSoundAlsa::errorString(QString error)
{
    //qDebug( __PRETTY_FUNCTION__);
}

void DCallerSoundAlsa::finished()
{
    //qDebug( __PRETTY_FUNCTION__ );
    emit signalSoundFinish();
}
