#include "libmx.h"

int mx_strcmp(const char *s1, const char *s2){
    while (*s1 && (*s1 == *s2))
    s1++, s2++;
    return *s1 - *s2;
}


// int main(){
//     char *s1 = "fjkasddfsafsasdfafhdf";
//     char *s2 = "fjkasddfsafsasdfafhdffdsfa";
//     printf("%d\n", mx_strcmp(s1, s2));
//     printf("%d\n", strcmp(s1, s2));
// }
