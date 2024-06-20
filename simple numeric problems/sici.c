#include<stdio.h>
#include<math.h>
int main()
{
  float p,r,SI,CI;
   int t;
  printf("Enter the value of Principal p: ");
  scanf("%f",&p);
  printf("Enter the value of Rate r: ");
  scanf("%f",&r);
  printf("Enter the value of Period in year t: ");
  scanf("%d",&t);
  SI = (p*t*r)/100;
  printf("Simple Interest SI=%f \n",SI);
  CI=p*pow((1+(r/100)),t);
  printf("Compound Interest CI=%f \n",CI);
 
 


}
