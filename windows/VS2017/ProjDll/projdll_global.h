#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(PROJDLL_LIB)
#  define PROJDLL_EXPORT Q_DECL_EXPORT
# else
#  define PROJDLL_EXPORT Q_DECL_IMPORT
# endif
#else
# define PROJDLL_EXPORT
#endif
