#include<stdio.h>
int main()
{
  int i,j,n;
  printf("enter a number to print upto number prime numbers: ");
  scanf("%d",&n);
  printf("prime numbers 1 to n\n");
  for(i=1;i<=n;i++)
  {
    int count=0;
    for(j=1;j<=i;j++)
    {
    if(i%j==0)
    {
        count++;
    }
  }
if(count==2){

printf("%d\n",i);
  }
  }

}
