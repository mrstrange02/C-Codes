#include<stdio.h>
#include<math.h>
int main()
{
 int i,x,n,sum=0;
 printf("enter x and n: ");
 scanf("%d %d",&x,&n);
 for(i=0;i<=n;i++)
 {
    sum=sum+pow(x,i);

}
 printf("%d",sum);

}
