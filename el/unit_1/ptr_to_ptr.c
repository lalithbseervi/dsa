#include <stdio.h>

void main() {
    int a = 20;
    int *ptr_1 = &a;
    int **ptr_2 = &ptr_1;

    printf("value of a using ptr_1: %d\n", *ptr_1);
    printf("value of a using ptr_2: %d\n", **ptr_2);
}