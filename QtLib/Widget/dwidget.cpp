#include "dwidget.h"


DWidget::DWidget(QWidget *parent, Qt::WindowFlags f)
    :QWidget(parent, f)
{

}

void DWidget::init()
{
    m_windowName = (QString) property("windowName").toString();
    setStyleSheet();
}

void DWidget::setStyleSheet(QString styleSheet)
{
    const QString &qssFile = EXTRADIR + APPNAME + "_" + m_windowName + ".qss";
    if( styleSheet=="" )
        styleSheet = textFromFile(qssFile);
    QWidget::setStyleSheet( styleSheet );
}
