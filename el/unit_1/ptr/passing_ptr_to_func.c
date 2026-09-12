#include <stdio.h>
#include <stdlib.h>

void change_value(int *ptr) {
    *ptr = 30;
}

void main() {
    int num = 20;
    int *ptr = &num;

    printf("value before change_value() = %d\n", num);

    change_value(ptr);

    printf("value after change_value() = %d\n", num);
}