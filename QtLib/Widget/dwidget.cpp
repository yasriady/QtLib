#include "dwidget.h"

DWidget::DWidget(QWidget *parent, Qt::WindowFlags f)
    :QWidget(parent, f)
{
    QTimer::singleShot( 50, this, SLOT(windowLoaded()));   // to generate warning if customInit() was not loaded
}

void DWidget::closeEvent(QCloseEvent *event)
{
    //mkCONFIX;
    m_confix->setValue( KEY3(this, "geometry"), saveGeometry());
    QWidget::closeEvent(event);
}

//void DWidget::resizeEvent(QResizeEvent *event)
//{
//    //__PF__;
//    mkCONFIX;
//    confx->setValue( KEY3(this, "geometry"), saveGeometry());
//    QWidget::resizeEvent(event);
//}

void DWidget::windowLoaded()
{
    //__PF(objectName());
    bool promotedWidget = ( metaObject()->className()!=objectName() );  // check if this is promoted widget or not
    if( promotedWidget )
    {
        customInit(this, objectName(), windowTitle(), true);
    } else {
        if( !m_customInit ) showWarning( objectName() /*FN*/, WARNINGCUSTOMINIT);
    }

}
