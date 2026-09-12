#include <stdio.h>
#include <stdlib.h>

void main() {
    int n = 5;
    int *ptr = calloc(n, sizeof(int));

    if (ptr == NULL) {
        perror("Failed to allocate memory for ptr array\n");
    }
    
    for (int i = 0; i < n; i++)
        printf("%d ", *(ptr+i));
    printf("\n");

    free(ptr);
}