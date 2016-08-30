#include "dialogtest_sound.h"
#include "ui_dialogtest_sound.h"

DialogTest_Sound::DialogTest_Sound(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogTest_Sound)
{
    ui->setupUi(this);
}

DialogTest_Sound::~DialogTest_Sound()
{
    delete ui;
}

void DialogTest_Sound::on_pushButton_clicked()
{
    MySound sound;
}
