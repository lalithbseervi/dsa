#include <stdio.h>

typedef struct {
    int employee_id;
    char employee_name[128];
    int salary;
} employee;

int no_of_employees = 3;
employee employees[3] = { NULL };

int readEmployee() {
    printf("\nEnter the employee ID, employee_name, and salary of %d employees:\n", no_of_employees);

    for (int i = 0; i < no_of_employees; i++) {
        int employee_id, salary;

        printf("\nEmployee %d\n", i + 1);

        while (1) {
            printf("Employee ID: ");
            scanf("%d", &employee_id);

            if (employee_id <= 0) {
                printf("[ERROR]: Enter a positive employee ID.\n");
                continue;
            }

            employees[i].employee_id = employee_id;
            break;
        }

        printf("Employee Name: ");
        scanf(" %127[^\n]", employees[i].employee_name);

        while (1) {
            printf("Salary: ");
            scanf("%d", &salary);

            if (salary <= 0) {
                printf("[ERROR]: Salary must be greater than zero.\n");
                continue;
            }

            employees[i].salary = salary;
            break;
        }
    }

    return 0;
}

int isEmployeesPopulated() {
    return employees[0].employee_id != NULL;
}

void displayEmployee() {
    int employees_populated = isEmployeesPopulated();

    if (employees_populated != 1) {
        printf("[ERROR]: No employees found.\n");
        return 0;
    }

    for (int i = 0; i < no_of_employees; i++) {
        printf("Employee %d\n", i + 1);
        printf("Employee ID: %d\n", employees[i].employee_id);
        printf("Employee Name: %s\n", employees[i].employee_name);
        printf("Salary: %d\n\n", employees[i].salary);
    }
}

int updateSalary() {
    int employees_populated = isEmployeesPopulated();

    if (employees_populated != 1) {
        printf("[ERROR]: No employees found.\n");
        return 0;
    }

    int emp_id, new_emp_salary = NULL; 

    while (1) {
        printf("Enter the employee ID for whom salary should be updated: ");
        scanf("%d", &emp_id);

        if (emp_id <= 0 || emp_id > no_of_employees) {
            printf("[ERROR]: Incorrect employee ID.\n");
            continue;
        } else {
            emp_id -= 1;
            break;
        }
    }
    
    int old_emp_salary = employees[emp_id].salary;
                    
    while (1) {
        printf("Enter the new salary of employee %d: ", emp_id + 1);
        scanf("%d", &new_emp_salary);

        if (new_emp_salary <= 0) {
            printf("[ERROR]: New salary (%d) is in negative or zero. Enter a non-zero salary.\n", new_emp_salary);
            continue;
        }
        
        employees[emp_id].salary = new_emp_salary;
        printf("Updated employee %d's salary from %d to %d", emp_id + 1, old_emp_salary, new_emp_salary);
        break;
    }

    return 0;
}

void displayMenu() {
    printf("\n1. Read employees\n");
    printf("2. Display all employees\n");
    printf("3. Update salary of an employee\n");
    printf("4. Show menu options\n");
    printf("5. Exit\n");
}

int main() {
    int choice;

    displayMenu();
    while (1) {
        printf("\nSelect an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                int read_employee_result = readEmployee();

                if (read_employee_result != 0) {
                    printf("Uncaught Error.\n");
                    return 0;
                }

                break;
            
            case 2:
                displayEmployee();
                break;
            
            case 3:
                int update_salary_result = updateSalary();
                
                if (update_salary_result != 0) {
                    printf("Salary was not updated. Please try again.\n");
                }
                break;
            
            case 4:
                displayMenu();
                break;
            
            case 5:
                printf("Program terminated\n");
                return 0;

            default:
                printf("Invalid Option\n");
                break;
        }
    }
}