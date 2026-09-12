#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 50

int precedence(char ch) {
    switch (ch) {
        case '^':
            return 3;

        case '*':
        case '/':
            return 2;
        
        case '+':
        case '-':
            return 1;
        
        default:
            return 0;
    }
}

void infixtopostfix(char *infix, char *postfix) {
    char stack[MAX];
    int top = -1, k = 0;

    for (int i = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];

        if (isalnum(ch))
            postfix[k++] = ch;
        else if (ch == '(') {
            stack[++top] = ch;
        } else if (ch == ')') {
            while (top != -1 && stack[top] != '(')
                postfix[k++] = stack[top--];
            top--;
        } else {
            while (top != -1 && precedence(stack[top] >= precedence(ch))) {
                postfix[k++] = stack[top--];
            }
            stack[++top] = ch;
        }

        while (top != -1) {
            postfix[k++] = stack[top--];
        }

        postfix[k] = '\0';
    }
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter an infix expression: ");
    scanf("%s[^\n]", infix);

    infixtopostfix(&infix, &postfix);

    printf("Postfix expression\n%s", postfix);
    return 0;
}