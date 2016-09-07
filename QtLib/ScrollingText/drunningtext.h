#ifndef DRUNNINGTEXT_H
#define DRUNNINGTEXT_H

#include <QObject>
#include <Inc/Label>
#include <Inc/DBManager>

class DRunningText : public DLabel
{
    Q_OBJECT
public:
    explicit DRunningText(QWidget *parent=Q_NULLPTR, Qt::WindowFlags f=Qt::WindowFlags());

    void loop();
    void start();
    void stop();
    void setTextRunning(const QString &text_);
    void setDb(DBManager *db);

private:
    QString m_actualText, m_pad;
    int m_padQty, m_pos, m_timerInterval;
    bool m_show, m_started;
    DBManager *m_db;
    void refreshTextFromDb();
    uint8_t m_cnt;
    int m_timerId;

protected:
    virtual void showEvent(QShowEvent *event);
    virtual void timerEvent(QTimerEvent *event);

};

#endif // DRUNNINGTEXT_H
