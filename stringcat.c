#include<stdio.h>
int main()
{
    int i,j,c=0;
    char s1[50];
    char s2[50];
    printf("enter the string 1: ");
    gets(s1);
    printf("enter the string 2: ");
    gets(s2);
    for(i=0;s1[i]!='\0';i++)
    {
        c++;
    }
    for(j=0;s2[j]!='\0';j++)
    {
        s1[c+j]=s2[j];
    }
    printf("after contination: %s",s1);

}