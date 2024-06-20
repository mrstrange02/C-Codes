// removing element 
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],ch;
    int i,j,len;
    printf("enter the string: ");
    gets(s);
    printf("enter the element to remove: ");
    scanf("%c",&ch);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]==ch)
        {
            for(j=i;j<len;j++)
            {
                s[j]=s[j+1];
            }
            i--;
        }
    }
    printf("removing of all occurances of element %c: %s",ch,s);

}
