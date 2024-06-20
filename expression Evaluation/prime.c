#include<stdio.h>
int main()
{
  int num,i,a;
  printf("enter a number: ");
  scanf("%d",&num);
  for(i=2;i<num;i++)
{
  if(num%i==0){
   a=0;
   break;  
   
  }

 else
  a=1;
}
if(a==0)
printf("%d not prime ",num);
else
printf("%d prime ",num);
return 0;

}


