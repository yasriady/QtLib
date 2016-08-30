#include "dmainwindow.h"
#include "ui_dmainwindow.h"

DMainWindow::DMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DMainWindow)
{
    ui->setupUi(this);
}

DMainWindow::~DMainWindow()
{
    delete ui;
}

void DMainWindow::init()
{
    m_windowName = (QString) property("windowName").toString();
    setStyleSheet();
}

void DMainWindow::setStyleSheet(QString styleSheet)
{
    const QString &qssFile = EXTRADIR + APPNAME + "_" + m_windowName + ".qss";
    if( styleSheet=="" )
        styleSheet = textFromFile(qssFile);
    QMainWindow::setStyleSheet( styleSheet );
}

void DMainWindow::closeEvent(QCloseEvent *event)
{
    mkCONFIX;
    confx->setValue( GEOMETRY, saveGeometry());
    confx->setValue( STATE, saveState());
    QMainWindow::closeEvent(event);
}

void DMainWindow::showEvent(QShowEvent *event)
{
    mkCONFIX;
    const QByteArray &geometry = confx->value(GEOMETRY).toByteArray();
    restoreGeometry(geometry);
    updateGeometry();
    QMainWindow::showEvent(event);
}
