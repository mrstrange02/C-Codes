#include<stdio.h>
int main()
{
 int i,a=0,b=1,c,n;
 printf("enter a number: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   if(i<=1)
   {
    c=i;
   }
   else
   {
    c=a+b;
    a=b;
    b=c;
   }
   printf("%d\t",c);

 }


}