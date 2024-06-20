#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i;
    printf("enter the string: ");
    scanf("%s",s);
    int l=strlen(s);
    for(i=l-1;i>=0;i--)
    
        printf("%c",s[i]);
    
}
