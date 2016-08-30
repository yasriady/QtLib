//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef DDIALOG_H
#define DDIALOG_H

#include "qtlib_global.h"
#include <QDialog>
#include <Object/dobject.h>

#include <Config>

namespace Ui {
class DDialog;
}

class QTLIBSHARED_EXPORT DDialog : public QDialog, public DObject
{
    Q_OBJECT

public:
    explicit DDialog(QWidget *parent = 0);
    ~DDialog();

private:
    Ui::DDialog *ui;

protected:
    void virtual closeEvent(QCloseEvent *event);
    void virtual showEvent(QShowEvent *event);


};

#endif // DDIALOG_H
