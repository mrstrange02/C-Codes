#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the size");
    scanf("%d",&n);
    int a[n];
    int *p;
    p=&a[n];
    printf("enter the elements: ");
    for(i=0;i<n;i++)
{
    scanf("%d",p+i);
}

for(i=n-1;i>=0;i--)
{
printf(" %d ",*(p+i));

}
}

