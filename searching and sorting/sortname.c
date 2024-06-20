#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    printf("enter the no of names size: ");
    scanf("%d",&n);
    char a[n][50],t[n];
    printf("ENTER THE NAMES: ");
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(t,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],t);
            }
        }
        
    }
    printf("after sorting names\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",a[i]);
    }
}
