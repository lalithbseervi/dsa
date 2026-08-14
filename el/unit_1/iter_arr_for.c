#include <stdio.h>

void main() {
    int arr[] = {10, 20, 30, 40};

    int *ptr = arr;

    for (int i = 0; i < 4; i++)
        printf("arr[%d] = %d\n", i, *(ptr+i));
}