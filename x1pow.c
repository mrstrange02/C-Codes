#include<stdio.h>
#include<math.h>
int main()
{
  float x,sol;
  printf("enter a number: ");
  scanf("%f",&x);
  sol=1-(x/2)+pow(x,2/4)-pow(x,3/6);
  printf("%f",sol);
}
