/* $Id: ares_version.h,v 1.6 2006-08-29 15:17:48 bagder Exp $ */

#ifndef ARES__VERSION_H
#define ARES__VERSION_H

#define ARES_VERSION_MAJOR 1
#define ARES_VERSION_MINOR 3
#define ARES_VERSION_PATCH 2
#define ARES_VERSION ((ARES_VERSION_MAJOR<<16)|\
                       (ARES_VERSION_MINOR<<8)|\
                       (ARES_VERSION_PATCH))
#define ARES_VERSION_STR "1.3.2"

#ifdef  __cplusplus
extern "C" {
#endif

const char *ares_version(int *version);

#ifdef  __cplusplus
}
#endif

#endif

