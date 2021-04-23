#include "libmx.h"

void mx_del_strarr(char ***arr){
    for (int count = 0; *arr[count] != NULL; count ++){
        mx_strdel(arr[count]);
    }
}
