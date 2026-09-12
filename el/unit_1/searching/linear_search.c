#include <stdio.h>

int linear_search(int arr[], int n, int search_ele) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == search_ele)
            return i;
    }
    return -1;
}

void main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    int search_ele;
    
    printf("Enter an element to search: ");
    scanf("%d", &search_ele);

    int result = linear_search(arr, n, search_ele);

    if (result == -1)
        printf("%d was not found in the array\n", search_ele);
    else
        printf("%d found at index %d (position %d)\n", search_ele, result, result+1);
}