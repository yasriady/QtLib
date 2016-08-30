#ifndef MAINWINDOWTESTING_H
#define MAINWINDOWTESTING_H

#include <qtlib_global.h>
#include <QMainWindow>

namespace Ui {
class MainWindowTesting;
}

class QTLIBSHARED_EXPORT MainWindowTesting : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowTesting(QWidget *parent = 0);
    ~MainWindowTesting();

private:
    Ui::MainWindowTesting *ui;
};

#endif // MAINWINDOWTESTING_H
