#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex){
    const char *pin = hex;
    long out = 0;
    while(*pin != 0){
        out <<= 4;
        out += (*pin < 'A') ? *pin & 0xF : (*pin & 0x7) + 9;
        pin++;
    }
    return out;
}



// int main(){
//     printf("%ld\n", mx_hex_to_nrb("C4"));
//     printf("%ld\n", mx_hex_to_nrb("FADE"));
//     printf("%ld\n", mx_hex_to_nrb("ffffffffffff"));
// }

