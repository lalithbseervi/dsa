#include <stdio.h>

typedef struct {
    char name[64];
    char usn[13];    // PES1202501604
    int marks;
} student;

void main() {
    student students[5];

    printf("Enter the Name, USN, and marks of 5 students: \n");

    for (int i = 0; i < 5; i++) {
        printf("Name: ");
        scanf(" %63[^\n]", students[i].name);

        printf("USN: ");
        scanf(" %63[^\n]", students[i].usn);

        printf("Marks: ");
        scanf("%d", &students[i].marks);
        printf("\n");
    }

    printf("Printing student details...\n");

    for (int i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("USN: %s\n", students[i].usn);
        printf("Marks: %d\n\n", students[i].marks);
    }
}