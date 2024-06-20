#include<stdio.h>
int main()
{
    char s[100];
    int len,i,j;
    printf("enter a string: ");
    gets(s);
    len=strlen(s);
    {
     for(i=0;i<len;i++)
     {
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
        {

        }
        else
        {
            for(j=i;j<len;k++)
            {
                s[k]=k[i+1];
            }
            len--;
            i--;
        }
     }
     s[len]='\0';
     printf(" after removing characters except alphabets %s",s);

    
    

}