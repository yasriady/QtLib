//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef QTDB_GLOBAL_H
#define QTDB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTDB_LIBRARY)
#  define QTDBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTDBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QTDB_GLOBAL_H
