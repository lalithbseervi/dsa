#include <stdio.h>

int gcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;

    return gcd(a, b % a);
}

void main() {
    int a, b, gcd_result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    gcd_result = gcd(a, b);

    printf("Greatest Common Divisor = %d\n", gcd_result);
}