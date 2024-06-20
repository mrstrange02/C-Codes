
#include<stdio.h>
int main()
{
  int n,i;
  printf("enter a array size: ");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",a[i]);
  }
  
  for(i=0;i<n;i++)
{
  printf("a[%d]:%d\n",i,a[i]);
}
}