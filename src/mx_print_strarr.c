#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim){
    for (int count = 0; arr[count] != NULL; count ++){
        mx_printstr(arr[count]);
        if (arr[count + 1] == NULL) break;
        mx_printchar(*delim);
    }
}

// int main(){
//     char *arr[] = {"world", "hello", /*"NULL"*/};
//     mx_print_strarr(arr, "_");
// }
