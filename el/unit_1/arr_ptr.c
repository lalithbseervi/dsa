#include <stdio.h>
#include <stdlib.h>

void main() {
    int a[] = {10, 20, 30, 40, 50, 60};
    int *ptr = &a[3];
    ptr++;
    printf("value after one increment: %d\n", *ptr);

    ptr--;
    printf("value after decrementing: %d\n", *ptr);

    ptr += 2;
    printf("value after skipping 2 elements: %d\n", *ptr);

    ptr -= 4;
    printf("value after going 4 values back: %d\n", *ptr);
}