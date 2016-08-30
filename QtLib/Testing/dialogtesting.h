#ifndef DIALOGTESTING_H
#define DIALOGTESTING_H

#include <QDialog>

namespace Ui {
class DialogTesting;
}

class DialogTesting : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTesting(QWidget *parent = 0);
    ~DialogTesting();

private:
    Ui::DialogTesting *ui;
};

#endif // DIALOGTESTING_H
