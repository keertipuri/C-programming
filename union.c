//program to store information of a student using union
#include<stdio.h>
union student
{
    char name[50];
    int roll;
    float per;
};
int main()
{
    union student s;
    printf("enter the details of student\n");
    printf("name:");
    scanf("%s",&s.name);
    printf("roll:");
    scanf("%d",&s.roll);
    printf("percentage of student:");
    scanf("%d",&s.per);

    printf("enter the details of the student\n");
    printf("name: %s\n",s.name);
    printf("roll: %d\n",s.roll);
    printf("percentage of student : %.2f\n",s.per);
    return 0;
}