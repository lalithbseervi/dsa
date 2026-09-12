#include <stdio.h>
#include <stdlib.h>

void main() {
    int *ptr = (int *) malloc(sizeof(int));
    *ptr = 10;

    printf("value at ptr: %d\n", *ptr);

    free(ptr);
    *ptr = NULL;
    printf("NULL == 0: %d", NULL == 0);
    printf("value at ptr: %d\n", *ptr);
}