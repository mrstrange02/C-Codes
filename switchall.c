#include<stdio.h>
int max(int [],int );
int min(int [],int);
int sum(int [],int);
float avg(int [],int);
int main()
{
    int n,i,choice;

    printf("enter the size: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nMenu:\n");

    printf("1. Find the largest number\n");
    printf("2. Find the smallest number\n");
    printf("3. Find the sum of all numbers\n");
    printf("4. Find the average of all numbers\n");
    printf("enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf(" lagest number is %d",max(a,n));
        break;
        case 2:
        printf(" smallest number is %d",min(a,n));
        break;
        case 3:
        printf(" sum is %d",sum(a,n));
        break;
        case 4:
        printf(" avarage is %f",avg(a,n));
        break;
        default:
        printf("invalid choice");
        break;

    }
    
}


int max(int a[],int n)
{
       int max=a[0],i;
       for(i=0;i<n;i++) 
    {
    if(a[i]>max) 
    {
      max=a[i];
    }
    }
    return max;
}
    
 int min(int a[],int n)
{
     int min=a[0],i;
     for(i=0;i<n;i++) 
   {
    if(a[i]<min) 
   {
    min=a[i];
    }
   }
   return min;
}

int sum(int a[], int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}

float avg(int a[],int n)
{
        int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
     float avg=(float)sum/n;
     return avg;
}


   
