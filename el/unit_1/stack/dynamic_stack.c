#include <stdio.h>
#include <stdlib.h>

#define INITIAL_MAX 5

void push(int **stack, int *top, int *current_max) {
    int value;

    if (*top == *current_max - 1) {
        printf("Stack overflow. Increasing stack's size.\n");
        *current_max *= 2;
        int *temp = realloc(*stack, *current_max * sizeof(int));
        if (temp == NULL) {
            printf("Memory reallocation failed!\n");
            return;
        }
        *stack = temp;
    }
    
    printf("Enter a value: ");
    scanf("%d", &value);
    
    (*top)++;
    (*stack)[*top] = value;
    printf("%d is added to the stack\n\n", value);
}

void pop(int **stack, int *top) {
    if (*top == -1) {
        printf("Stack is empty, cannot remove any element.\n");
    } else {
        int deleted = (*stack)[*top];
        (*top)--;
        printf("%d deleted from stack.\n\n", deleted);
    }
}

void display_stack(int *stack, int *top) {
    if (*top == -1) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Displaying stack...\n");
    for (int i = *top; i >= 0; i--)
        printf("stack[%d] = %d\n", i, stack[i]);
    printf("\n");
}

void display_top(int *stack, int *top) {
    if (*top == -1) {
        printf("Stack is empty.\n");
        return;
    }

    printf("top = %d\n\n", stack[*top]);
}

int main() {
    int current_max = INITIAL_MAX;
    int *stack = (int *) malloc(current_max * sizeof(int));
    int top = -1;

    if (stack == NULL) {
        printf("Failed to allocate memory for stack.\n");
        return 1;
    }

    printf("Stack Operations\n1. Push\n2. Pop\n3. Display\n4. Top\n5. Exit program\n\n");
    int choice;

    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push(&stack, &top, &current_max);
                break;
            
            case 2:
                pop(&stack, &top);
                break;
            
            case 3:
                display_stack(stack, &top);
                break;
            
            case 4:
                display_top(stack, &top);
                break;

            case 5:
                free(stack);
                printf("Program terminated successfully.\n");
                return 0;

            default:
                printf("Invalid operation chosen. Please try again.\n");
                break;
        }
    }  
}