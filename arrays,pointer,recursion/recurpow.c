#include<stdio.h>
int p(int,int);
int main()
{
    int x,n;
    printf("ENTER X AND N: ");
    scanf("%d %d",&x,&n);
    int a=p(x,n);
    printf("%d",a);
}
int p(int x,int n)
{
  if(n==0)
  {
    return 1;
  }
  else
  {
   return x*p(x,n-1);
  }
}