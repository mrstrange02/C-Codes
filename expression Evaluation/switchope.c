#include<stdio.h>
int main()
{
  int a,b;
  char ch;
  printf("enter a operator: ");
  scanf("%c",&ch);
  printf("enter a and b: ");
  scanf("%d%d",&a,&b);
  
  switch(ch)
  {
  case '+':
    printf("addion=%d",a+b);
    break;
  case '-':
    printf("sub=%d",a-b);
    break;
  case '*':
    printf("mul=%d",a*b);
    break;
  case '/':
    printf("div=%d",a/b);
    break;
  case '%':
    printf("rem=%d",a%b);
    break;
  default:
    printf("invalid");
  }
}
