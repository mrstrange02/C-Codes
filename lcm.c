#include<stdio.h>
int main()
{
 int num1,num2,lcm,fact=1,count=0;
 printf("enter 2 no : ");
 scanf("%d %d",&num1,&num2);
 count=(num1>num2)?num1:num2;
 while(fact)
{
    if(count%num1==0 && count%num2==0)
    {   lcm=count;
        printf("lcm of %d and %d is %d\n",num1,num2,lcm);
        fact=0;
    }
    count++;
}


}