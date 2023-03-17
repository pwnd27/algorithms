#include "stdio.h"

#define SIZE 6

void insertion_sort(int *arr, int size){
   int i, j, temp;
   for (i = 1; i < size; i++){
    for (j = i; j > 0; j--){
        if (arr[j] < arr[j-1]){
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;            
        }
        else break;
    }
   }
}


int main(void){
    int arr[SIZE] = {-3, 5, 0, -8, 1, 10};
    int *p_arr = arr;
    insertion_sort(p_arr, SIZE);
    int i;
    for (i = 0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}