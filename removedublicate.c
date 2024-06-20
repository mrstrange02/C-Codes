#include<stdio.h>
int main()
{
    int i,j,k,n,count=0;
    printf("enter the size of an array: ");
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
            if(a[i]==a[j])
            {
             for(k=j;k<n;k++)
             {
                a[k]=a[k+1];
             }
             n--;
             j--;
            

            }
        }
    }
    printf("After removing dublicate elements\n");
    for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
   }
}