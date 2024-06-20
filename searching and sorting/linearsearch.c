//linear search

#include<stdio.h>
int main()
{
    int n,i,k,f=0;
    printf("enter the size: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key: ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("element is found at the location %d ",i);
    }
    else
    {
        printf(" element is not found");
    }
}
