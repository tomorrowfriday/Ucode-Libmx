#include "libmx.h"

void mx_printint(int n){
    // n < 0 ?  n = n * -1 : 
    // n > 9 ? mx_printchar(n / 10) : mx_printint((n % 10) + '0'); 
    if (n < 0){
        mx_printchar('-');
        n = n * -1;
    }
    if (n == -2147483648){
        mx_printchar('2');
        n = 147483648;
    }
    if (n > 9){
        mx_printint(n / 10);
        }
    mx_printchar((n%10) + '0');
}


// int main(){
//     mx_printint(2147483647);
//     mx_printchar('\n');
//     mx_printint(-2147483648);
//     mx_printchar('\n');
//     mx_printint(2147483646);
//     mx_printchar('\n');
//     mx_printint(-2147483646);
//     mx_printchar('\n');

//     return 0;
// }
