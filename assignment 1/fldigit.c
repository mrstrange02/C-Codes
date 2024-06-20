#include<stdio.h>
int main()
{
    int num,l;
    printf("enter a number: ");
    scanf("%d",&num);
    l=num%10;

    while(num>10)
    {
      num=num/10;

    }
     printf("first digit = %d\n ",num);
     
     printf("last digit  = %d",l);
     
    
}
