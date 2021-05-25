#include "libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2){
    int count = 0;
    int num = mx_strlen(s1);
        while (s2[count] != '\0'){
            s1[num] = s2[num];
            count ++;
            num ++;
        }
    s1[num++] = '\0';
    return s1;
}