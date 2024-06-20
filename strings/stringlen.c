#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char s[100];
    printf("enter the string ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        c++;
    }
    printf("lenth of string is %d ",c);

}
