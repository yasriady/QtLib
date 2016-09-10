#include "application.h"
Application::Application(int &argc, char **argv, int)
    : QApplication( argc, argv )
{
    // init directory, make Extra dir
    //const QString &dirPath = QString( EXTRADIR );
    QDir *dir = new QDir(EXTRADIR);
    if( !dir->exists() )
    {
        dir->mkdir(EXTRADIR);
        dir->mkdir(qssDIR);
        dir->mkdir(AUDIODIR);
        dir->mkdir(PICTUREDIR);
    }

//    mkCONFIX;
//    // stylesheet
//    const QString &qssFile = EXTRADIR +  confx->string( KEY("styeSheet"), "path-to-styleSheet" );
//    //QFile File( qssFile );
//    //File.open(QFile::ReadOnly);
//    //QString StyleSheet = QLatin1String(File.readAll());
//    qApp->setStyleSheet( textFromFile( qssFile ) );


}
