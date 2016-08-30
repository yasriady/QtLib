#ifndef MYSOUND_H
#define MYSOUND_H

#include <qtlib_global.h>
#include <QObject>
#include <QTimer>
//#include <QSound>

#define SNDFILE "/home/dedy/Downloads/Antrian/suara_angka_antrian___Sounds/nomor-urut.wav"

class QTLIBSHARED_EXPORT MySound : public QObject
{
    Q_OBJECT
public:
    explicit MySound(QObject *parent = 0);

signals:

public slots:

private slots:
    void onTimeout();

private:
    QTimer *timer;
    //QSound *sound;

public:
    void playSound(const QString &fileName);

    bool isPlaying;

};

#endif // MYSOUND_H
