#include <stdio.h>

//A swap implementation to swap elements after checking if the first element is greater than the next
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Sorts arr[] in ascending order using bubble sort. */
void bubble_sort(int arr[], int n) {
    for(int i = 0; i < (n-1); i++) {
        for(int j = 0; j < (n-1-i); j++) {
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void print_array(int arr[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(", ");   // separator goes before every element except the first
        }
        printf("%d", arr[i]);
    }
    printf("]\n");
}
