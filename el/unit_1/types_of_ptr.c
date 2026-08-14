#include <stdio.h>
#include <stdlib.h>

void main() {
    // const int *ptr = malloc(sizeof(int));
    // *ptr = 100;
    int num = 50;
    printf("value of num = %d", num);

    const int *ptr = &num; 
    *ptr = 10;              // constant pointer can't be reassigned or used to update values

    printf("value at constant pointer: %d", *ptr);
}