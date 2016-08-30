#ifndef SOUND_H
#define SOUND_H

#include <qtlib_global.h>
#include <QFile>
#include <QBuffer>
#include <QAudioFormat>
#include <QAudioDeviceInfo>
#include <QAudioOutput>

class QTLIBSHARED_EXPORT Sound
{
public:
    Sound();

public:
    void run();
};

#endif // SOUND_H
