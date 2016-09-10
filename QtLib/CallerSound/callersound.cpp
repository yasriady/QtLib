#include "callersound.h"

DCallerSound::DCallerSound(QObject *parent)
    : QObject(parent)
{
}

DCallerSound::~DCallerSound()
{
}

void DCallerSound::call(const int &number)
{
    m_curIdx = 0;
    m_strList = NumericConverter2(number);
    playSomeSound();
    call(m_strList);
}

void DCallerSound::call(const QStringList &list)
{
    m_curIdx = 0;
    m_strList=list;
    playSomeSound();
}

void DCallerSound::playSomeSound()
{
    //mkCONFIX;
    QSoundEffect *s = new QSoundEffect(this);
    connect(s, SIGNAL(playingChanged()), this, SLOT(soundPlayingChanged()) );
    QString str = m_strList[m_curIdx];
    str = EXTRADIR + m_confix->string( KEY1("audioDir"), "Audio/subdir" ) + SEP + str + ".wav";
    //qDebug() << str;
    s->setSource(QUrl::fromLocalFile(str));
    m_curIdx++;
    s->play();
}

void DCallerSound::soundPlayingChanged()
{
    QSoundEffect *s = qobject_cast<QSoundEffect*>(sender());
    //  will also be called when playing was started, so check if really finished
    if( !s->isPlaying() )
    {
        s->deleteLater();
        // Do what you need to to if playing finished
        if( m_curIdx < m_strList.size() ) {
            QThread:: msleep(100);
            playSomeSound();
        } else {
            //qDebug() << "FINISH";
            emit signalSoundFinish();
        }
    }
}

//QStringList DCallerSound::NumConverter(const int &n)
//{
//    QString str = NumericConverter(n);
//    str = str.trimmed();
//    str = str.replace("  ", "");
//    QStringList strList = str.split(" ");
//    return strList;
//}

//QString DCallerSound::NumericConverter(const int &n)
//{
//    if (n < 0) {
//        return "negatif " + NumericConverter(-n);
//    } else if (n < 10) {
//        return satuan[n];
//    } else if (n == 10) { // khusus untuk sepuluh
//        return "sepuluh ";
//    } else if (n == 11) { // khusus untuk sebelas
//        return "sebelas ";
//    } else if (n < 20) {
//        return satuan[n-10] + "belas ";
//    } else if (n < 100) {
//        return satuan[(n-(n%10))/10] + "puluh " + NumericConverter(n % 10);
//    } else if (n < 1000) {
//        return (n < 200 ? "seratus " : satuan[(n-(n%100))/100] + "ratus ") + NumericConverter(n % 100);
//    } else if (n < 1000000) {
//        return (n < 2000 ? "seribu " : NumericConverter((n-(n%1000))/1000) + "ribu ") + NumericConverter(n % 1000);
//    } else if (n < 1000000000) {
//        return NumericConverter((n-(n%1000000))/1000000) + "juta " + NumericConverter(n % 1000000);
//    } else {
//        return "Angka lebih besar dari 999,999,999 (harus kurang dari 1 Milyar)";
//    }
//}

