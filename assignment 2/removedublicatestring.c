#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,j,k,l;
    printf("enter the string:");
    gets(s);
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(s[i]==s[j])
            {
            for(k=j;k<l;k++)
            {
                s[k]=s[k+i];
            }
            
}
        }
    }
    printf("%s",s);
}