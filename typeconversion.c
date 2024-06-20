#include<stdio.h>
int main()
{
int i,x; 
float f,y;
printf("enter integer value\n");
scanf("%d",&i);
printf("enter float value\n");
scanf("%f",&f);
y=i; // implicit conversion 
printf("implicit value is %f\n",y);
x= (int) f; // Explicit conversion 
printf("Explicit value is %d\n",x);
}      