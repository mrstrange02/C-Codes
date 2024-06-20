#include<stdio.h>
void main()
{
  int a,b,c;
  printf("enter a 1st no: ");
  scanf("%d",&a);
  printf("enter a 2nd no: ");
  scanf("%d",&b);
  printf("enter a 3rd no: ");
  scanf("%d",&c);
  //greater

  if(a>b && a>c)
  printf("%d is greater",a); 
  else if(b>c)
  printf("%d is greater",b);
  else
  printf("%d is greater",c);
  printf("\n");
  // lesser
 
  if(a<b && a<c)
  printf("%d is lesser",a);
  else if(b<c)
  printf("%d is lesser",b);
  else
  printf("%d is lesser",c);
} 
   
