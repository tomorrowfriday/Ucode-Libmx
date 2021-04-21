#include "libmx.h"

int mx_sqrt(int x){
    int sort = 1;
    int res = 0;
    for (; sort < x; sort ++){
        // sort * sort == x ? res = sort: res = 0;
        if (sort * sort == x){ 
            res = sort;
            break;
        }
    }
    return res;
}


// int main(){
//     printf("%d\n", mx_sqrt(15));
// }
