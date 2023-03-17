#include "stdio.h"

#define SIZE 6

void selection_sort(int *arr, int size){
    int min, min_index, temp, i, j;
    for (i = 0; i < size; i++){
        min = arr[i];
        min_index = i;
        for (j = i + 1; j < size; j++){
            if (min > arr[j]){
                min = arr[j];
                min_index = j;
            }
        }
        
        if (min_index != i){
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}


int main(void){
    int a[SIZE] = {-3, 5, 0, -8, 1, 10};
    int *p_arr = a;
    selection_sort(p_arr, SIZE);
    int i;
    for (i = 0; i < SIZE; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}