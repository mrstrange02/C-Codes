#include<stdio.h>
int main()
{
    int i,j,n,t;
    printf("enter the array size: ");
    scanf("%d",&n);
    int a[n];
    int *p;
    p=&a[0];
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    int *max=a;
    for(i=0;i<n;i++)
    {
        if(*max<*(p+i))
        {
            *max=*(p+i);
        }
    }
    printf("largest element is: %d",*max);
}
