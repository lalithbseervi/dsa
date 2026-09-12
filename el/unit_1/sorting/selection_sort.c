#include <stdio.h>

void main() {
    // int a[] = {5, 3, 8, 1, 2};
    // int a[] = {7, 5, 1, 3, 2, 10, 4, 9};
    int a[] = { 64, 25, 12, 34, 7, 56, 18 };
    int n = sizeof(a) / sizeof(int), i, j, min, temp;

    for (i = 0; i < n - 1; i++) {
        min = i;
        printf("Finiding minimum between index %d and %d\n", i + 1, n);
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                printf("a[j] < a[min] => (%d < %d) => min = %d\n", a[j], a[min], j);
                min = j;
            }
        }

        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
        printf("Swapping %d and %d\n", a[min], a[i]);
        for (int i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n\n");
    }

    for (int i = 0; i < n; i++)
        printf("a[%d] = %d\n", i, a[i]);
}
