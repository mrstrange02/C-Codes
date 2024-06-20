#include<stdio.h>
int factorial(int num);
int main()
{
 int a;
 printf("enter a no: ");
 scanf("%d",&a);

 printf("the factorial of %d is %d\n",a,factorial(a));
   return 0;
}  
int factorial(int num){
    if(num==1)
    return(1);
    else
    return(num*factorial(num-1));
}
   


