#include "dwidget.h"


DWidget::DWidget(QWidget *parent, Qt::WindowFlags f)
    :QWidget(parent, f)
{

}

void DWidget::showEvent(QShowEvent *event)
{
    customInit();
    setStyleSheet();
    mkCONFIX;
    const QByteArray &geometry = confx->value(GEOMETRY).toByteArray();
    restoreGeometry(geometry);
    updateGeometry();
    QWidget::showEvent(event);
}

void DWidget::closeEvent(QCloseEvent *event)
{
    mkCONFIX;
    confx->setValue( GEOMETRY, saveGeometry());
    //confx->setValue( STATE, saveState());
    QWidget::closeEvent(event);
}

void DWidget::setStyleSheet(QString styleSheet)
{
    const QString &qssFile = EXTRADIR + "qss" + SEP + APPNAME + "_" + m_windowName + ".qss";
    if( styleSheet=="" )
        styleSheet = textFromFile(qssFile);
    QWidget::setStyleSheet( styleSheet );

}
