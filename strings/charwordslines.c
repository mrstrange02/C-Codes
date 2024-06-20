#include<stdio.h>
int main()
{
    char s[100];
    int i,words=0,lines=0,character=0;
    printf("enter the string: ");
    scanf("%[^*]",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            words++;
        }
        else if(s[i]=='\n')
        {
            lines++;
            words++;
        }
        else if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
        {
            character++;
        }

    }
    printf("no. of characters is %d\n",character);
    printf("no. of words is %d\n",words);
    printf("no. of lines is %d",lines);
    
}
