
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    ptr = (int *) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
    }

    // Print elements
    printf("Elements entered:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d\n", *(ptr + i));
    }

    // Free dynamically allocated memory
    free(ptr);

    return 0;
}
