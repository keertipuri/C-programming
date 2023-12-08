// program to read and print element in two dimensional array
#include <stdio.h>

int main() {
    // Define the dimensions of the array
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare the 2D array
    int array[rows][cols];

    // Input elements into the array
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }

    // Print elements of the array
    printf("\nElements of the array are:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
