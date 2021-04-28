#include "libmx.h"

// static const long hextable[] = { 
//     -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
//     -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
//     -1,-1, 0,1,2,3,4,5,6,7,8,9,-1,-1,-1,-1,-1,-1,-1,10,11,12,13,14,15,-1,
//     -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
//     -1,-1,10,11,12,13,14,15,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
//     -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
//     -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
//     -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
//     -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
//     -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
//     -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
// };

// unsigned long mx_hex_to_nrb(const char *hex){
//    unsigned long ret = 0; 
//    while (*hex /*&& ret >= 0*/) {
//       ret = (ret << 4) | hextable[(unsigned long)*hex++];
//    }
//    return ret; 
// }

unsigned long mx_hex_to_nbr(const char *hex){
//    const char *pin = hex; // lets use pointer to loop through the string
    const char *pin = hex;
//    long out = 0;  // here we accumulate the result
    long out = 0;
//    while(*pin != 0){
    while(*pin != 0){
//        out <<= 4; // we have one more input character, so 
                   // we shift the accumulated interim-result one order up
        out <<= 4;
//        out +=  (*pin < 'A') ? *pin & 0xF : (*pin & 0x7) + 9; // add the new nibble.
        out += (*pin < 'A') ? *pin & 0xF : (*pin & 0x7) + 9;
//        pin++; // go ahead
        pin++;
    }
//    return out;
    return out;
}



// int main(){
//     printf("%ld\n", mx_hex_to_nrb("C4"));
//     printf("%ld\n", mx_hex_to_nrb("FADE"));
//     printf("%ld\n", mx_hex_to_nrb("ffffffffffff"));
// }

