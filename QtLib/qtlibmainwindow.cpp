#include "qtlibmainwindow.h"
#include "ui_qtlibmainwindow.h"

QtLibMainWindow::QtLibMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtLibMainWindow)
{
    ui->setupUi(this);
}

QtLibMainWindow::~QtLibMainWindow()
{
    delete ui;
}

void QtLibMainWindow::on_pushButton_QThreadPool_clicked()
{
    QThreadPool *thread_pool = QThreadPool::globalInstance();
    MyThread* myThread = new MyThread();
    thread_pool->start(myThread);
}

// TAK JALAN
void QtLibMainWindow::on_pushButton_AdaptFontSize_clicked()
{
    QPainter painter( this ) ;
    int flags = Qt::TextDontClip|Qt::TextWordWrap; //more flags if needed
    QRectF drawRect = (QRectF) rect();
    QString string = "Daffa";
    adaptFontSize(&painter, flags, drawRect, string);
}

void QtLibMainWindow::adaptFontSize(QPainter *painter, int /*flags1*/, QRectF drawRect, QString text)
{
    int flags = Qt::TextDontClip|Qt::TextWordWrap; //more flags if needed
    QRect fontBoundRect =
    painter->fontMetrics().boundingRect(drawRect.toRect(), flags, text);
    float xFactor = drawRect.width() / fontBoundRect.width();
    float yFactor = drawRect.height() / fontBoundRect.height();
    float factor = xFactor < yFactor ? xFactor : yFactor;
    QFont f = painter->font();
    f.setPointSizeF(f.pointSizeF()*factor);
    painter->setFont(f);
}
