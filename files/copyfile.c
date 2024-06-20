#include<stdio.h>
int main()
{
    FILE *p,*ptr;
    char a[200];
    int i;
    p=fopen("original.txt","r");
    ptr=fopen("copyfile.txt","w");
    while(fscanf(p,"%s",a)!=EOF)
    {
    for(i=0;a[i]!=EOF;i++)
    {
    if(a[i]>='a' && a[i]<='z')
    {
      a[i]=a[i]-32;
    }
    
      }
    fprintf(ptr,"%s ",a);
    }
}
