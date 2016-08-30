#include "dialogpainter.h"
#include "ui_dialogpainter.h"

DialogPainter::DialogPainter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPainter)
{
    ui->setupUi(this);
}

DialogPainter::~DialogPainter()
{
    delete ui;
}
