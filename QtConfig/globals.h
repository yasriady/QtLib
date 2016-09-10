#ifndef GLOBALS_H
#define GLOBALS_H

// ALL THE GLOBAL DECLARATIONS
// Ddy: http://stackoverflow.com/questions/23922319/global-variables-in-qt-5-3

#include <QtGlobal>
#include "dsettings.h"

// don't use #include <QString> here, instead do this:
QT_BEGIN_NAMESPACE
class QString;
QT_END_NAMESPACE

// that way you aren't compiling QString into every header file you put this in...
// aka faster build times.

#define MAGIC_NUM2 42

extern qreal g_some_double2; // Note the important use of extern!
extern QString g_some_string2;

// Ddy:
extern DSettings *m_config;
extern DSettings *m_confix;

#endif // GLOBALS_H
