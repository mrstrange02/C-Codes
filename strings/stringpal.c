#include<stdio.h>
#include<string.h>
int main()
{
    int l,i;
    char s[100];
    printf("enter the string: ");
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            printf("not a palindrome");
            break;
        }
        else
        {
            printf("palindrome");
            break;
        }
    }


    
}