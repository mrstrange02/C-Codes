#include<stdio.h>
int main()
{
    char s[100];
    char ch;
    int i,val=0;
    printf("enter the string: ");
    gets(s);
    printf("enter the search element: ");
    scanf("%c",&ch);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==ch)
        {
            printf("%d",i);
            val=1;
            break;
        }
    }
    if(val==0)
    {
        printf("-1  not found\n");
    }

}
