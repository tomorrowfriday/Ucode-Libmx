#include "libmx.h"
 
char *mx_strcpy(char *dst, const char *src)
{
    // return if no memory is allocated to the destination
    if (dst == NULL)
        return NULL;
    // take a pointer pointing to the beginning of destination string
    char *ptr = dst;
    // copy the C-string pointed by source into the array
    // pointed by destination
    while (*src != '\0')
    {
        *dst = *src;
        dst++;
        src++;
    }
     // include the terminating null character
    *dst = '\0';
    // destination is returned by standard strcpy()
    return ptr;
}

 
// Implement strcpy function in C
// int main(void)
// {
//     char source[] = "Techie Delight";
//     char destination[25];
 
//     printf("%s\n", mx_strcpy(destination, source));
//     printf("%s\n", strcpy(destination, source));
 
//     return 0;
// }
