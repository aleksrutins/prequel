#ifndef LIBGQLCLIENT_GLOBAL_H
#define LIBGQLCLIENT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBGQLCLIENT_LIBRARY)
#  define LIBGQLCLIENT_EXPORT Q_DECL_EXPORT
#else
#  define LIBGQLCLIENT_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBGQLCLIENT_GLOBAL_H
