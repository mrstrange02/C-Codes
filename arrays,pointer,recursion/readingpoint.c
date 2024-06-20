#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the size: ");
    scanf("%d",&n);
    int a[n];
    int *p;
    p=&a[0];
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
{
    printf("%d ",*(p+i));
}
}
