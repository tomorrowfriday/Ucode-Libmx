#include "libmx.h"

char *mx_strndup(const char *src, size_t n){
    return mx_strncpy(mx_strnew(mx_strlen(src)), src, n);
}
