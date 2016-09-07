#include "dcallersoundworker.h"

DCallerSoundWorker::DCallerSoundWorker(QObject *parent) : QObject(parent)
{
    m_process = new QProcess(this);
}

DCallerSoundWorker::~DCallerSoundWorker()
{
    delete m_process;
}

void DCallerSoundWorker::setFileName(const QString &fileName)
{
    m_fileName = fileName;
}

void DCallerSoundWorker::setFileList(const QStringList &fileList)
{
    m_fileList = fileList;
}

void DCallerSoundWorker::playWav(char *fileName)
{
    const QString &program = "/usr/bin/aplay";
    QStringList arguments;
    //arguments << "/satu.wav";
    arguments << fileName;
    m_process->start(program, arguments);
    m_process->waitForFinished();
    //qDebug( "sound Finished" );
}

// why still not running on RaspberryPi2 ?
void DCallerSoundWorker::playWav2(char *fileName)
{
    m_wavFile = new WavFile(fileName);

    unsigned int pcm, tmp;//, dir;
    int channels, format;
    unsigned int rate;
    snd_pcm_t *pcm_handle;
    snd_pcm_hw_params_t *params;
    snd_pcm_uframes_t frames;
    char *buff = NULL;
    int buff_size;
    int readfd, readval = 0;

//    rate     = RATE;
//    channels = CHANNELS;
//    format   = FORMAT;
    rate     = m_wavFile->getSampleRate();
    channels = m_wavFile->getChannels();
    format   = 2;//m_wavFile->getFormat();

    /* Open the PCM device in playback mode */
    if (pcm = snd_pcm_open(&pcm_handle, PCM_DEVICE,
                           SND_PCM_STREAM_PLAYBACK, 0) < 0)
        printf("ERROR: Can't open \"%s\" PCM device. %s\n",
               PCM_DEVICE , snd_strerror(pcm));

    /* Allocate parameters object and fill it with default values*/
    snd_pcm_hw_params_alloca(&params);
    snd_pcm_hw_params_any(pcm_handle, params);

    /* Set parameters */
    if (pcm = snd_pcm_hw_params_set_access(pcm_handle, params,
                                           SND_PCM_ACCESS_RW_INTERLEAVED) < 0)
        printf("ERROR: Can't set interleaved mode. %s\n", snd_strerror(pcm));

    if (pcm = snd_pcm_hw_params_set_format(pcm_handle, params,
                                           (snd_pcm_format_t) format) < 0)
        printf("ERROR: Can't set format. %s\n", snd_strerror(pcm));

    if (pcm = snd_pcm_hw_params_set_channels(pcm_handle, params, channels) < 0)
        printf("ERROR: Can't set channels number. %s\n", snd_strerror(pcm));

    if (pcm = snd_pcm_hw_params_set_rate_near(pcm_handle, params, &rate, 0) < 0)
        printf("ERROR: Can't set rate. %s\n", snd_strerror(pcm));

    /* Write parameters */
    if (pcm = snd_pcm_hw_params(pcm_handle, params) < 0)
        printf("ERROR: Can't set harware parameters. %s\n", snd_strerror(pcm));

    /* Resume information */
    printf("PCM name: '%s'\n", snd_pcm_name(pcm_handle));

    printf("PCM state: %s\n",  snd_pcm_state_name(snd_pcm_state(pcm_handle)));

    snd_pcm_hw_params_get_channels(params, &tmp);
    printf("channels: %i ", tmp);

    if (tmp == 1)
        printf("(mono)\n");
    else if (tmp == 2)
        printf("(stereo)\n");

    snd_pcm_hw_params_get_rate(params, &tmp, 0);
    printf("rate: %d bps\n", tmp);

    /* Allocate buffer to hold single period */
    snd_pcm_hw_params_get_period_size(params, &frames, 0);
    printf("frames: %d\n", (int)frames);

    buff_size = frames * channels * 2 /* 2 -> sample size */;
    buff = (char *) malloc(buff_size);
    memset(buff, 0, buff_size);

    snd_pcm_hw_params_get_period_time(params, &tmp, NULL);

    //readfd = open(fileName, O_RDONLY);
    readfd = open( m_wavFile->getFileName(), O_RDONLY);
    if (readfd < 0) {
        perror("wavread");
        exit(1);
    }

    while(readval = read(readfd, buff, buff_size) > 0) {
        if (pcm = snd_pcm_writei(pcm_handle, buff, frames) == -EPIPE) {
            fprintf(stderr, "Underrun!\n");
            snd_pcm_prepare(pcm_handle);
        } else if (pcm < 0) {
            fprintf(stderr, "Error writing to PCM device: %s\n", snd_strerror(pcm));
        }
    }

    snd_pcm_drain(pcm_handle);
    snd_pcm_close(pcm_handle);
    free(buff);

}

bool DCallerSoundWorker::fileExist(const QString &filename)
{
    bool result = ( QFile::exists(filename) ) ? true : false;
    return result;
}

void DCallerSoundWorker::process()
{
    //qDebug( __PRETTY_FUNCTION__ );
    emit finished();
}

void DCallerSoundWorker::playFileList()
{
    foreach (QString file, m_fileList)    {

        m_fileName = AUDIOFILE(file);

        if( QFile::exists( m_fileName ) )
        {
            //qDebug( QString("Now playing %1").arg(m_fileName).toUtf8() );
            playWav(  m_fileName.toUtf8().data() );
        } else
        {
            qDebug( QString("File NOT EXIST: %1").arg(m_fileName).toUtf8() );
        }
    }
    emit finished();
}

//void DCallerSoundWorker::playFileName()
//{
//    m_fileList.clear();
//    m_fileList << m_fileName;
//    playFileList();
//}
