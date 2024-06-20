#include<stdio.h>
int main()
{
 int row,n,i;
 printf("enter a table:");
 scanf("%d",&n);
 printf("enter a row :");
 scanf("%d",&row);
 for(i=1;i<=row;i++)
 printf("%d*%d=%d\n",n,i,n*i);
 return 0;

}
