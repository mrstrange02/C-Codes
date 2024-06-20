#include<stdio.h>
int main()
{
 int num1,num2,hcf,count=1;
 printf("enter 2 numbers :");
 scanf("%d %d",&num1,&num2);
 while(count<=num1 && count<=num2)
 {
    if(num1%count==0 && num2%count==0)
    {
        hcf=count;
    }
    count++;
 }
 printf("hcf of %d and %d : %d",num1,num2,hcf);
}


