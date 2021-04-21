#include "libmx.h"

int mx_bubble_sort(int *arr, int size){
    int swaps = 0;
    int sorta = 0;
    int sortb = 0;
    int buff;
        for(; sorta < size; sorta ++){
            for (sortb = sorta + 1; sortb < size; sortb ++){
                if(arr[sorta] > arr[sortb]){
                    buff = arr[sortb];
                    arr[sortb] = arr[sorta];
                    arr[sorta] = buff; 
                    swaps ++;
                }
            }
        }
    return swaps;
}


// int main(){
//     char *arr[] = {"abc", "xyz", "ghi", "def"};
//     printf("%d\n", mx_bubble_sort(arr, 4));
//     char *arr2[] = {"abc", "acb", "a"};
//     printf("%d\n", mx_bubble_sort(arr2, 3));

// }
