#include<stdio.h>
int main()
{
  int num,i,j,sum;
  printf("enter a number to print perfect numbers: ");
  scanf("%d",&num);
  for(i=1;i<num;i++)
  {
    sum=0;
    for(j=1;j<i;j++)
    {
      if(i%j==0)
      {
        sum=sum+j;
       
      }
    }
   if(sum==i)
   {
    printf("%d\n",i);
   }



  }



}
