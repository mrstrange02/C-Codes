#include<stdio.h>
int main()
{
 char ch;
 printf("enter a charcter or digit or special symbols: ");
 scanf("%c",&ch);
 if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
 printf(" %c is a character\n ",ch);
 else if(ch>='0' && ch<='9')
 printf(" %c is a digit",ch);
 else
 printf("%c a special symbols",ch);
 }
 
