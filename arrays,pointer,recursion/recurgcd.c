#include<stdio.h>
int gcd(int,int);
int main()
{
    int n1,n2;
    printf("enter n1 and n2: ");
    scanf("%d %d",&n1,&n2);
    int h=gcd(n1,n2);
    printf(" HCF is %d",h);
} 

int gcd(int n1,int n2)
{
    if(n2!=0)
    {
     return gcd(n2,n1%n2);
    }
    else
    {
     return n1;
    }
}
