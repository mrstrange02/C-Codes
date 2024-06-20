#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int len,i,j;
    printf("enter a string: ");
    gets(s);
    len=strlen(s);
    
     for(i=0;i<len;i++)
     {
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
        {

        }
        else
        {
            for(j=i;j<len;j++)
            {
                s[j]=s[j+1];
            }
            len--;
            i--;
        }
     }
     s[j]='\0';
     printf(" after removing characters except alphabets: %s",s);

    
    

}
