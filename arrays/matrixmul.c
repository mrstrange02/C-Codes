#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k;
    printf("enter a row and column size of matrix A:  ");
    scanf("%d %d",&r1,&c1);
    printf("enter a row and column size of matrix B:  ");
    scanf("%d %d",&r2,&c2);
 int a[r1][c1],b[r2][c2],c[r1][c2];
 if(c1==r2)
 {
   printf("enter the elements of A:  ");
   for(i=0;i<r1;i++)
   {
    for(j=0;j<c1;j++)
    {
        scanf("%d",&a[i][j]);
    }
   } 
   printf("enter the elements of B:  ");
   for(i=0;i<r2;i++)
 {
    for(j=0;j<c2;j++)
    {
        scanf("%d",&b[i][j]);
    }
 }
 for(i=0;i<r1;i++)
 {
    for(j=0;j<c2;j++)
    {
      c[i][j]=0;
      for(k=0;k<c1;k++)
      {
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
      }

    }
 }
 printf("multiplication of matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    


 }
 
 }
 
 
