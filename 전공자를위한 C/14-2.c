#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char text[10][100];
	char buff[100];
	char ch;
	int i, j;

	FILE *fp = fopen("original.txt", "r+");
	if (fp == NULL) {
		fprintf(stderr, "Error opening file.\n");
		exit(1);
	}
	
	fseek(fp, 0, SEEK_END); //������ ���忡�� ���͸� ġ�� �ʾ��� ��� '\n'�� �����Ѵ�.
	if ((ch = fgetc(fp)) != '\n') {
		fputc('\n', fp);
	}
	rewind(fp);

	for (i = 0; fgets(buff, sizeof(buff), fp) != NULL;i++) 
		strcpy(text[i],buff);
	if (!feof(fp)) {
		fprintf(stderr, "Error while reading file.\n");
		exit(1);
	}
	for (j = i - 1;  j >= 0; j--) 
		fprintf(stdout, "%s", text[j]);
	fclose(fp);
	return 0;
	
}