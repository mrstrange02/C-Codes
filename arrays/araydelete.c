#include<stdio.h>
int main()
{
    int i,n,pos;
    printf("enter the size: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter the position: ");
    scanf("%d",&pos);
    if(pos>=n)
    printf("deletion not possible");
    else
    {
        for(i=pos;i<n;i++)
        {
            a[i]=a[i+1];
        }
        for(i=0;i<n-1;i++)
        {
            printf("%d\n",a[i]);
        }
    }
}
