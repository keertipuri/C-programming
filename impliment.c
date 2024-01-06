//program to implement the array of structures for student marks for each
//students and pass it to function of various operations.
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
void display(struct student s)
{
    printf("\nenter the details of the student :\n");
    printf("name: ",s.name);
    printf("roll: ",s.roll);
    printf("marks of subject 1:",s.sub1);
    printf("marks of subject 2:",s.sub2);
    printf("marks of subject 3:",s.sub3);
    printf("total marks is:",total_marks(s));
}
int main()
{
    struct student s[3];
    for (int i=0;i<3;i++)
    {
        printf("enter the details of the students :");
        printf("name: ");
        scanf("%d",&s[i].name);
        printf("roll: ");
        scanf("%d",&s[i].roll);
        printf("marks of subject 1: ");
        scanf("%d",&s[i].sub1);
        printf("marks ofsubject 2: ");
        scanf("%d",&s[i].sub2);
        printf("marks of subject 3:");
        scanf("%d",&s[i].sub3);
    }
    for(int i=0;i<3;i++)
    {
        display(s[i]);
    }
}
