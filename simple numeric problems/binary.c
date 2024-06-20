#include<stdio.h>
int main()
{
    int rem=0,bin=0,p=1,n;
    printf("enter a  decimal number: ");
    scanf("%d",&n);
   
    while (n>0)
    {
      rem=n%2;
      n=n/2;
      bin=bin+(rem*p);
      p=p*10;
    }
      printf("binary of given Number %d",bin);  
    


}
