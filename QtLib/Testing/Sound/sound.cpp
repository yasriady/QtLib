#include "sound.h"

Sound::Sound()
{

}

void Sound::run()
{
    QFile audio_file("mResourcePath");
    if(audio_file.open(QIODevice::ReadOnly)) {
        audio_file.seek(44); // skip wav header
        QByteArray audio_data = audio_file.readAll();
        audio_file.close();

        QBuffer* audio_buffer = new QBuffer(&audio_data);
        //qDebug() << audio_buffer->size();

        QAudioFormat format;

        format.setSampleSize(16);
        format.setSampleRate(44100);
        format.setChannelCount(2);
        format.setCodec("audio/pcm");
        format.setByteOrder(QAudioFormat::LittleEndian);
        format.setSampleType(QAudioFormat::UnSignedInt);

        QAudioDeviceInfo info(QAudioDeviceInfo::defaultOutputDevice());
        if (!info.isFormatSupported(format)) {
            //qWarning()<<"raw audio format not supported by backend, cannot play audio.";
            return;
        }
        //qDebug() << info.deviceName();

        QAudioOutput* output = new QAudioOutput(info, format);
        output->start(audio_buffer);
    }

}
