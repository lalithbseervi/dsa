#include <stdio.h>

int square(int a) {
    return a * a;
}

void main() {
    int (*square_function_ptr) (int), input;

    square_function_ptr = &square;

    printf("Enter the number to be squared: ");
    scanf("%d", &input);

    printf("Square of %d = %d\n", input, square_function_ptr(input));
}