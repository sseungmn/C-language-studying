#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch; int key, count;

	FILE *fp = fopen("encrypt.bin", "w+b");
	if (fp == NULL) {
		fprintf(stderr, "Error opening file.\n");
		exit(1);
	}

	printf("Enter key.\n");
	scanf("%d", &key);
	while ((ch = getchar()) != '\n');
	printf("Enter texts to encypt.\n");
	while ((ch = getchar()) != '\n') {
		ch = (ch + key) % 128;
		count = fwrite((void*)&ch, sizeof(ch), 1, fp);
		if (count < 1) {
			fprintf(stderr, "Error while writing.\n");
			exit(1);
		}
	}

	rewind(fp);
	while ((ch = fgetc(fp)) != EOF) {
		ch = ch - key;
		if (ch < 0)
			ch += 128;
		fputc(ch, stdout);
	}
	if (!feof(fp)) {
		fprintf(stderr, "Error while reding file.\n");
		exit(1);
	}
	fclose(fp);
	return 0;
}