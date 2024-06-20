#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,l,k;
    printf("enter the roman number: ");
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        switch(s[i])
        {
            case 'I':s[i]=1;
            break;
            case 'V':s[i]=5;
            break;
            case 'X':s[i]=10;
            break;
            case 'L':s[i]=50;
            break;
            default:printf("invalid choice");
            break;
        }

    }
k = s[l-1];
for(i=l-1;i>0; i--)
{
if(s[i]>s[i-1])
{
k=k-s[i-1];
}
if(s[i]<=s[i-1])
{
k=k+s[i-1];
}
}
printf("decimal equivalent is %d", k);
}
