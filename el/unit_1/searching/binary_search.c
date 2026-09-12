#include <stdio.h>
#include <stdlib.h>

int binary_search(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid, i = 0;

    while (low <= high) {
        mid = (low + high) / 2;
        printf("Iteration %d: low = %d, mid = %d, high = %d, arr[mid] = %d\n", i, low, mid, high, arr[mid]);

        if (arr[mid] == key)
            return mid; 
        
        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;

        i++;
    }
    return -1;
}

void main(int argc, char* argv[]) {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // int search_element = 100;
    int search_element = atoi(argv[1]);

    int result = binary_search(arr, (sizeof(arr)/sizeof(int)), search_element);

    if (result == -1)
        printf("%d was not found in the array\n", search_element);
    else
        printf("%d was found at index %d\n", search_element, result);
}