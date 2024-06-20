#include<stdio.h>
int main()
{
  int a,b,c,avg; //average of 3 numbers
  printf("enter 3 numbers:\n");
  scanf("%d %d %d",&a,&b,&c);
  avg=(a+b+c)/3;
  printf("%d",avg);
  return 0;

}
