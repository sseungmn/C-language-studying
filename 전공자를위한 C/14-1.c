#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str1[50];
	char str2[50];
	FILE *fp;
	fp = fopen("C:/Users/asuspc/Desktop/string.txt","wt");
	if (fp == NULL) {
		fprintf(stderr, "Error opening file.\n");
		exit(1);
	}

	printf("Enter a string.\n");
	gets(str1);
	printf("Enter another string.\n");
	gets(str2);

	fputs(str1, fp);
	fputs("\n", fp);
	fputs(str2, fp);

	fclose(fp);
	return 0;

}