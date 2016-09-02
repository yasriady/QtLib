#include "dcallersounddialog.h"
#include "ui_dcallersounddialog.h"

DCallerSoundDialog::DCallerSoundDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DCallerSoundDialog)
{
    ui->setupUi(this);
}

DCallerSoundDialog::~DCallerSoundDialog()
{
    delete ui;
}

void DCallerSoundDialog::on_pushButton_clicked()
{
}

void DCallerSoundDialog::on_pushButton_2_clicked()
{
    QSound s("/satu.wav");
    s.play("/satu.wav");
//    s.play("/dua.wav");
//    s.play("/tiga.wav");
}

void DCallerSoundDialog::on_pushButton_3_clicked()
{
}

void DCallerSoundDialog::on_pushButton_4_clicked()
{
}
