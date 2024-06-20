#include<stdio.h>
int main()
{
 int r,n,i;
 printf("enter a table:");
 scanf("%d",&n);
 printf("enter a row :");
 scanf("%d",&r);
 for(i=1;i<=r;i++)
 printf("%d*%d=%d\n",n,i,n*i);
 return 0;

}