#include <stdio.h>
int main()
{
	FILE *fp;
	int count = 0;
	char filename[100];
	char c;
	printf("Enter file name: ");
	gets(filename);
    fp = fopen(filename, "r");
	if (fp == NULL) {
		printf("Could not open file %s",filename);
	}
	for (c = getc(fp); c != EOF; c = getc(fp))
		count = count++;

	fclose(fp);
	printf("The file %s has %d characters\n ",filename, count);

}
