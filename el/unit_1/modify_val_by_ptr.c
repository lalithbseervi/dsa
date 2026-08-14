#include <stdio.h>

void main() {
    char ch = 'a';
    char *ch_ptr = &ch;

    printf("before modified ch: %c\n", ch);
    printf("modified ch value: %c\n", (*ch_ptr = 'b'));
}