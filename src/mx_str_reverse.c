#include "libmx.h"

void mx_str_reverse(char *s){
    int count = 0;
    int invcount = mx_strlen(s) - 1;
    int mid = mx_strlen(s) / 2;
    while (count != mid){
        mx_swap_char(&s[count], &s[invcount]);
        count ++;
        invcount --;
    }
}
