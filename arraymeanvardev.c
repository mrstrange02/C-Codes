#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,sum;
  float avg;
  float dev,vari,z;
  printf("enter a array size: ");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements: ");
  sum=0;
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    sum=sum+a[i];
  }
  avg=(float)sum/n;
  for(i=0;i<n;i++)
  { 
    vari+=pow((a[i]-avg),2); 
  }
  z=(float)vari/n;
  dev=sqrt(z); 
  printf("mean %f\n",avg);
  printf("variance %.2f\n",z);
  printf("deviation %.2f",dev);
  
}

