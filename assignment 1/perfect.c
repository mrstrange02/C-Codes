#include<stdio.h>
int main()
{
  int i,n,sum=0;
  printf("enter a number: ");
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
    
    if(n%i==0){
        sum=sum+i;
    }
  }
  if(n==sum)
  printf("%d is perfect",n);
  else
  printf("%d is not perfect",n);



}
