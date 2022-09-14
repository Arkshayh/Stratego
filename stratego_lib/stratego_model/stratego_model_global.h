#ifndef STRATEGO_MODEL_GLOBAL_H
#define STRATEGO_MODEL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(STRATEGO_MODEL_LIBRARY)
#  define STRATEGO_MODEL_EXPORT Q_DECL_EXPORT
#else
#  define STRATEGO_MODEL_EXPORT Q_DECL_IMPORT
#endif

#endif // STRATEGO_MODEL_GLOBAL_H