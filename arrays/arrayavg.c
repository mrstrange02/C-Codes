#include<stdio.h>
int main()
{
  int n,i,sum;
  float avg;
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
    avg=(float)sum/n;
  printf("sum = %d\n",sum);
  printf("%f",avg);


}
