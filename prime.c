// program to check if a number is prime or not.
#include<stdio.h>
int main()
{
    int num, i, prime=0;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0){
            prime=1;
            break;
        }
    }
    if(prime==0)
    {
        printf("%d is a prime",num);
    
    }
    else{
        printf("%d is not prime",num);
    }
    return 0;
}