#include<stdio.h>
#include<math.h>
int main()
{
  int p,r,n;
  printf("enter  p amd r and n: ");
  scanf("%d %d %d",&p,&r,&n);
  float c=p*(float)r/100;
  float d=pow(c,n);
  printf("%f is compound Intrest",d);



}