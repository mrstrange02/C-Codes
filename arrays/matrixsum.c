#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j;
    printf("enter the row & colomn size of first matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("enter the row & column for second matrix: ");
    scanf("%d %d",&r2,&c2);
    int a[r1][c1],b[r2][c2],c[r1][c1];
    if(r1==r2 && c1==c2)
    {
        printf("enter the elements of A\n ");
        
        for(i=0;i<r1;i++)
        {
           for(j=0;j<c1;j++)
            {  
            scanf("%d",&a[i][j]);
            }
        }
        printf("enter the elements of B\n ");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
              c[i][j]=a[i][j]+b[i][j];
              printf("%d ",c[i][j]);  
            }
            printf("\n");
        }
    
}
else{
    printf("addition is not possible");
}


}
