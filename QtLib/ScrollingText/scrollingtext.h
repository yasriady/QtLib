//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef SCROLLINGTEXT_H
#define SCROLLINGTEXT_H

#include "qtlib_global.h"
#include "../Label/dlabel.h"
#include <dbmanager.h>

namespace Ui {
class ScrollingText;
}

class QTLIBSHARED_EXPORT ScrollingText : public DLabel
{
    Q_OBJECT

public:
    explicit ScrollingText(QWidget *parent = 0);
    ~ScrollingText();

    void startRunningText();
    void stopRunningText();
    virtual void setText(const QString &text);
    bool isRunning() { return m_started; }

    void setDb(DBManager *db);

protected:
    void timerEvent(QTimerEvent *event);
    virtual void showEvent(QShowEvent *event);

private:
    QString actual_text_;
    int pos_;
    bool m_started;
    bool m_show;
    int m_timeout;
    int m_timerId;
    QString m_text;
    DBManager *m_db;
    uint8_t m_cnt;
    void refreshText();

};

#endif // SCROLLINGTEXT_H
