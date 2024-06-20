#include<stdio.h>
int main()
{
float b,c;
printf("enter a fahrenheit: ");
scanf("%f",&b);    //finding the centigrade
c=(b-32)*5/9;
printf(" centigrade :%.2f",c);
}