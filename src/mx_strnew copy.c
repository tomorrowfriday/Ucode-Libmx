#include "libmx.h"

char *mx_strnew(const int size){
    char *str = (char *)malloc(size*sizeof(char) + 1);
    if (NULL == str){
        return NULL;
    }
    str[size*sizeof(char) + 1] = '\0';
    // printf("%s\n", str);
    // free(str);
    return str;
}


// int main(){
//     mx_strnew(10);
// }
