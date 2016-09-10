#include "dlogger.h"
#include "ui_dlogger.h"

DLogger::DLogger(QWidget *parent) :
    DWidget(parent),
    ui(new Ui::DLogger)
{
    ui->setupUi(this);

    // Ddy: GOT ERROR in my raspi2
//    mkCONFIX;
//    bool redirect = confx->boolean( KEY("redirect"), true );
//    if( redirect ) {
//        // redirect std::cout, qDebug(), std::cerf() to textEdit
//        new Q_DebugStream( std::cout, ui->textEdit );   //Redirect Console output to QTextEdit
//        Q_DebugStream::registerQDebugMessageHandler();  //Redirect qDebug() output to QTextEdit
//    }
}

DLogger::~DLogger()
{
    delete ui;
}

void DLogger::showResult(QString str)
{
    log(str);
}

void DLogger::log(QString str)
{
    QDateTime dt = QDateTime::currentDateTime();
    //const QString &mystr = dt.toString("yyyyMMdd HH:mm:ss") + ":: " + str + "\n";
    const QString &mystr = CURDATETIME_+ ":: " + str + "\n";
    ui->textEdit->insertPlainText(mystr);
    ui->textEdit->moveCursor(QTextCursor::End, QTextCursor::MoveAnchor);

}

//void DLogger::showToggle()
//{
//    m_shown = !m_shown;
//    mkCONFIX;
//    setVisible( m_shown );
//    confx->setBoolean( VISIBLE, m_shown );
//}

void DLogger::on_textEdit_textChanged()
{
    if( (ui->textEdit->toPlainText()).right(1) != "\n" )
        ui->textEdit->insertPlainText("\n");
}

void DLogger::on_clear_clicked()
{
    ui->textEdit->clear();
}

void DLogger::on_about_clicked()
{

}

void DLogger::on_hide_clicked()
{
    DObject::toggleVisibility(this);
}

//void DLogger::showEvent(QShowEvent *event)
//{
//    DWidget::showEvent(event);
//    QTimer::singleShot(50, this, SLOT(customInit()));
//}

//void DLogger::customInit()
//{
//    mkCONFIX;
//    m_shown = !confx->boolean( VISIBLE, true );
//    showToggle();
//}
