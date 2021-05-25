#include "libmx.h"

size_t mx_getsize(void * p) {
    size_t * in = p;
    if (in) { --in; return *in; }
    return -1;
}
