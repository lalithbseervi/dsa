#include <stdio.h>

void main() {
    int arr[] = {1, 2, 3, 4, 5};
    const int *ptr = arr; // or const int *ptr = &arr[0];
    printf("Address of ptr at initialization: %p\n", ptr);

    for (int i = 0; i < 5; i++)
        printf("arr[%d] = %d\n", i, *(ptr + i));

    printf("Address of ptr after iteration: %p\n", ptr);
}