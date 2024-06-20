#include<stdio.h>
int main()
{
    int a,b,result,result2;
printf("enter a and b values\n");
scanf("%d%d",&a,&b);
printf("addition of a and b is %d\n",a+b); 
printf("substraction of a and b is %d\n",a-b); 
printf("multiplication of a and b is %d\n",a*b);
printf("remainder of a and b is %d\n",a%b); 
printf("division of a and b is %d\n",a/b); 
result=(a>0)&&(b<=10);
printf("Logical And=%d\n",result);
result2=(a==b)||(b!=0);
printf("Logical OR NOT=%d\n",result2);
printf("Bitwise And %d\n",a&b); 
printf("Bitwise Or %d\n",a|b); 
printf("Bitwise NOT %d\n",!a); 
printf("Bitwise complement %d\n",~a); 
printf("Bitwise XOR %d\n",a^b); 
printf("Bitwise Shift right %d\n",a>>2); 
printf("Bitwise Shift left %d\n",b<<3);
printf("conditional expression=%d\n",(a-b>50)?100:200); 
printf("preincrement %d\n",++a);
printf("postincrement %d\n",b++); 
printf("predecrement %d\n",--a); 
printf("postdecrement %d\n",b--);



}