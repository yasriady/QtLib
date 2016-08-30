//--------------------------------------------------------
// file name   :
// author      : Dedy Yasriady
// version     : v1.00
// copyright   : Btm, 2016
// description : c/c++, Qt application
//--------------------------------------------------------

#ifndef QTLIB_GLOBAL_H
#define QTLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTLIB_LIBRARY)
#  define QTLIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTLIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QTLIB_GLOBAL_H
