#ifndef WORKER_H
#define WORKER_H

#include <qtlib_global.h>
#include <QObject>
#include<QThread>

class QTLIBSHARED_EXPORT Worker : public QObject
{
    Q_OBJECT
public:
    explicit Worker(QObject *parent = 0);
    ~Worker();

signals:
    void finished();
    void error(QString err);
    void signalProgress(const QString &str);

public slots:
    void process();


};

#endif // WORKER_H
