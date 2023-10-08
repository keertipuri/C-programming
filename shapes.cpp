//write a program to calculate area and perimeter of circle, square and rectangle
//header file
#include <stdio.h>
int main()
{
    float r;// r= radius of circle
    float s;// s=side of square
    float l,b;//l= length andb=breadth of rectangle
    //circle
    printf("find the area and perimeter of circle, square and rectangle:\n");
    scanf("%f",&r);
    printf("\n area of circle is :%.2f", 3.14*r*r);
    printf("\n perimeter of circle is:%.2f", 2*3.14*r);
    //square
    printf("\n side of square:");
    scanf("%f",&s);
    printf("\n area of square:%f", s*s);
    printf("\n perimeter of square :%f", 4*s);
    // rectangle
    printf("\n enter length and breadth");
    scanf("%f",&l,&b);
    printf("\n area of rectangle %f", l*b);
    printf("\n peerimeter of rectangle is%f", 2*(l+b));
}

