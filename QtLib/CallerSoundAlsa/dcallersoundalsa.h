#ifndef DCALLERSOUNDALSATHREAD_H
#define DCALLERSOUNDALSATHREAD_H

#include <QObject>
#include <QThread>
#include "dcallersoundworker.h"

class DCallerSoundAlsa : public QObject
{
    Q_OBJECT
public:
    explicit DCallerSoundAlsa(QObject *parent = 0);
    ~DCallerSoundAlsa();

    void call(const QStringList &fileList);
    void call(const QString &fileName);
    //void call(const QStringList &fileList);

signals:
    void signalSoundFinish();

public slots:

private slots:
    void errorString(QString error);
    void finished();

private:

};

#endif // DCALLERSOUNDALSATHREAD_H
