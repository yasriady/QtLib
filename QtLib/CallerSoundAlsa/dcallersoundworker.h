#ifndef DCALLERSOUNDWORKER_H
#define DCALLERSOUNDWORKER_H

#include <QObject>
#include <alsa/asoundlib.h>
#include <QFile>
#include <Inc/Config>
#include "wavfile.h"

// urgent, alternative playing wav using aplay QProcess
#include <QProcess>

#define PCM_DEVICE      "default"
// wav spec
#define RATE            24000
#define CHANNELS        1
#define FORMAT          2
#define AUDIOFILE(expr) EXTRADIR + "Audio" + SEP + "Google_1"  + SEP + expr + ".wav"

class DCallerSoundWorker : public QObject
{
    Q_OBJECT
public:
    explicit DCallerSoundWorker(QObject *parent = 0);
    ~DCallerSoundWorker();

    void setFileName(const QString &fileName);
    void setFileList(const QStringList &fileList);

private:
    void playWav(char *fileName);
    void playWav2(char *fileName);
    QString m_fileName;
    QStringList m_fileList;
    bool fileExist(const QString &filename);
    WavFile *m_wavFile;
    QProcess *m_process;

signals:
    void finished();
    void error(QString error);

public slots:
    void process();
    void playFileList();
    //void playFileName();

};

#endif // DCALLERSOUNDWORKER_H
