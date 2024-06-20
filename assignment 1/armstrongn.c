#include<stdio.h>
#include<math.h>
int main()
{
 int num,n,sum,rem,digit,i;
 printf("enter number 1 to n amrstong numbers: ");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {

    sum=0;
    n=i;
    digit=log10(n)+1;
 
 while(n>0)
 {

    rem=n%10;
    sum=sum+(pow(rem,digit));
    n=n/10;
 }
if(i==sum)
{
printf("%d\n",i);
}
}
}
