#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr){
    char hexadecimalNumber[100];
    int i = 0;
    int temp;
    while(nbr != 0){
        temp = nbr % 16;
        if (temp < 10){
            temp = temp + 48;
        }
        else temp = temp + 55;
        hexadecimalNumber[i++] = temp;
        nbr = nbr / 16;
    }
    mx_str_reverse(hexadecimalNumber);
    return mx_strdup(hexadecimalNumber);
    // return hexadecimalNumber;
}
