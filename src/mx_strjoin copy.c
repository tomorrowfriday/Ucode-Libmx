#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2){
    if (s1 == NULL && s2 != NULL) return mx_strdup((char *)s2);
    if (s2 == NULL && s1 != NULL) return mx_strdup((char *)s1);
    if (s1 == NULL && s2 == NULL) return NULL;
    int count = 0;
    int size = mx_strlen(s1) + mx_strlen(s2);
    char *str = mx_strnew(size);
    for(; count < size; count ++){
        if (count < mx_strlen(s1)) str[count] = s1[count];
        else str[count] = s2[count - mx_strlen(s1)];
    }
    return str;
}
