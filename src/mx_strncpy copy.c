#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len){
    for (int count = 0; count < len; count++){
        dst[count] = src [count];
    }
    return dst;
}
