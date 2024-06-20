#include<stdio.h>
#include<math.h>
int main()
{
  float t;
  int floor=10,s=30;
  while(floor>0)
  {
  t=sqrt(2*s/9.8);
  printf("floor %d and time %.2f\n",floor,t);
  floor--;
  s=s-3;
  }
  }
