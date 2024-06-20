 #include<stdio.h>
 int main()
 {
 
 int sum=0,n,rem;
  printf("enter a no: ");
  scanf("%d",&n);
  while(n>0)
  {
    rem=n%10;
    sum=sum+rem;
    n=n/10;
  }
  printf("sum of number:%d ",sum);
   



  }




