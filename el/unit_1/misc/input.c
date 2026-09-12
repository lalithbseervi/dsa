#include <stdio.h>

void main() {
    int stack[5], choice;

    printf("Stack Operations\n1. Push\n2. Pop\n3. Display\n4. Top element\n5. Exit\n");

    while (1) {
        while (1) {
            printf("Enter your choice: ");
            scanf("%d", &choice);    

            if (choice > 0 && choice < 6)
                break;
            else {
                printf("Invalid operation entered.\n");
                continue;
            }
        } 

        switch (choice) {
            case 1:
                printf("Push operation is performed.\n");
                break;

            case 2:
                printf("Pop operation is performed.\n");
                break;
            
            case 3:
                printf("Displaying stack operation is performed.\n");
                break;

            case 4:
                printf("Displaying top element.\n");
                break;
            
            case 5:
                printf("Program terminated.\n");
                return 0;

            default:
                printf("Invalid operations. Please refer the list of valid operations below.\n");
                printf("Stack Operations\n1. Push\n2. Pop\n3. Display\n4. Top element\n5. Exit");
                break;
        }
    }
}