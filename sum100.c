#include<stdio.h>
int main()
{
  int i,n,even_sum=0,odd_sum=0;
  printf("enter a number: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
{
    if(i%2==0)
     even_sum=even_sum+i;
    else
     odd_sum=odd_sum+i;
}
  printf("sum of even numbers = %d\n",even_sum);
  printf("sum of odd numbers = %d",odd_sum); 
  
  return 0;
}      
  
  
