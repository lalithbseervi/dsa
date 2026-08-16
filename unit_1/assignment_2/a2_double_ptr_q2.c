#include <stdio.h>

void main() {
    int value = 50;
    int *ptr = &value;
    int **double_ptr = &ptr;

    printf("Value of a using variable = %d\n", value);
    printf("Value of a using regular pointer = %d\n", *ptr);
    printf("Value of a using double pointer = %d\n", **double_ptr);
}