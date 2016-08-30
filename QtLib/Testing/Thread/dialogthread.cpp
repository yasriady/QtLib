#include "dialogthread.h"
#include "ui_dialogthread.h"

DialogThread::DialogThread(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogThread)
{
    ui->setupUi(this);

}

DialogThread::~DialogThread()
{
    delete ui;
}

void DialogThread::on_pushButton_StartThread_clicked()
{
    QThread *thread = new QThread();
    Worker *worker = new Worker();
    worker->moveToThread(thread);

    connect( worker, SIGNAL(error(QString)), this, SLOT( errorString(QString) ) );
    connect( thread, SIGNAL(started()), worker, SLOT(process()) );
    connect( worker, SIGNAL(finished()), thread, SLOT(quit()) );
    connect( worker, SIGNAL(finished()), worker, SLOT(deleteLater()) );
    connect( thread, SIGNAL(finished()), thread, SLOT(deleteLater()) );

    connect( worker, SIGNAL(signalProgress(QString)), this, SLOT(slotProgress(QString)) );

    thread->start();
}

void DialogThread::errorString(QString err)
{
}

void DialogThread::slotProgress(const QString &str)
{
}

void DialogThread::on_pushButton_PlaySound_clicked()
{
    //const QString &fileName = "/home/dedy/Downloads/Antrian/suara_angka_antrian___Sounds/nomor-urut.wav";
    const QString &fileName = "/home/dedy/Downloads/Antrian/Antrian/Sound/belasan.wav";
    //QSound sound(fileName);

    playSound2(fileName);

    //sound.play("/home/dedy/Downloads/Antrian/suara_angka_antrian___Sounds/nomor-urut.wav" );

    //sound.play("/home/dedy/Downloads/Antrian/suara_angka_antrian___Sounds/sembilan.wav" );
    //sound.play("/home/dedy/Downloads/Antrian/suara_angka_antrian___Sounds/ratus.wav" );

    //    sound.play("/home/dedy/Downloads/Antrian/suara_angka_antrian___Sounds/lima.wav" );
    //    sound.play("/home/dedy/Downloads/Antrian/suara_angka_antrian___Sounds/puluh.wav" );
    //    sound.play("/home/dedy/Downloads/Antrian/suara_angka_antrian___Sounds/tujuh.wav" );
    //    sound.play("" );

    //    sound.play("/home/dedy/Downloads/Antrian/suara_angka_antrian___Sounds/loket.wav" );

    //    sound.play("/home/dedy/Downloads/Antrian/suara_angka_antrian___Sounds/sebelas.wav" );

    //while(!sound.isFinished());

    //    while ( !sound.isFinished() ) {
    //        QThread::sleep(1000);
    //    }

    //connect(&sound, SIGNAL( ), this, SLOT(deleteLater());

}

void DialogThread::on_pushButton_QSoundEffect_clicked()
{
    //    QSoundEffect effect(this);
    //    effect.setSource(QUrl::fromLocalFile("nomor-urut.wav"));
    //    effect.setLoopCount(1);
    //    effect.setVolume(0.25f);
    //    effect.play();

//    QSoundEffect effect;
//    effect.setSource(QUrl::fromLocalFile("/home/dedy/Downloads/Antrian/suara_angka_antrian___Sounds/nomor-urut.wav"));
//    effect.setVolume(1.0f);
//    effect.play();
//    QEventLoop loop;
//    loop.exec();

    playSound("/home/dedy/Downloads/Antrian/suara_angka_antrian___Sounds/nomor-urut.wav");
    playSound("/home/dedy/Downloads/Antrian/suara_angka_antrian___Sounds/lima.wav");

}

int DialogThread::playSound(const QString &/*fileName*/)
{

//    QSoundEffect effect(this);
//    effect.setSource(QUrl::fromLocalFile(fileName));
//    //effect.setVolume(1.0f);
//    effect.play();
//    //effect.setLoopCount(1);

//    loop.exec();

    return 1;

}

bool DialogThread::playSound2(const QString &/*fileName*/)
{
//    QSound *player = 0; // Creates an object so that you can call player.isFinished()
//    // the isFinished function is not static.

//    player = new QSound(fileName);
//    player->play(fileName);

//    while(!player->isFinished()) {

//    } // waits until the player has finished playing

//    delete player;
//    //this->close(); // closes this widget, and
//    // as this Widget has no parent, i.e. it's the "top-level" widget,
//    // it'll close the app.

//    LOGGER(__PRETTY_FUNCTION__);

    return true;
}

void DialogThread::playMedia(const QString &/*fileName*/)
{
//    QMediaPlayer player(this);
//    //player.setMedia(QUrl("qrc:/home/dedy/Downloads/Antrian/suara_angka_antrian___Sounds/nomor-urut.wav"));
//    player.setMedia( QUrl::fromLocalFile("/home/dedy/Downloads/Antrian/suara_angka_antrian___Sounds/nomor-urut.wav") );
//    player.play();
//    loop.exec();
}

void DialogThread::on_pushButton_PlayMedia_clicked()
{
    playMedia("");
    loop.quit();
    playMedia("");
}
