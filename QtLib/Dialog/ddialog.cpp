#include "ddialog.h"
#include "ui_ddialog.h"

DDialog::DDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DDialog)
{
    ui->setupUi(this);
    ui->buttonBox->hide();
}

DDialog::~DDialog()
{
    delete ui;
}

void DDialog::closeEvent(QCloseEvent */*event*/)
{
    //mkCONFIX;
    m_confix->setValue( GEOMETRY(this), saveGeometry());
}

void DDialog::showEvent(QShowEvent */*event*/)
{
    //mkCONFIX;
    const QByteArray &geometry = m_confix->value(GEOMETRY(this)).toByteArray();
    restoreGeometry(geometry);
    updateGeometry();
}

