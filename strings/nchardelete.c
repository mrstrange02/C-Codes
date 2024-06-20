#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int pos,n,i,l;
    printf("enter the string: ");
    gets(s);
    printf("enter the position to delete: ");
    scanf("%d",&pos);
    printf("enter the no. of elements to delete: ");
    scanf("%d",&n);
    l=strlen(s);
    if((pos+n)<l)
    {
        for(i=pos;i<l;i++)
        {
            s[i]=s[i+n];
            s[l-n]='\0';
        }
            printf(" %s",s);
    }
    else
    {
        printf("invalid");
    }


}