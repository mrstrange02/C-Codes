#include<stdio.h>
int main()
{
  int n,i,j,max,t;
  printf("enter the array size: ");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements: ");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
     max=i;
     for(j=i+1;j<n;j++)
     {
     if(a[j]>a[max])
     {
     max=j;
     }
     }
     t=a[i];
     a[i]=a[max];
     a[max]=t;
     }
     printf("AFTER SELECTION SORT IN DESCENDING ORDER: ");
     for(i=0;i<n;i++)
     {
     printf("%d",a[i]);
     }
     }
     
     
   
