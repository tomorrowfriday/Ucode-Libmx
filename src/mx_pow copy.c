#include <stdio.h>

double mx_pow(double n, unsigned int pow){
    double res = 1;
    for (; pow > 0; pow --){
        res *= n;
    }
    return res;
}


// int main(){
//     printf("%f\n", mx_pow(3, 6));
// }
