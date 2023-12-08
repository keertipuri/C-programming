//program to perform matrix multiplication
#include <stdio.h>

#define MAX 10

void multiplyMatrices(int firstMatrix[MAX][MAX], int secondMatrix[MAX][MAX], int result[MAX][MAX], int rowsFirst, int colsFirst, int rowsSecond, int colsSecond);

int main() {
    int firstMatrix[MAX][MAX], secondMatrix[MAX][MAX], result[MAX][MAX];
    int rowsFirst, colsFirst, rowsSecond, colsSecond;

    // Input dimensions of the first matrix
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rowsFirst, &colsFirst);

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rowsFirst; ++i) {
        for (int j = 0; j < colsFirst; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Input dimensions of the second matrix
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rowsSecond, &colsSecond);

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rowsSecond; ++i) {
        for (int j = 0; j < colsSecond; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Check if multiplication is possible
    if (colsFirst != rowsSecond) {
        printf("Matrix multiplication is not possible.\n");
    } else {
        multiplyMatrices(firstMatrix, secondMatrix, result, rowsFirst, colsFirst, rowsSecond, colsSecond);

        // Displaying the multiplication result
        printf("Product of the matrices:\n");
        for (int i = 0; i < rowsFirst; ++i) {
            for (int j = 0; j < colsSecond; ++j) {
                printf("%d\t", result[i][j]);
                if (j == colsSecond - 1)
                    printf("\n");
            }
        }
    }

    return 0;
}

void multiplyMatrices(int firstMatrix[MAX][MAX], int secondMatrix[MAX][MAX], int result[MAX][MAX], int rowsFirst, int colsFirst, int rowsSecond, int colsSecond) {
    // Initializing elements of the result matrix to 0
    for (int i = 0; i < rowsFirst; ++i) {
        for (int j = 0; j < colsSecond; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiplying firstMatrix and secondMatrix and storing in result
    for (int i = 0; i < rowsFirst; ++i) {
        for (int j = 0; j < colsSecond; ++j) {
            for (int k = 0; k < colsFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}
