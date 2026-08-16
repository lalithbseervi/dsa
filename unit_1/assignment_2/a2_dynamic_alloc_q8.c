#include <stdio.h>
#include <stdlib.h>

void main() {
    int number_of_elements = 5;
    int *allocated_mem, **double_ptr;
    
    allocated_mem = malloc(sizeof(int) * number_of_elements);

    double_ptr = &allocated_mem;

    printf("Enter %d numbers: ", number_of_elements);
    for (int i = 0; i < number_of_elements; i++) {
        scanf("%d", &((*double_ptr)[i])); 
    }

    printf("Given input: ");
    for (int i = 0; i < number_of_elements; i++) {
        printf("%d ", (*double_ptr)[i]);
    }
    printf("\n");

    free(allocated_mem);

    allocated_mem = NULL;
    double_ptr = NULL;
}