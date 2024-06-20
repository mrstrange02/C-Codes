#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("enter a row and column size of matrix A:  ");
    scanf("%d %d",&r,&c);
    int a[r][c],t[c][r];
    printf("enter the elements:  ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
    printf("TRANSPOSE OF MATRIX\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[j][i]=a[i][j];
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
          printf("%d ",t[i][j]);
        }
        printf("\n");
    }
}

