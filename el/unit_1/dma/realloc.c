#include <stdio.h>
#include <stdlib.h>

void main() {
    int n = 5;
    int *ptr = malloc(n * sizeof(int));

    if (ptr == NULL) {
        perror("Failed to allocate memory for ptr array\n");
    }

    for (int i = 0; i < n; i++)
        *(ptr+i) = i;
    
    for (int i = 0; i < n; i++)
        printf("%d ", *(ptr+i));
    printf("\n\nAfter reallocation\n");

    n = 6;
    ptr = realloc(ptr, 6 * sizeof(int));
    ptr[5] = 6;

    for (int i = 0; i < n; i++)
        printf("%d ", *(ptr+i));
    printf("\n");

    free(ptr);
}