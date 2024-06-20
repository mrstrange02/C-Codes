#include<stdio.h>
int main()
{
    int i,j,n,t;
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
     for(j=i+1;j<n;j++)
     {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t; 
        }
     }
    }
  printf("maximum number: %d\n",a[n-1]);
  printf("minimum number: %d\n",a[0]);
}
