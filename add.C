// write a program using arithmetic operators using addition,subtraction, multiplication, remainder
// header files
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("enter ist number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    // addition
    int sum = num1+num2;
    printf("sum: %d\n", sum);
    // subtraction
    int difference = num1-num2;
    printf("%d\n", difference);
    // multiplicatin
    int multiply = num1*num2;
    printf("%d\n", multiply);
    // remainder
    int remainder = num1%num2;
    printf ("%d\n", remainder);
    return 0; 
}