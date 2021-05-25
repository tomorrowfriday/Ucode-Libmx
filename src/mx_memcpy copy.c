#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n){
   char *csrc = (char *)src;
   char *cdest = (char *)dst;
   for (unsigned long i=0; i < n; i++) cdest[i] = csrc[i];
   return dst;
}
