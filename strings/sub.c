#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int l1,l2,i,f=0,pos;
    printf("enter the main string: ");
    gets(s1);
    printf("enter the substring: ");
    gets(s2);
    printf("enter the position to insert: ");
    scanf("%d",&pos);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=l1-1;i>=pos;i--)
    {
        s1[i+l2]=s1[i];
    }
    for(i=pos;i<pos+l2;i++)
    {
        s1[i]=s2[f];
        f++;
    }
    printf("%s",s1);
}
