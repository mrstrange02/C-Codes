#include<stdio.h>
#include<math.h>
int power(int,int);
int main()
{
 int x,n;
 printf("enter the x and n value: ");
 scanf("%d %d",&x,&n);
 power(x,n);
 }
 int power(int x,int n)
 {
  int t;
  t=pow(x,n);
  printf("x to the power n is %d",t);
 }
