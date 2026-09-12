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
    if (is_empty()) {
        printf("Stack is empty, cannot remove any element.\n\n");
    } else {
        int deleted = stack[top];
        top -= 1;
        printf("%d deleted from stack.\n\n", deleted);
    }
}

void display_stack() {
    if (is_empty()) {
        printf("Stack is empty.\n\n");
        return;
    }

    printf("Displaying stack...\n");
    for (int i = top; i >= 0; i--)
        printf("stack[%d] = %d\n", i, stack[i]);
    printf("\n");
}

void display_top() {
    if (is_empty()) {
        printf("Stack is empty.\n\n");
        return;
    }

    printf("Top element = %d\n\n", stack[top]);
}

int size() {
    return top + 1;
}

int is_empty() {
    if (top == -1) return 1;
    else return 0;
}

void main() {
    printf("Stack Operations\n1. Push\n2. Pop\n3. Display\n4. Top\n5. Size of stack\n6. Exit Program\n\n");
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
                int s = size();
                printf("Stack has %d elements\n\n", s);
                break;

            case 6:
                printf("Program terminated successfully.\n");
                return;

            default:
                printf("Invalid input. Please try again.\n");
                break;
        }
    }  
}