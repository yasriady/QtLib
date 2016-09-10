//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef DPRINT_H
#define DPRINT_H

#include "qtlib_global.h"
#include <QFrame>
#include <QPrinter>
#include <QTextStream>
#include <QTextDocument>
//#include <dsettings.h>
#include "globals.h"
#include <QPainter>
#include <QPrintPreviewWidget>
#include <QAbstractTextDocumentLayout>

namespace Ui {
class DPrint;
}

class QTLIBSHARED_EXPORT DPrint : public QFrame
{
    Q_OBJECT

public:
    explicit DPrint(QWidget *parent = 0);
    ~DPrint();

    void updatePreview( const QString &html, const QString &pdfFilename);
    void print();

private:
    Ui::DPrint *ui;

    QString m_html;
    QString m_pdfFilename;
    QPrinter *m_printer;
    QPrintPreviewWidget *m_preview;
    QTextDocument *m_doc;

private slots:
    void slotPreview(QPrinter *printer);
    void on_toolButton_2_clicked();
    void on_print_clicked();
};

#endif // DPRINT_H
