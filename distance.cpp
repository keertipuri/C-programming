// write a program tofind the euclidean distance between two points in a plane
//header files
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2;
    printf("enter the coordinates of ist point:\n");
    scanf("%d%d",&x1,&y1);
    printf("enter the coordinates of second point:\n");
    scanf("%d%d",&x2,&y2);
    float distance =(sqrt(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)*(y2-y1));
    printf("the distance is:%f",distance);
    return 0;
}