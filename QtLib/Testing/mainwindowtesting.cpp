#include "mainwindowtesting.h"
#include "ui_mainwindowtesting.h"

MainWindowTesting::MainWindowTesting(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowTesting)
{
    ui->setupUi(this);
}

MainWindowTesting::~MainWindowTesting()
{
    delete ui;
}
