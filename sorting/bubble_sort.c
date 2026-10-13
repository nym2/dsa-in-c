// Optimized implementation of Bubble sort

#include <stdio.h>
#include <stdbool.h>

//A swap implementation to swap elements after checking if the first element is greater than the next
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Sorts arr[] in ascending order using bubble sort. */
void bubble_sort(int arr[], int n) {

    for(int i = 0; i < (n-1); i++) {
        bool swapped;
        swapped = false;
        for(int j = 0; j < (n-1-i); j++) {
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) {
            break;
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

int main(void) {
    int scores[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(scores) / sizeof(scores[0]);
    // print, sort, print again
    print_array(scores, n);

    bubble_sort(scores, n);

    print_array(scores, n);
    return 0;
}