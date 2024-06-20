#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the size: ");
    scanf("%d",&n);
    int a[n];
    int *p;
    p=&a[0];
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        sum=sum+*(p+i);
    }
    printf("%d",sum);
}