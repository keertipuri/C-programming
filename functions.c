#include <stdio.h>

// Function to swap two numbers using pass by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two numbers using pass by reference (using pointers)
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);

    // Swap by value (values of num1 and num2 won't change)
    swapByValue(num1, num2);
    printf("After swap by value: num1 = %d, num2 = %d\n", num1, num2);

    // Swap by reference (values of num1 and num2 will change)
    swapByReference(&num1, &num2);
    printf("After swap by reference: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
