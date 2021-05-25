#include "libmx.h"

int mx_strlen(const char *s){
    int length = 0;
    while (s[length] != '\0'){
        length ++;
    }
    return length;
}


// size_t str_len(const char *str) {
//     return (*str) ? str_len(++str) + 1 : 0;
//     }

// int main(){
//     char *str = "jklasfjjdsak;jfklsdjlkfjsadajklsfkdsajkljzkxccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccljfkvnmkalsdnfdsjlkf;dskajfkldsjfhljkgshgjkdfhgjkhfdsjkhjkfdhsgjklhfdjkghfjkdhgjkhfdjskghjkfdhgjkhdfjkhgjkfdhsjkghfjdkshgkjfdhgjkhfdjkshgjkfdhjkghfjkdhgjkhfdjkghjkfdhjgkhfhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhdjkhgjkhfdjkghjkfdhgjkhfdjkhsgdjfhgjkdfhgjkhfdsjkghsjkdfhgjkdfhsjkghdfkjhgjksdkljasdlk";
//     printf("%ld - lib strlen\n%d - my strlen\n%ld - rec strlen + conditional operator\n", strlen(str), mx_strlen(str), str_len(str));
// }
