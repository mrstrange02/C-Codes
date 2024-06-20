#include<stdio.h>
int main()
{
    int num,fact=2;
    printf("enter any numer: ");
    scanf("%d",&num);
    printf("prime factors are ");
    while(num>1)
    {
      if(num%fact==0)
      {
        
       printf(" %d ",fact) ;
        num=num/fact;
      }
      else{
        fact++;
      }
    }

}
