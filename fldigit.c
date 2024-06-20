#include<stdio.h>
int main()
{
    int num,z;
    printf("enter a number: ");
    scanf("%d",&num);
    z=num%10;
    

    while(num>10)
    {
      num=num/10;

    }
     printf("first digit of number = %d\n ",num);
     printf("last digit of number = %d",z);
     
    
}
