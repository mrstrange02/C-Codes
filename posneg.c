#include<stdio.h>
int main()
{
 int a;
 printf("enter a number: ");
 scanf("%d",&a);
 if(a==0){
 printf("%d is Zero",a);
 }
 else{
    if(a>0)
    printf("%d Positive",a);
    else
    printf("%d is Negative",a);
 
}
} 
