#include "../inc/libmx.h"

void mx_printchar(char c){
    write(1, &c, 1);
}


// int main(){
//     mx_printchar('f');
//     return 0;
// }
