// program to demonstrate the use of malloc() ,calloc(),realloc(),anf free(),functions.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr1, *arr2, *arr3;
    int size, i;

    // Using malloc() to allocate memory for an array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr1 = (int *)malloc(size * sizeof(int));

    if (arr1 == NULL) {
        printf("Memory allocation failed using malloc()\n");
        return 1; // Exit with an error code
    }

    // Initializing and printing values in the array
    printf("Using malloc():\n");
    for (i = 0; i < size; i++) {
        arr1[i] = i + 1;
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Using calloc() to allocate and initialize memory for another array
    arr2 = (int *)calloc(size, sizeof(int));

    if (arr2 == NULL) {
        printf("Memory allocation failed using calloc()\n");
        free(arr1); // Free previously allocated memory
        return 1; // Exit with an error code
    }

    // Printing values in the second array
    printf("Using calloc():\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Using realloc() to resize the first array
    int newSize = size * 2;
    arr3 = (int *)realloc(arr1, newSize * sizeof(int));

    if (arr3 == NULL) {
        printf("Memory reallocation failed using realloc()\n");
        free(arr1); // Free previously allocated memory
        free(arr2); // Free memory allocated using calloc()
        return 1; // Exit with an error code
    }

    // Initializing and printing values in the resized array
    printf("Using realloc() to resize the array:\n");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    // Free allocated memory using free()
    free(arr2);
    free(arr3);

    return 0;
}
