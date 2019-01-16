#include<stdio.h>
#include<stdlib.h>

int main()
{
	char buff[100];
	char *root=NULL;
	char ch; int i=0;
	printf("복사할 파일의 주소를 입력하시오.\n");
	while ((ch = getchar()) != '\n') {
		root = (char*)realloc(root, sizeof(char)*(i + 1));
		if (root == NULL) {
			fprintf(stderr, "Error while allocate dynamic memory.\n");
			exit(1);
		}
		root[i] = ch;
		i++;
	}
	root[i] = '\0'; //문자열 만들기

	FILE *src = fopen("C:/Users/asuspc/desktop/from.txt", "rt");
	FILE *dest = fopen(root, "wt");

	if (src == NULL || dest == NULL) {
		printf("Error opening file.\n");
		exit(1);
	}

	while (fgets(buff, sizeof(buff), src) != NULL) //g한줄 읽고 fputs입력 반복하다가 null값을 만나면 종료.
		fputs(buff, dest);

	if (feof(src))
		printf("Copy complite.\n");
	else
		printf("Error while copying.\n");

	free(root);
	root = NULL;
	fclose(src);
	fclose(dest);
	return 0;
}