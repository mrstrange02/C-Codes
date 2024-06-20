#include<stdio.h>
int main()
{
  int s=0,rem,n;
  printf("enter a number: ");
  scanf("%d",&n);
  int z=n;
  while(n>0)
  {
     rem=n%10;
     s=s*10+rem;
     n=n/10;
  }
  if(s==z)
  {
    printf("palindrome");
  }
 else
 {
  printf("not palindrome");
 }
}
