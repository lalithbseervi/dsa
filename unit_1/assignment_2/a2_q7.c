#include <stdio.h>

void main() {
    char name1[] = "Jitendra";
    char name2[] = "Kamlesh";
    char name3[] = "Harish";
    char name4[] = "Yadunandhan";
    char name5[] = "Abhay";

    char *students[5] = { name1, name2, name3, name4, name5 };

    printf("Listing students using array of pointers\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, students[i]);
    }
}