#include<stdio.h>
int main()
{
  int n,i,sum;
  printf("enter a array size: ");
  scanf("%d",&n);     
  int a[n];
  printf("enter the elements: ");
  sum=0;
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    sum=sum+a[i];
  
  }
  printf("sum = %d\n",sum);
}
