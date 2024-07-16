#include <stdio.h>

int main() {
    // Introduction: Array declaration and initialization
    int arr[] = {1, 2, 2, 3, 4, 4, 5};  // Array with duplicate elements
    int size = 7;  // Size of the array

    // Output: Printing the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Accessing and printing each element of the array
    }
    printf("\n");

    // Program: Removing duplicate elements
    int unique[size];  // Array to store unique elements
    int k = 0;  // Index for unique array

    for (int i = 0; i < size; i++) {
        int duplicate = 0;  // Flag to check for duplicates
        for (int j = 0; j < k; j++) {
            if (arr[i] == unique[j]) {
                duplicate = 1;  // Setting flag if duplicate is found
                break;
            }
        }

        if (!duplicate) {
            unique[k++] = arr[i];  // Copying non-duplicate element to unique array
        }
    }

    // Output: Printing the array after removing duplicates
    printf("Array after removing duplicates: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unique[i]);  // Accessing and printing each element of the unique array
    }
    printf("\n");

    return 0;
}

