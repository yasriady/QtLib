#include "dsettings.h"

DSettings::DSettings(const QString &fileName)
    : QSettings(fileName, QSettings::IniFormat)
{
}

void DSettings::setString(const QString &key, const QString &value)
{
    QSettings::setValue(key, QVariant(value));
}

QString DSettings::string(const QString &key, const QString &defaultValue)
{
    const QString &value = (QSettings::value(key, defaultValue)).toString();
    setString(key, value);
    return value;
}

void DSettings::setBoolean(const QString &key, const bool &value)
{
    QSettings::setValue(key, QVariant(value));
}

bool DSettings::boolean(const QString &key, const bool &defaultValue)
{
    const bool &value = (QSettings::value(key, defaultValue)).toBool();
    setBoolean(key, value);
    return value;
}

void DSettings::setIntegr(const QString &key, const int &value)
{
    QSettings::setValue(key, QVariant(value));
}

int DSettings::integr(const QString &key, const int &defaultValue)
{
    const int &value = ( QSettings::value(key, defaultValue) ).toInt();
    setIntegr(key, value);
    return value;
}

