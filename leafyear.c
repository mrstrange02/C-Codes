#include<stdio.h>
int main()
{
   int year;
   printf("enter a year: ");
   scanf("%d",&year);
   if(year%400==0 || year%4==0 && year%100!=0)
   printf("%d is leaf year",year);
   else
   printf("%d is not leaf year",year);

}
