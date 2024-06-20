#include<stdio.h>
int main()
{
    int i,n,val,pos;
    printf("enter the size: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER THE POSITION: ");
    scanf("%d",&pos);
    if(n<pos)
    {
        printf("invalid position: ");
    }
    else
    {
        printf("ENTER THE VALUE INTO THAT POSITION: ");
        scanf("%d",&val);
        for(i=n-1;i>=pos;i--)
        {
            a[i+1]=a[i];
        }
        a[pos]=val;
        for(i=0;i<=n;i++)
        {
            printf("%d\n",a[i]);
        }
    }
}
