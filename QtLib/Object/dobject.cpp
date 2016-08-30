#include "dobject.h"

DObject::DObject()
{
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

QString DObject::textFromFile(const QString &filename)
{
    QIODevice::OpenModeFlag mode = QFile::exists(filename) ? QFile::ReadOnly : QFile::ReadWrite;
    QFile File( filename );
    File.open(mode);
    const QString &text = QLatin1String(File.readAll());
    return text;
}

