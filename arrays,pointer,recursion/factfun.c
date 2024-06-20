#include<stdio.h>
int fact(int);
int main()
{
 int n;
 printf("enter the number: ");
 scanf("%d",&n);
 fact(n);
 }
 int fact(int n)
 {
  int f=1,i;
  for(i=1;i<=n;i++)
  {
   f=f*i;
  }
  printf("factorial of %d is %d",n,f);
  }
