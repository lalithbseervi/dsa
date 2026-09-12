#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push() {
    int value;

    if (top == MAX - 1) {
        printf("Stack overflow\n\n");
    } else {
        printf("Enter a value: ");
        scanf("%d", &value);
        
        top++;
        stack[top] = value;
        printf("%d is added to the stack\n\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack is empty, cannot remove any element.\n\n");
    } else {
        int deleted = stack[top];
        top -= 1;
        stack[top] = NULL;
        printf("%d deleted from stack.\n\n", deleted);
    }
}

void display_stack() {
    if (top == -1) {
        printf("Stack is empty.\n\n");
        return 0;
    }

    printf("Displaying stack...\n");
    for (int i = top; i >= 0; i--)
        printf("stack[%d] = %d\n", i, stack[i]);
    printf("\n");
}

void display_top() {
    if (top == -1) {
        printf("Stack is empty.\n\n");
        return 0;
    }

    printf("Top element = %d\n\n", stack[top]);
}

void main() {
    printf("Stack Operations\n1. Push\n2. Pop\n3. Display\n4. Top\n5. Exit program\n\n");
    int choice;

    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            
            case 2:
                pop();
                break;
            
            case 3:
                display_stack();
                break;
            
            case 4:
                display_top();
                break;

            case 5:
                printf("Program terminated successfully.\n");
                return 0;

            default:
                printf("Invalid input. Please try again.\n");
                break;
        }
    }  
}