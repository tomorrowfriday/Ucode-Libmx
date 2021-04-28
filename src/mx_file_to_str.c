#include "libmx.h"

char *mx_file_to_str(const char *file){
    char *str = mx_strnew(mx_file_len(file));
    int i = 0;
    FILE *fl;
    fl = fopen(file, "r");
    while (feof(fl)){
        str[i++] = fgetc (fl);
        str[i] = '\0'; 
    }
    fclose(fl);
    return str;
}
