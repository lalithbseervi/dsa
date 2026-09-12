#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

void main() {
    int (*ptr) (int, int) = &add;
    int a, b;

    printf("Enter two numbers to add: ");
    scanf("%d %d", &a, &b);

    printf("Result = %d\n", ptr(a, b));
}