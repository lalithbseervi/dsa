#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

void print_menu() {
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
}

int main() {
    int (*arithmetic_operations[]) (int, int) = {&add, &subtract, &multiply, &divide};
    char op_symbol[4] = {'+', '-', '*', '/'};

    print_menu();
    while (1) {
        int choice, a, b, result;

        while(1) {
            printf("\nChoose an operation: ");
            scanf("%d", &choice);
            
            if (choice == 5) break;

            if (choice >= 1 || choice <= 4) {
                printf("Enter the first value: ");
                scanf("%d", &a);

                printf("Enter the second value: ");
                scanf("%d", &b);
                break;
            }
        
            printf("Invalid option selected. Please try again.\n");
            continue;
        }

        switch (choice) {
            case 1:
                result = arithmetic_operations[choice - 1](a, b);
                break;

            case 2:
                result = arithmetic_operations[choice - 1](a, b);
                break;

            case 3:
                result = arithmetic_operations[choice - 1](a, b);
                break;

            case 4:
                result = arithmetic_operations[choice - 1](a, b);
                break;
            
            case 5:
            default:
                printf("Program terminated successfully!\n");
                return 0;
        }
        printf("Result of a (%d) %c b (%d) = %d\n", a, op_symbol[choice - 1], b, result);
    }
}