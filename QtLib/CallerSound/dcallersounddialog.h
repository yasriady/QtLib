#ifndef DCALLERSOUNDDIALOG_H
#define DCALLERSOUNDDIALOG_H

#include <QDialog>
#include <Inc/CallerSoundAlsa>
#include <QSound>

namespace Ui {
class DCallerSoundDialog;
}

class DCallerSoundDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DCallerSoundDialog(QWidget *parent = 0);
    ~DCallerSoundDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::DCallerSoundDialog *ui;

};

#endif // DCALLERSOUNDDIALOG_H
