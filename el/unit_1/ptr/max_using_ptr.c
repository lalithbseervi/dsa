#include <stdio.h>

int* min_max(int *a, int *b) {
    return (*a > *b) ? a : b;
}

void main() {
    int a = 10, b = 20;

    printf("Greatest = %d\n", *(min_max(&a, &b)));
}