#include<stdio.h>
int main()
{
    int n,i,j,count;
    printf("enter the size: ");
    scanf("%d",&n);
    int a[n],f[n];
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        f[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                f[j]=0;
            }
        }
    
    if(f[i]!=0)
    {
        f[i]=count;
    }
    }
    for(i=0;i<n;i++)
    {
        if(f[i]!=0)
        {
        printf("%d is repeted %d times\n",a[i],f[i]);
}
    }
}