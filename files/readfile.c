#include<stdio.h>
int main()
{
    FILE *f;
    f=fopen("demo.txt","r");
    char s[100];
    while(fscanf(f,"%s",s)!=EOF)
    {
    printf("%s\n",s);

}
}

    

