/*#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,pos,l;
    printf("enter the string: ");
    gets(s);
    l=strlen(s);
    if(pos>=l)
    {
        printf("delete not possible");
    }
    else
    {
        for(i=pos;pos>=l;i--)
        {
            printf("%c",i);
        }
    }
}*/


#include<stdio.h>
#include<string.h>
void main()
{
   char str1[20], str2[20];
   int l1, l2, n, i;
   puts("Enter the string 1\n");
   gets(str1);
   l1 = strlen(str1);
   puts("Enter the string 2\n");
   gets(str2);
   l2 = strlen(str2);
   printf("Enter the position where the string is to be inserted\n");
   scanf("%d", &n);
   for(i = n; i < l1; i++)
  {
      str1[i + l2] = str1[i];
   }
   for(i = 0; i < l2; i++)
   {
      str1[n + i] = str2[i];
   }
      str2[l2 + 1] = '\0';
   printf("%s",str1);
}
