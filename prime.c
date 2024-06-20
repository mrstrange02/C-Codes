#include<stdio.h>
int main()
{
  int n,i,a;
  printf("enter a number: ");
  scanf("%d",&n);
  for(i=2;i<n;i++)
{
  if(n%i==0){
   a=0;
   break;  
   
  }

 else
  a=1;
}
if(a==0)
printf("%d not prime ",n);
else
printf("%d prime ",n);
return 0;

}


