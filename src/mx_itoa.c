#include "libmx.h"

char *mx_itoa(int num){
    int count = 1;
    while (num / (int )mx_pow(10, count) != 0){
    count ++;
    }
    char *str = mx_strnew(count);
    int size = count - 1;
    for (; size >= 0; size--){
        str[size] = num % 10 + '0';
        num = num / 10;
    }
    return str;
}

//char *mx_itoa(int num)
//    printf("%s\n", mx_itoa(551513250));

