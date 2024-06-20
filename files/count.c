#include<stdio.h>
int main()
{
    int count=0;
    char file[100],c;
    printf("enter file name: ");
    scanf("%s",file);
    FILE *fp;
    fp=fopen(file,"r");
    if(fp==NULL)
    {
        printf("file not found");
        return 0;
    }
    for(c=getc(fp);c!=EOF;fp++)
    {
        count++;
    }
    fclose(fp);
    printf("the file %s has %d characters",file,count);
}