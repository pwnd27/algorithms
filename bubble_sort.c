#include "stdio.h"

#define SIZE 6

void bubble_sort(int *arr, int size){
    int i, j, temp;
    int arr_size = size - 1;
    for (i = 0; i < arr_size; i++){
        for (j = 0; j < (arr_size - i); j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(void){
    int arr[SIZE] = {-3, 5, 0, -8, 1, 10};
    int *p_arr = arr;
    bubble_sort(p_arr, SIZE);
    int i;
    for (i = 0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}