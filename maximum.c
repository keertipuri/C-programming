#include<stdio.h>
int main()
{
    int n, num, max;

    printf("enter the value of n:");
    scanf("%d",&n);

    printf("enter the number 1:");
    scanf("%d",&max);

    for(int i=2; i<=n; i++)
    {
        printf("enter number %d :",i);
        scanf("%d",&num);

        if(num>max)
        {
            max = num;
        }
    }
    printf("the maximum number is: %d\n",max);
    return 0;

}
