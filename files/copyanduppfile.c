#include<stdio.h>
int main()
{
    FILE *f1,*f2;
    char a[200];
    int i;
    f1=fopen("original.txt","r");
    f2=fopen("copyfile.txt","w");
    while(fscanf(f1,"%s",a)!=EOF)
    {
    for(i=0;a[i]!=EOF;i++)
    {
    if(a[i]>='a' && a[i]<='z')
    {
      a[i]=a[i]-32;
      }
      }
    fprintf(f2,"%s ",a);
    }

}
