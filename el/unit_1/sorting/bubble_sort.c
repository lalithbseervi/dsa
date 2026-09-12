#include <stdio.h>

int main() {
    int a[] = {45, 12, 78, 23, 56, 9, 34, 67};
    int n = sizeof(a) / sizeof(int);
    int i, j, temp;

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                printf("swapping %d and %d\n", a[j], a[j + 1]);
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        printf("array after iteration %d\n", i);
        for(int p = 0; p < n; p++)
            printf("%d ", a[p]);
        printf("\n\n");
    }

    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}