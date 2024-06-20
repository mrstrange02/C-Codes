#include<stdio.h>
int main()
{
    int i,j,n,count=0;
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
        for(j=i+i;j<n;j++)
        { 
            if(a[i]==a[j])
            {
                count++;
                break;
         
            }
      
            
        }
    }
    printf("total no of dublicate element %d",count);
}
