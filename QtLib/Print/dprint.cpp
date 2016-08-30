#include "dprint.h"
#include "ui_dprint.h"

DPrint::DPrint(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::DPrint)
{
    ui->setupUi(this);

    m_printer = new QPrinter(QPrinter::ScreenResolution);
    m_printer->setOutputFormat(QPrinter::PdfFormat);
    m_printer->setOutputFileName("Filename.pdf");
    m_printer->setPaperSize(QPrinter::A7);
    m_printer->setPageSize(QPrinter::A7);
    m_printer->setFullPage(true);
    //m_printer->setResolution(300);
    m_printer->setPageMargins(5, 5, 5, 5, QPrinter::Millimeter );

    m_preview = new QPrintPreviewWidget(m_printer, this);
    layout()->addWidget(m_preview);
    connect( m_preview, SIGNAL(paintRequested(QPrinter*)), this, SLOT(slotPreview(QPrinter*)) );

    m_doc = new QTextDocument(this);
    m_doc->setPageSize( m_printer->pageRect().size() );
    m_doc->setBaseUrl( EXTRADIR );

    mkCONFIX;
    if( confx->boolean(KEY("ToolBar"), true) )
        ui->toolBar->show();
    else
        ui->toolBar->hide();
}

DPrint::~DPrint()
{
    delete m_printer;
    delete m_doc;
    delete m_preview;
    delete ui;
}

void DPrint::updatePreview(const QString &html, const QString &pdfFilename)
{
    m_pdfFilename = pdfFilename;
    m_html = html;
    m_doc->setHtml(m_html);
    m_preview->updatePreview();
}

void DPrint::print()
{
    m_preview->updatePreview();
    m_preview->print();
}

void DPrint::slotPreview(QPrinter *printer)
{
    QPainter p(printer);
    p.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing | QPainter::SmoothPixmapTransform, true);

    //p.drawText(10, 200, QString("Date: %1").arg(QDateTime::currentDateTime().toString("dd.MM.yyyy")));

   // m_doc->documentLayout()->setPaintDevice(printer);
    // just before
    //m_doc->setPageSize(printer->pageRect().size());
    m_doc->drawContents(&p, printer->pageRect());


//    mkCONFIG;
//    if( conf->boolean("PRINT/PrintToPDF") )
//    {
//        m_printer->setOutputFormat(QPrinter::PdfFormat);
//        m_printer->setOutputFileName(m_pdfFilename);
//        //doc.print(m_printer);
//        QPainter p(printer);
//        doc.drawContents(&p);
//    } else {
//        m_printer->setOutputFormat(QPrinter::NativeFormat );
//        QPainter p(printer);
//        doc.drawContents( &p);
//    }

}

void DPrint::on_toolButton_2_clicked()
{
}

void DPrint::on_print_clicked()
{
    this->print();
    qDebug() << __PRETTY_FUNCTION__;
}
