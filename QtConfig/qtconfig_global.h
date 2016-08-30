//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef QTCONFIG_GLOBAL_H
#define QTCONFIG_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTCONFIG_LIBRARY)
#  define QTCONFIGSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTCONFIGSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QTCONFIG_GLOBAL_H
