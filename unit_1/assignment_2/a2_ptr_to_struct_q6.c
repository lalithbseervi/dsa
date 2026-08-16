#include <stdio.h>

typedef struct {
    int id;
    char name[128];
    int salary;
} Employee;

void main() {
    const int number_of_employees = 5;
    Employee employees[number_of_employees], *ptr = &employees;

    for (int i = 0; i < number_of_employees; i++) {
        printf("\nEnter the ID of the employee: ");
        scanf("%d", &ptr->id);

        printf("Enter the name of the employee: ");
        scanf(" %127[^\n]", ptr->name);

        printf("Enter the salary of the employee: ");
        scanf("%d", &ptr->salary);
        ptr++;
    }

    printf("\nGiven employee details");
    ptr -= 5;

    for (int i = 0; i < number_of_employees; i++) {
        printf("\nEmployee ID: %d\n", ptr->id);
        printf("Employee Name: %s\n", ptr->name);
        printf("Employee Salary: %d\n", ptr->salary);
        ptr++;
    }
}