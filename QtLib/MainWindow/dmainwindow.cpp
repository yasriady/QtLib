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

void DMainWindow::setStyleSheet(QString styleSheet)
{
    const QString &qssFile = EXTRADIR + "qss" + SEP + APPNAME + "_" + m_windowName + ".qss";
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
    customInit();
    setStyleSheet();
    mkCONFIX;
    const QByteArray &geometry = confx->value(GEOMETRY).toByteArray();
    restoreGeometry(geometry);
    updateGeometry();
    QMainWindow::showEvent(event);
}
