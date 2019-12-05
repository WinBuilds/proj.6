#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(PROJLIB_LIB)
#  define PROJLIB_EXPORT Q_DECL_EXPORT
# else
#  define PROJLIB_EXPORT Q_DECL_IMPORT
# endif
#else
# define PROJLIB_EXPORT
#endif
