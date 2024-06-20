#include<stdio.h>
int main()
{
    char s[100],cs[100];
    int i;
    printf("enter the string: ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        cs[i]=s[i];
    }
    cs[i]='\0';
    printf("copied string is : %s",cs);


}
