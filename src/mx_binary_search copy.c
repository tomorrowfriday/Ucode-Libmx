#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count){
    int first = 0;
    int last = size - 1;
    int res = -1;
    int temp = 1;
    while (mx_strcmp(arr[first], s) <= mx_strcmp(arr[last], s)){
      int middle = (first + last) / 2;
      if (mx_strcmp(arr[middle], s) < 0){
        first = middle + 1;
        temp ++;
      }
      else if (mx_strcmp(arr[middle], s) == 0){
        res = middle;
        break;
      }
      else {
        last = middle - 1;
        temp ++;
      }    
    }
    if (mx_strcmp(arr[first], s) > mx_strcmp(arr[last], s)){
        return -1;
    }
    *count = temp;
    return res;
}



// int main(){
//   int count = 0;
//   char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//   printf("%d c = %d \n", mx_binary_search(arr, 6, "ab", &count), count);
  
//   count = 0;
//   printf("%d c = %d \n", mx_binary_search(arr, 6, "aBc", &count), count);
 
//   count = 0;
//   printf("%d c = %d \n", mx_binary_search(arr, 6, "aBz", &count), count);

//   count = 0;
//   printf("%d c = %d \n", mx_binary_search(arr, 6, "z", &count), count);
  
// }
