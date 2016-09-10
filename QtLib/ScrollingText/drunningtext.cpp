#include "drunningtext.h"
DRunningText::DRunningText(QWidget *parent, Qt::WindowFlags f)
    : DLabel(parent, f)
{
    m_pos = 0;
    m_db = NULL;
}

void DRunningText::loop()
{
    // auto refresh belum jalan
    //m_cnt++;
    //if( m_cnt >= 30 )
    //{
    //    m_cnt = 0;
    //    if( m_db != NULL) refreshTextFromDb();
    //}

    m_yFactor = true;
    m_pos = ++m_pos % m_actualText.length();
    setText(m_actualText.mid(m_pos).append(m_actualText.left(m_pos)));
}

void DRunningText::start()
{
    m_actualText = text() + m_pad;
    m_timerId = startTimer(m_timerInterval);
}

void DRunningText::stop()
{
    killTimer(m_timerId);
}

void DRunningText::showEvent(QShowEvent *event)
{
    DLabel::showEvent(event);

    m_started = m_confix->boolean( KEY1("started"), true );
    m_show = m_confix->boolean( KEY1("visible"), true );
    m_padQty = m_confix->integr( KEY1("padQty"), 35 );
    m_timerInterval = m_confix->integr( KEY1("timer"), 150 );
    m_pad = QString(m_padQty, ' ');
    if( !m_show )
        hide();
    if( m_started && m_show )
        start();
}

void DRunningText::timerEvent(QTimerEvent *event)
{
    loop();
}

void DRunningText::setTextRunning(const QString &text_)
{
    setText(text_);
    start();
}

void DRunningText::setDb(DBManager *db)
{
    // please run this class by setDb() only, running using start() function still yied failure.
    m_db = db;
    refreshTextFromDb();
}

void DRunningText::refreshTextFromDb()
{
    const QString &text = m_db->getTaxonomy(RUNNINGTEXT);
    if( text.length() < 10 )
    {
       // __PF("Running text < 10 length.");
    } else {
        setTextRunning(text);
    }
}


