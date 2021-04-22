#include "libmx.h"

void mx_swap_char(char *s1, char *s2){
    char buff = *s1;
    *s1 = *s2;
    *s2 = buff;
}

// int main(){
//     char str[3] = "ONE";
//     mx_swap_char(&str[0], &str[1]);
//     printf("%s \n", str);
//     mx_swap_char(&str[1], &str[2]);
//     printf("%s \n", str);
// }
