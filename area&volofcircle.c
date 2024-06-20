#include<stdio.h>
int main(){
  float rad,area,vol;
  printf("enter rad: ");
  scanf("%f",&rad);
  area=4*3.14*rad*rad;
  vol=(4/3)*3.14*rad*rad*rad;
  printf("area:%.2f\n",area);
  printf("vol:%.2f",vol);

}  
