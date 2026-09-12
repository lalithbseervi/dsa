#include <stdio.h>

void main() {
    int a = 10, b = 20, temp = NULL;
    int *ptr_1 = &a, *ptr_2 = &b;

    printf("before swapping: a = %d, b = %d\n", *ptr_1, *ptr_2);

    temp = a;
    *ptr_1 = *ptr_2;
    *ptr_2 = temp;

    printf("before swapping: a = %d, b = %d\n", *ptr_1, *ptr_2);
}