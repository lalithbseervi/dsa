#include <stdio.h>

void main() {
    int arr[] = {10, 20, 30, 40};

    int *ptr = arr;
    int i = 0;

    while (i < 4) {
        printf("arr[%d] = %d\n", i, *(ptr+i));
        i++;
    }
}