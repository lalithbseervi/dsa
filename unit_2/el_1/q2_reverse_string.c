#include <stdio.h>
#define MAX 100

typedef struct {
    char arr[MAX];
    int top;
} Stack;

void push(Stack *s, char ch) {
    if (s->top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    s->top++;
    s->arr[s->top] = ch;
}

char pop(Stack *s) {
    if (s->top == -1) {
        return '\0';
    }
    return s->arr[s->top--]; // post-decrement for top so that the deleted char is returned
}

int main() {
    Stack s;
    char str[MAX];
    int i;

    s.top = -1;

    printf("Enter a string: ");
    scanf("%99s", str);

    // copy string to stack
    for (i = 0; str[i] != '\0'; i++) {
        push(&s, str[i]);
    }

    // pop characters to reverse the string
    printf("Reversed string: ");
    while (s.top != -1) {
        printf("%c", pop(&s));
    }

    printf("\n");

    return 0;
}
