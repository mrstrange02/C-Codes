#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    int l1,l2,i,pos;
    printf("enter the string 1: ");
    scanf("%s",str1);
    printf("enter the string 2: ");
    scanf("%s",str2);
    printf("enter the index position: ");
    scanf("%d",&pos);
    l1=strlen(str1);
    l2=strlen(str2);
    for(i=pos;i<l1;i++)
    {
        str1[l2+i]=str1[i];
    }
    for(i=0;i<l2;i++)
    {
        str1[pos+i]=str2[i];
    }
   
    //str2[l2+1]='\0';
    printf("after inserting str2 to str1 %s ",str1);
}
