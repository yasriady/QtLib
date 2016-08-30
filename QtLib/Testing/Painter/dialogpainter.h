#ifndef DIALOGPAINTER_H
#define DIALOGPAINTER_H

#include <qtlib_global.h>
#include <QDialog>

namespace Ui {
class DialogPainter;
}

class QTLIBSHARED_EXPORT DialogPainter : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPainter(QWidget *parent = 0);
    ~DialogPainter();

private:
    Ui::DialogPainter *ui;
};

#endif // DIALOGPAINTER_H
