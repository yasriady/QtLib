#include "scrollingtext.h"
//#include "ui_scrollingtext.h"

// DEPRECATED class

ScrollingText::ScrollingText(QWidget *parent) :
    DLabel(parent)//, pos_(0)
{
    //    mkCONFIG; mkCONFIX;
    //    pos_ = 0;
    //    const QString &text = confg->string( KEY("RunningText"), "Queue ..." );
    //    const int &padQty = confx->integr( KEY("padQty"), 25);
    //    const int &timer = confx->integr( KEY("timer"), 100);
    //    setText(text);
    //    QString pad( padQty, ' ' );
    //    actual_text_ = text + pad;
    //    startTimer(timer);

    m_timerId = 0;
    m_db = NULL;

}

ScrollingText::~ScrollingText()
{
}

void ScrollingText::startRunningText()
{
    //if( !m_show ) return;
    if( m_timerId > 0 ) return;
    m_timerId =  startTimer(m_timeout);
    m_started = true;
}

void ScrollingText::stopRunningText()
{
    if( m_timerId > 0 ) {
        killTimer(m_timerId);
        m_timerId = 0;
        m_started = false;
    }
}

void ScrollingText::timerEvent(QTimerEvent *event)
{
    m_cnt++;
    if( m_cnt >= 30 )
    {
        m_cnt = 0;
        if( m_db ) refreshText();
    }

    actual_text_ = m_text;
    pos_ = ++pos_ % actual_text_.length();
    setText(actual_text_.mid(pos_).append(actual_text_.left(pos_)));

    //qDebug() << "Timer ID:" << event->timerId();
}

void ScrollingText::showEvent(QShowEvent *event)
{
    mkCONFIG; mkCONFIX;

    m_started = confx->boolean( KEY( objectName() + "_started" ), true );
    m_show = confx->boolean( KEY( objectName() + "_show" ), true );

    pos_ = 0;
    m_text = confg->string( KEY( objectName() + "_text" ), "RunningText .................." );
    const int &padQty = confx->integr( KEY( objectName() + "_padQty"), 25);
    m_timeout = confx->integr( KEY( objectName() + "_timer"), 350);
    //setText(m_text);
    QString pad(padQty, ' ');
    m_pad = pad;
    m_text = m_text + pad;
    //actual_text_ = m_text + pad;
    //setText(m_text);
    if( m_started )
        startRunningText();
    if( !m_show )
        hide();

    DLabel::showEvent(event);

}

void ScrollingText::refreshText()
{
    const QString &text = m_db->getTaxonomy(RUNNINGTEXT);
    if( text.length() < 10 )
    {
        __PF("Running text < 10 length.");
    } else {
        m_text = text;
    }
}

void ScrollingText::setText(const QString &text)
{
    m_text= text;
    actual_text_ = m_text + m_pad;
    DLabel::setText(text);
}

void ScrollingText::setDb(DBManager *db)
{
    m_db = db;
    refreshText();
}



//class MarqueeLabel : public QLabel {
// public:
//  explicit MarqueeLabel(const QString &text) : QLabel(text), pos_(0) {
//    QString pad(25, ' ');
//    actual_text_ = text + pad;
//    startTimer(100);
//  }

//protected:
//  void timerEvent(QTimerEvent *) {
//    pos_ = ++pos_ % actual_text_.length();
//    setText(actual_text_.mid(pos_).append(actual_text_.left(pos_)));
//  }

//private:
//  QString actual_text_;
//  int pos_;
//};

//int main(int argc, char *argv[]) {
//    QApplication a(argc, argv);
//    MarqueeLabel lbl("WidgetMarqueeLabel");
//    lbl.show();
//    return a.exec();
//}
