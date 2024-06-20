#include<stdio.h>
int main()
{
    int i;
    char s1[50],s2[50];
    printf("enter the string1: ");
    gets(s1);
    printf("enter the string2: ");
    gets(s2);
    i=0;
    while(s1[i]==s2[i] && s1[i]!='\0')
    
        i++;
    
    if(s1[i]>s2[i])
        printf("positive + ");
    
    else if(s1[i]<s2[i])
        printf("negative - ");
    else
        printf("s1 equal to s2 ");
    
    
}
