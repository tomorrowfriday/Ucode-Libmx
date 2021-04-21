#include "libmx.h"

char *mx_strdup(char *src){
    return mx_strcpy(mx_strnew(mx_strlen(src)), src);
}

// int main(){
//     char *src = "Hello!";
//     printf("%s\n", mx_strdup(src));
// }

