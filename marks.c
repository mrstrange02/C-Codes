#include<stdio.h>
int main()
{
   int n;
   printf("enter a marks: ");
   scanf("%d",&n);
   if(n<40)
   printf("Failed");
   else if(n>=40 && n<60)
   printf("Second class");
   
   else if(n>=60 && n<70)
   printf("First class"); 
   
   else
   printf("Distinction");
   





}
