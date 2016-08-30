#ifndef DIALOGTEST_SOUND_H
#define DIALOGTEST_SOUND_H

#include <qtlib_global.h>
#include <QDialog>
#include "Testing/Sound/mysound.h"

namespace Ui {
class DialogTest_Sound;
}

class QTLIBSHARED_EXPORT DialogTest_Sound : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTest_Sound(QWidget *parent = 0);
    ~DialogTest_Sound();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DialogTest_Sound *ui;
};

#endif // DIALOGTEST_SOUND_H
