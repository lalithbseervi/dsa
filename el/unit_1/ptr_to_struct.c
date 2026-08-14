#include <stdio.h>

typedef struct {
    int roll;
    float marks;
} student;

void main() {
    student s1 = { 101, 75.50 }, *ptr = &s1;

    printf("Roll No.: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);
}