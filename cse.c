#include<stdio.h>
int main()
{
int x,y;
float a;
double b;
printf("enter a float:");
scanf("%f",&a);
printf("enter a number: ");
scanf("%d",&x);
y=(int)a;
b=x;
if(y>x)
{
    printf("CSE\n");
}
else if(y==x) 
{
    printf("EEE\n");

} 
else{
    printf("ECE\n");
}  

printf("float to int %d\n",y);
printf("int to float %lf",b);
}
