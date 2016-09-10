#include "dobject.h"

DObject::DObject()
{
    m_customInit = false;
}

QStringList DObject::NumericConverter2(const int &n)
{
    QString str = NumericConverter1(n);
    str = str.trimmed();
    str = str.replace("  ", "");
    QStringList strList = str.split(" ");
    return strList;
}

const QString DObject::NumericConverter1(const int &n)
{
    const QString satuan[10] = {    "", "satu ", "dua ", "tiga ", "empat ", "lima ", "enam ", "tujuh ", "delapan ", "sembilan " };

    if (n < 0) {
        return "negatif " + NumericConverter1(-n);
    } else if (n < 10) {
        return satuan[n];
    } else if (n == 10) { // khusus untuk sepuluh
        return "sepuluh ";
    } else if (n == 11) { // khusus untuk sebelas
        return "sebelas ";
    } else if (n < 20) {
        return satuan[n-10] + "belas ";
    } else if (n < 100) {
        return satuan[(n-(n%10))/10] + "puluh " + NumericConverter1(n % 10);
    } else if (n < 1000) {
        return (n < 200 ? "seratus " : satuan[(n-(n%100))/100] + "ratus ") + NumericConverter1(n % 100);
    } else if (n < 1000000) {
        return (n < 2000 ? "seribu " : NumericConverter1((n-(n%1000))/1000) + "ribu ") + NumericConverter1(n % 1000);
    } else if (n < 1000000000) {
        return NumericConverter1((n-(n%1000000))/1000000) + "juta " + NumericConverter1(n % 1000000);
    } else {
        return "Angka lebih besar dari 999,999,999 (harus kurang dari 1 Milyar)";
    }
}

const QString DObject::str(const int &i)
{
    const QString &text = QString::number(i);
    return text;
}

const QString DObject::mkText(const bool &enable)
{
    const QString &text = enable ? "Connected" : "Not Connected";
    return text;
}

const QImage DObject::mkImage(const bool &/*enable*/)
{
    //    const QImage &image("");
    return QImage();
}

const QPixmap DObject::mkPixmap(const bool &connected)
{
    const QString &pngDisconnected = QString::fromUtf8(":/icon/png_16/network-disconnect.png");
    const QString &pngConnected    = QString::fromUtf8(":/icon/png_16/network-server-database.png");
    const QString &png             = connected ? pngConnected : pngDisconnected;
    //    ui->label_connected->setPixmap(QPixmap(png));

    const QPixmap &pixmap(png);
    return pixmap;
}

const QPicture DObject::mkPicture(const bool &enable)
{
    (void)enable;
    QPicture picture;
    return picture;
}

int DObject::mkRandom(const int low, const int high)
{
    qsrand(qrand());
    int rand = qrand() % ((high + 1) - low) + low;
    return rand;
}

QString DObject::textFromFile(const QString &filename, const bool &createNew)
{
    QIODevice::OpenModeFlag mode;

    if(createNew)
        mode = QFile::exists(filename) ? QFile::ReadOnly : QFile::ReadWrite;
    else
        mode = QFile::ReadOnly;

    QFile File( filename );
    File.open(mode);
    const QString &text = QLatin1String(File.readAll());
    return text;
}

void DObject::toggleVisibility(QWidget *w)
{
    m_visible = !m_visible;
    w->setVisible(m_visible);
    //mkCONFIX;
    m_confix->setBoolean( KEY3(w, "visible"), m_visible );
}

void DObject::showWarning(const QString &caption, const QString &message)
{
    QMessageBox messageBox;
    messageBox.setWindowTitle(caption);
    messageBox.setText(message);
    messageBox.exec();
}

void DObject::setStyleSheet2(QWidget *w, const bool &createNew, QString styleSheet)
{
    QString qssFile = EXTRADIR + "qss" + SEP + APPNAME + "_" + w->objectName();// + ".qss";
    // if qssFile consist of _01 then trim it
    if( qssFile.right(2).toInt() > 0 )
        qssFile = qssFile.left(qssFile.length()-3);
    qssFile = qssFile + ".qss";

    if( styleSheet=="" )
        styleSheet = textFromFile(qssFile, createNew);
    w->setStyleSheet( styleSheet );
}

void DObject::customInit(QWidget *w, const QString &objectName, const QString &windowTitle, const bool &createNewStylesheet)
{
    m_customInit = true;

    // set final customized information into this object.
    w->setObjectName(objectName);
    w->setWindowTitle(windowTitle);

    setStyleSheet2(w, createNewStylesheet);

    // restore window state and geometry
    //mkCONFIX;
    //const QByteArray &geometry = confx->value(GEOMETRY(w)).toByteArray();
    const QByteArray &geometry = m_confix->value( KEY3(w, "geometry")  ).toByteArray();
    w->restoreGeometry(geometry);
    w->updateGeometry();

    if( w->parent() != NULL ) {
        m_visible = m_confix->boolean( KEY3(w, "visible"), true );
        w->setVisible(m_visible);
    }

}

