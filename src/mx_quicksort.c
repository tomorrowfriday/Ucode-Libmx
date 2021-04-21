#include "libmx.h"


int mx_quicksort(int *arr, int left, int right){
int count = 0;   
int i, j, pivot, temp;
    if(left<right){
      
      pivot=right;
      i=left;
      j=right;
      while(i<j){
        while(arr[i]<=arr[pivot]&&i<right){
            i++;
        }
        while(arr[j]>arr[pivot])
            j--;
        if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            count ++; 
        }
      }
      temp=arr[pivot];
      arr[pivot]=arr[j];
      arr[j]=temp;      
      mx_quicksort(arr,left,j-1);
      mx_quicksort(arr,j+1,right);
   }
return count;
}
