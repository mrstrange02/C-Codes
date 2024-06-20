#include<stdio.h>
struct student
{
    char name[20];
    int id;
    int marks;

};
int main()
{
    int i;
    struct student s[2];
    for(i=0;i<2;i++)
    {
        printf("enter the details of student: %d\n",i+1);
        printf("enter the name and id and marks: ");
        scanf("%s %d %d",s[i].name,&s[i].id,&s[i].marks);
    }
    for(i=0;i<2;i++)
    {
        printf("details of stduent: %d\n",i+1);
        printf(" name:%s\n id:%d\n marks:%d\n ",s[i].name,s[i].id,s[i].marks);
    }
    printf("\n");
}
