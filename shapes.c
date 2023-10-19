//program to calculate area and perimeter of circle,square and rectangle based on the choice of user
#include<stdio.h>
int main()
{
    int choice;
    float radius, side, length, breadth, area, perimeter;
    printf("select any one choice from the following");
    printf("\n 1. circle");
    printf("\n 2. square");
    printf("\n 3. rectangle");
    printf("\n enter your choice");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("enter the radius of circle:");
        scanf("%f", &radius);
        area = 3.14*radius*radius;
        perimeter = 2*3.14*radius;
        printf("area is:%.2f\n", area);
        printf("perimeter is:%.2f\n", perimeter);
    }
    else if (choice==2)
    {
        printf("enter the side of square");
        scanf("%f", &side);
        area = side*side;
        perimeter = 4*side;
        printf("area is:%.2f\n",area);
        printf("perimeter is:%.2f\n",perimeter);
    }
    else if (choice==3)
    {
        printf("enter the length and breadth of rectangle");
        scanf("%f%f",&length,&breadth);
        area= length*breadth;
        perimeter = 2*(length+breadth);
        printf("area is:%.2f\n",area);
        printf("perimeter is:%.2f\n",perimeter);
    }
    else
    {
        printf("invalid number");
    }
    return 0;
}