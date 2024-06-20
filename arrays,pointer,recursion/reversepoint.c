#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the size: ");
    scanf("%d",&n);
    int a[n];
    int *p;
    p=&a[0];
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=n-1;i>=0;i--)
{
    printf("%d ",*(p+i));
}
}