//program to check if a number is armstrong or not using while loop.
#include<stdio.h>

int main()
{
    int num, originalnum, remainder, result=0;

    printf("enter any integer:");
    scanf("%d",&num);

    originalnum = num;

    while(originalnum != 0)
    {
       remainder = originalnum % 10;
       result += remainder*remainder*remainder;
       originalnum /= 10;
    }
    
    if(result == num){
    printf("%d is an armstrong number.\n",num);
}
else
{
    printf("%d is not an armstrong number.\n",num);
}
return 0;
}