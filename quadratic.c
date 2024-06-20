#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c,root1,root2;
 printf("enter a,b,c: ");
 scanf("%d %d %d",&a,&b,&c);
 root1=-b-pow(b*b-4*a*c,1/2)/2*a;
 root2=-b+pow(b*b-4*a*c,1/2)/2*a;
 printf("%d\n",root1);
 printf("%d",root2);
 
 



}
