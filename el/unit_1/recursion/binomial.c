#include <stdio.h>

int bc(int n, int r) {
    if (r == 0 || n == r) return 1;
    return bc(n - 1, r - 1) + bc(n - 1, r);
}

void main() {
    int n, r, combinations;

    printf("Enter the values for n and r: ");
    scanf("%d %d", &n, &r);

    combinations = bc(n, r);

    printf("c(%d, %d) = %d\n", n, r, combinations);
}