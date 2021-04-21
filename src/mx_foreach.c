#include "libmx.h"

void mx_foreach(int *arr, int size, void (*f)(int)){
for (int count = 0; count < size; count ++){
    f(arr[count]);
    }
}


// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     mx_foreach(arr, 5, mx_printint);
// }
