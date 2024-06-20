#include<stdio.h>
int main()
{
    int i,n,sum;
    float avg;
    printf("enter a array size ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements ");
    sum=0;
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    sum=sum+a[i];
    avg=(float)sum/n;
}
int min=a[0],max=a[0];
for(i=1;i<n;i++)
{
    if(min>a[i])
    {
        min=a[i];
    }
    if(max<a[i])
    {
       max=a[i];
    }
}
    printf("minimum is %d\n",min);    
    printf("maximum is %d\n",max);
    printf("average is %f",avg);
    

    
       
}

    