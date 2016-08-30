#include "dialogtesting.h"
#include "ui_dialogtesting.h"

DialogTesting::DialogTesting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogTesting)
{
    ui->setupUi(this);
}

DialogTesting::~DialogTesting()
{
    delete ui;
}
