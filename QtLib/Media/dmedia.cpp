#include "dmedia.h"
#include "ui_dmedia.h"

DMedia::DMedia(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::DMedia)
{
    ui->setupUi(this);
    //mkCONFIX;
    if( m_confix->boolean(KEY1("ToolBar"), true) )
        ui->toolBar->show();
    else
        ui->toolBar->hide();

}

DMedia::~DMedia()
{
    delete ui;
}

void DMedia::runMedia()
{

    //mkCONFIX;

    QString program;
    //program = "/usr/bin/mplayer";
    program = "/usr/bin/cvlc";
    //program = "/usr/bin/smplayer";
    QStringList arguments;
    const QString &mediaFile = m_confix->string( KEY1("mediaFile"), "" );
    arguments << mediaFile;  //"/home/dedy/Videos/Movie/Doa-Anak/alif ba ta.mp4";
    //arguments << "/home/dedy/Videos/Movie/Upin_Ipin_Ikhlas_Dari_Hati.iso";
    //arguments << "/home/dedy/Videos/Movie/KungfuPanda.iso";
    //arguments << "/home/dedy/Videos/Movie/Doa-Anak/Huruf Hijaiyah bersama Diva (full version) _ part 1 _ - Kastari Animation Official.mp4";

    QProcess *process = new QProcess(this);
    connect( process, SIGNAL(started()), this, SLOT(slotMediaStarted()) );
    process->setProgram(program);
    process->setArguments(arguments);
    process->start();
    int sleepTime = m_confix->integr(KEY1("sleepTimeToWait"), 500);
    QThread::msleep(sleepTime);

//    //WId wId = getWinId("mplayer2");
//    WId wId = getWinId("VLC media player");
//    //WId wId = getWinId("SMPlayer");
//    QWindow *window = QWindow::fromWinId(wId);
//    // create container
//    QWidget *widget = QWidget::createWindowContainer(window);
//    layout()->addWidget(widget);

//    qDebug() << wId;
}

void DMedia::slotMediaStarted()
{
    //QProcess* process= qobject_cast<QProcess*>(sender());
    //WId wId = getWinId("mplayer2");
    WId wId = getWinId("VLC media player");
    //WId wId = getWinId("SMPlayer");
    QWindow *window = QWindow::fromWinId(wId);
    // create container
    QWidget *widget = QWidget::createWindowContainer(window);
    layout()->removeItem( ui->verticalSpacer );
    layout()->addWidget(widget);
    qDebug() << wId;
}

WId DMedia::getWinId(const QString &name)
{
    QString program = "/usr/bin/xwininfo";
    QStringList arguments;
    arguments << "-name" << name;
    QProcess *process = new QProcess(this);
    connect( process, SIGNAL(readyReadStandardOutput()), this, SLOT(slotReadStandardOutput()) );
    //connect( process, SIGNAL( finished(int)), this, SLOT(slotFinish(int)));
    //connect( process, SIGNAL( readyRead() ), this, SLOT(slotReadyRead()) );
    process->start(program, arguments);
    process->waitForFinished();
    return m_wId;
}

void DMedia::slotReadyRead()
{
    // BISA
    //QProcess *process = qobject_cast<QProcess*>(sender());
    //QByteArray byteArray = process->readAll();
    //qDebug() << byteArray;
    //qDebug() << __PRETTY_FUNCTION__;
}

void DMedia::slotFinish(int exitCode)
{
    (void) exitCode;
    // BISA
    //QProcess *process = qobject_cast<QProcess*>(sender());
    //QByteArray byteArray = process->readAllStandardOutput();
    //qDebug() << byteArray;
    //qDebug() << __PRETTY_FUNCTION__;
}

void DMedia::slotReadStandardOutput()
{
    // BISA
    QProcess *process = qobject_cast<QProcess*>(sender());
    QString output = process->readAllStandardOutput();

    // 0x4400001
    //QRegularExpression hextMatcher("[a-z]+\:.+", QRegularExpression::CaseInsensitiveOption);
    QRegularExpression hextMatcher("0x[0-9A-F]{7}");    //http://www.perlmonks.org/?node_id=629540
    QRegularExpressionMatch     match = hextMatcher.match(output);
    m_wId = 0x0000000;
    if( match.hasMatch() )
    {
        QString hex = match.captured();
        //qDebug() << hex;
        m_wId = (WId) hex.toUInt(NULL, 16);
    }

    //qDebug() << m_wId;
    //qDebug() << __PRETTY_FUNCTION__;
}


void DMedia::on_start_clicked()
{
    runMedia();
}

void DMedia::showEvent(QShowEvent */*event*/)
{
    //mkCONFIX;
    const bool &autoStart = m_confix->boolean( KEY1("autoStart"), true );
    if( autoStart )
        runMedia();
}
