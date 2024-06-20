#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,sum,t,j;
  float avg;
  float dev,vari=0,z;
  printf("enter a array size: ");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements: ");
  sum=0;
  
  
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    sum=sum+a[i];
    vari=vari+pow((a[i]-avg),2); 
  }
  avg=(float)sum/n;
  z=(float)vari/n;
  dev=sqrt(z); 
  for(i=0;i<n;i++)
  {
  for(j=i+1;j<n;j++)
  {
  if(a[i]>a[j])
  {
  t=a[i];
  a[i]=a[j];
  a[j]=t;
  }
  }
  }
  printf("after sorting is ");
  for(i=0;i<n;i++)
  {
  printf("%d ",a[i]);
  }
  printf("\n");
  printf("mean is %.2f\n",avg);
  printf("variance is %.2f\n",z);
  printf("deviation is %.2f",dev);
  
}

