#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp1=fopen("C:/Users/asuspc/Desktop/first.txt","rt");
	FILE *fp2=fopen("C:/Users/asuspc/Desktop/second.txt","rt");
	FILE *dest=fopen("C:/Users/asuspc/Desktop/merge.txt","wt");
	if (fp1 == NULL || fp2 == NULL || dest == NULL) {
		fprintf(stderr, "Error opening files.\n");
		exit(1);
	}

	char temp[100];
	int i;

	while (fgets(temp, sizeof(temp), fp1) != NULL)
		fputs(temp, dest);
	if (!feof(fp1)) {
		fprintf(stderr, "Error while reading file.\n");
		exit(1);
	}
	fputs("\n", dest);
	while (fgets(temp, sizeof(temp), fp2) != NULL)
		fputs(temp, dest);
	if (!feof(fp2)) {
		fprintf(stderr, "Error while reading file.\n");
		exit(1);
	}

	fclose(fp1); fclose(fp2); fclose(dest);
	return 0;
}