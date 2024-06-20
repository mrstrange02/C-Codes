#include<stdio.h>
int main()
{
    int r=0,bin=0,p=1,n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=225;i++)
    {

    
    while (n>0)
    {
      r=n%2;
      n=n/2;
      bin=bin+(r*p);
      p=p*10;
    }
    }

      printf("binary of given Number %d",bin);  
    


}