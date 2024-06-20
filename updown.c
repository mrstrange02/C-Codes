#include<stdio.h>
int main()
{
  
  int a,b;
  printf("enter a 1st no: ");
  scanf("%d",&a);
  printf("enter a 2nd no: ");
  scanf("%d",&b);
  if(a==b){
    printf("%d and %d is Equal ",a,b);
  } 
   else{
    if(a<b)
    printf("%d is UP ",a);
    else
    printf("%d is DOWN ",b);
   }
  
  

  
   
}

  
