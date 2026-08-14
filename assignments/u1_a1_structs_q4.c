#include <stdio.h>

typedef struct {
    char house_no[16];
    char city[128];
    char state[128];
} address;

typedef struct {
    char name[64];
    char usn[13];    // PES1202501604
    int marks;
    address current_address;
} student;

void main() {
    student students[3];

    printf("Enter the Name, USN, marks, and address of 3 students: \n");

    for (int i = 0; i < 3; i++) {
        printf("Name: ");
        scanf(" %63[^\n]", students[i].name);

        printf("USN: ");
        scanf(" %63[^\n]", students[i].usn);

        printf("House No.: ");
        scanf(" %15[^\n]", students[i].current_address.house_no);

        printf("City: ");
        scanf(" %127[^\n]", students[i].current_address.city);

        printf("State: ");
        scanf(" %127[^\n]", students[i].current_address.state);

        printf("Marks: ");
        scanf("%d", &students[i].marks);
        printf("\n");
    }

    printf("Printing student details...\n");

    for (int i = 0; i < 3; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("USN: %s\n", students[i].usn);
        printf("House No.: %s\n", students[i].current_address.house_no);
        printf("City: %s\n", students[i].current_address.city);
        printf("State: %s\n", students[i].current_address.state);
        printf("Marks: %d\n\n", students[i].marks);
    }
}