#include<stdio.h>
int main()
{
    FILE *f;
    f=fopen("test.txt","w");
    fprintf(f,"hello");
    fclose(f);
}
