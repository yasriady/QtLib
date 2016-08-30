//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef DCallerSound_H
#define DCallerSound_H

#include "qtlib_global.h"
#include <QObject>
#include <QSoundEffect>
#include <QtDebug>
#include <QThread>
#include <Object/dobject.h>
#include <dsettings.h>

class QTLIBSHARED_EXPORT DCallerSound : public QObject, public DObject
{
    Q_OBJECT
public:
    explicit DCallerSound(QObject *parent = 0);
    ~DCallerSound();

signals:
    void signalSoundFinish();

public slots:

public:
    void call(const int &number);
    void call(const QStringList &list);

private:
    void playSomeSound();
    int m_curIdx;
    QStringList m_strList;
//    QStringList NumConverter(const int &n);
//    QString NumericConverter(const int &n);
    const QString satuan[10] = {    "", "satu ", "dua ", "tiga ", "empat ", "lima ", "enam ", "tujuh ", "delapan ", "sembilan " };

private slots:
    void soundPlayingChanged();


};

#endif // DCallerSound_H
