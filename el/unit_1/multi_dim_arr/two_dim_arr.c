#include <stdio.h>

void main() {
    const int rows = 2, cols = 3;
    char arr[2][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}};
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = %c\n", i, j, arr[i][j]);
        }
    }
}