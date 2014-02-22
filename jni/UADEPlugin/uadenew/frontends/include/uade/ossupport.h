#ifndef _UADE_OSSUPPORT_H_
#define _UADE_OSSUPPORT_H_

#include <uade/unixsupport.h>

#ifndef _UADE_STRLREP_H_
#define _UADE_STRLREP_H_

#include <string.h>

size_t strlcpy(char *dst, const char *src, size_t size);
size_t strlcat(char *dst, const char *src, size_t size);

#endif

#endif
