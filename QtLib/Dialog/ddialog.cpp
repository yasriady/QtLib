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
    mkCONFIX;
    confx->setValue( GEOMETRY, saveGeometry());
}

void DDialog::showEvent(QShowEvent */*event*/)
{
    mkCONFIX;
    const QByteArray &geometry = confx->value(GEOMETRY).toByteArray();
    restoreGeometry(geometry);
    updateGeometry();
}

