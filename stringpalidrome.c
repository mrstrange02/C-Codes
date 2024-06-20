
#include<stdio.h>
#include<string.h>
int main()
{
 char str[50];
 int i,flag=0,len;
 printf("enter the string: ");
 scanf("%s",str);
 len=strlen(str);
 for(i=0;str[i]!='\0';i++)
 {
    if(str[i]!=str[len-i-1]);
    {
  flag=1;
  break;
}
}
 if(flag==1){
  printf("not a palindrome");
 }
  else
  {
   printf("palindrome");
  }

    }
 