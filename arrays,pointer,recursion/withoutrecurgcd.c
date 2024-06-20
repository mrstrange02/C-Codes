#include<stdio.h>
void gcd(int,int);
int main()
{
 int num1,num2;
 printf("enter 2 numbers :");
 scanf("%d %d",&num1,&num2);
 gcd(num1,num2);
}

void gcd(int num1,int num2)
{
 int count=1,hcf;
 while(count<=num1 && count<=num2)
 {
    if(num1%count==0 && num2%count==0)
    {
        hcf=count;
    }
    count++;
 }

 printf("hcf of %d and %d is %d",num1,num2,hcf);
}
