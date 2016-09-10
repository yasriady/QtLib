#include "dmainwindow.h"
#include "ui_dmainwindow.h"

DMainWindow::DMainWindow(QWidget *parent) :
    QMainWindow(parent)//,
    //ui(new Ui::DMainWindow)
{
    //ui->setupUi(this);
    QTimer::singleShot( 50, this, SLOT(windowLoaded()));   // to generate warning if customInit() was not loaded

}

DMainWindow::~DMainWindow()
{
    //delete ui;
}

//void DMainWindow::resizeEvent(QResizeEvent *event)
//{
//    QMainWindow::resizeEvent(event);
//}

void DMainWindow::closeEvent(QCloseEvent *event)
{
    //mkCONFIX;
    m_confix->setValue( KEY3(this, "geometry"), saveGeometry());
    m_confix->setValue( KEY3(this, "state"), saveState());
    QMainWindow::closeEvent(event);
}

void DMainWindow::windowLoaded()
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

