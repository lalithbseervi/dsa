#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct stack {
    char data[MAX];
    int top;
} *StackPointer;

// helper function to create a stack and assign value of top
StackPointer createStack() {
    StackPointer new_stack = malloc(sizeof(struct stack));

    if (new_stack != NULL) {
        new_stack->top = -1;
        return new_stack;
    }

    return -1;
}

void push(StackPointer s, char ch) {
    if (s->top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    s->top++;
    s->data[s->top] = ch;
}

char pop(StackPointer s) {
    if (s->top == -1) {
        return '\0';
    }
    return s->data[s->top--]; // post-decrement the top so that the deleted char is returned
}

int is_matching_pair(char char1, char char2) {
    if (char1 == '(' && char2 == ')')
        return 1;
    else if (char1 == '[' && char2 == ']')
        return 1;
    else if (char1 == '{' && char2 == '}')
        return 1;
    else
        return 0;
}

int validate_string(StackPointer s) {
    int i;
    
    for (i = 0; i < strlen(s->data); i++) {
        if (s->data[i] == '(' || s->data[i] == '[' || s->data[i] == '{') {
            push(s, s->data[i]);
        } else if (s->data[i] == ')' || s->data[i] == ']' || s->data[i] == '}') {
            if (s->top == -1) {
                return 0; // If no opening bracket is present
            } else if (!is_matching_pair(pop(s), s->data[i])) {
                return 0; // If closing bracket doesn't match the last opening bracket
            }
        }
    }

    if (s->top == -1)
        return 1; // If the stack is empty, the expression is balanced
    else
        return 0; // If the stack is not empty, the expression is not balanced
}

void main() {
    StackPointer balanced_parantheses = createStack();

    if (balanced_parantheses == NULL) {
        printf("Failed to allocate memory.\nTerminating program.\n");
        return;
    }

    printf("Enter a string to validate: ");
    scanf("%99s", balanced_parantheses->data);

    printf("Result: String is %s\n", (validate_string(balanced_parantheses) > 0) ? "valid" : "invalid");

    return;
}