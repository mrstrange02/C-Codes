#include<stdio.h>
int main()
{
  int i,j,k,n;
  printf("enter the araray size:");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements: ");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
  k=a[i];
  j=i-1;
  while(j>=0 && a[j]>k)
  {
  a[j+1]=a[j];
  j--;
  }
  a[j+1]=k;
  }
  printf("after insertionsort:");
  for(i=0;i<n;i++)
  {
   printf("%d ",a[i]);
   }
   }
  
