#include <stdio.h>
#include <stdlib.h>

void main() {
    int a = 10;
    printf("Value of a = %d\n", a);

    int *ptr = &a;
    printf("Address of a = %p\n", ptr); 

    float price = 500.75;
    float *price_ptr = &price;
    printf("Value of price (using var) = %.2f\n", price);
    printf("Value of price (using ptr) = %.2f\n", *price_ptr);

    char ch = 'A';
    char *ch_ptr = &ch;
    printf("Value of ch (using var) = %c\n", ch);
    printf("Value of ch (using ptr) = %c\n", *ch_ptr);
}