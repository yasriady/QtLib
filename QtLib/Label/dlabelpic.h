#ifndef DLABELPIC_H
#define DLABELPIC_H

#include <QObject>
#include <QLabel>
#include <Inc/Setting>

class DLabelPic : public QLabel
{
public:
    DLabelPic(QWidget *parent=Q_NULLPTR, Qt::WindowFlags f=Qt::WindowFlags());

    void setPixmapFile(const QString &filename);

private:
    QString m_pixmapFile;

protected:
    virtual void showEvent(QShowEvent *event);

};

#endif // DLABELPIC_H
