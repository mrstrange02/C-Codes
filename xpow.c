#include<stdio.h>
#include<math.h>
int main()
{
  int i,t=-1,s=1,n,x;
  printf("enter a number: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++);
  {
     s=s+t*pow(x,i)/(2*i);
     t=t*(-1);

  }
  printf("%d",s);



}
