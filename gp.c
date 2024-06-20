#include<stdio.h>
#include<math.h>
int main()
{
 int i=0,x,n,sum=0;
 printf("enter n and x: ");
 scanf("%d %d",&n,&x);
 for(i;i<=n;i++)
 {
    sum=sum+pow(x,i);

}
 printf("%d",sum);

}
