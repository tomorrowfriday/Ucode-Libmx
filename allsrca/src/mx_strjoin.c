#include <stdio.h>
char *mx_strcat(char*, const char*);
char *mx_strdup(const char*);

char *mx_strjoin(const char *s1, const char *s2){
    if (s1 == NULL && s2 == NULL)
        return NULL;
    if (s1 == NULL)
        return mx_strdup(s2);
    if (s2 == NULL)
        return mx_strdup(s1);
        
    char *str1 = mx_strdup(s1);
    char *str2 = mx_strdup(s2);
    return mx_strcat(str1, str2);
}

/*
int main(){
    char *str1 = "hello";
    char *str2 = "world";
    printf("%s", mx_strjoin(str1, str2));
}
*/
