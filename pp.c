#include<stdio.h>
int main(){
 int a,b;
 float c;
  printf("enter a no1: ");
  scanf("%d",&a);
  printf("enter a no2: ");
  scanf("%d",&b);
  c=((float)a/b)*100;
  printf("%d is %.2f %% of %d",a,c,b);
  return 0;
}  
