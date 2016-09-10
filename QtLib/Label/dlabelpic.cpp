#include "dlabelpic.h"

DLabelPic::DLabelPic(QWidget *parent, Qt::WindowFlags f)
{
}

void DLabelPic::setPixmapFile(const QString &filename)
{
    const QPixmap &pixmap( filename);
    QLabel::setPixmap(pixmap);
    qDebug() << filename;

}

void DLabelPic::showEvent(QShowEvent *event)
{
    //mkCONFIX;
    m_pixmapFile = m_confix->string( KEY1("pixmapFile"), "" );
    if( m_pixmapFile != "" )
    {
        m_pixmapFile = PICTUREDIR + SEP + m_pixmapFile;
        setPixmapFile( m_pixmapFile );
    }

}
