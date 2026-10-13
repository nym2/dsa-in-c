#include <stdio.h>

//A swap implementation to swap elements after checking if the first element is greater than the next
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
