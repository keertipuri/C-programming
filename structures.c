// program to store the information of student marks using structures
// and find the total marks of individual student
#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    int sub1;
    int sub2;
    int sub3;
};
int total_marks(struct student s)
{
    return s.sub1+s.sub2+s.sub3;
}
int main()
{
    struct student s[3];
    for(int i=0;i<3;i++)
    {
        printf("enter the details of student %d\n",i+1);
        printf("name:");
        scanf("%s",&s[i].name);
        printf("roll:");
        scanf("%d",&s[i].roll);
        printf("marks of subject 1:");
        scanf("%d",&s[i].sub1);
        printf("marks of subject 2:");
        scanf("%d",&s[i].sub2);
        printf("marks of subject 3:");
        scanf("%d",&s[i].sub3);
    }
        for(int i=0;i<3;i++)
        {
            printf("total marks of %s (roll: %d) is %d ",s[i].name,s[i].roll,total_marks(s[i]));
        }
    }

