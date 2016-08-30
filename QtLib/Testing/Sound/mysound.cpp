#include "mysound.h"

MySound::MySound(QObject *parent) : QObject(parent)
{
    isPlaying = true;
}

void MySound::onTimeout()
{
//    if( sound->isFinished() )
//    {
//        timer->stop();
//        //Do something
//        isPlaying = false;
//    }

}

void MySound::playSound(const QString &/*fileName*/)
{
//    sound = new QSound(SNDFILE);

//    timer = new QTimer();
//    connect(timer, SIGNAL(timeout()), this, SLOT(onTimeout()));

//    // Starting sound
//    sound->play(SNDFILE);
//    timer->start(1000);   // millisecond
}

