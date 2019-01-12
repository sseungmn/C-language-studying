#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch; int i; char *temp;
	char** p = (char**)malloc(2 * sizeof(char*)); // 2개의 동적메모리를 가리키는 이중포인터 생성.
	if (p == NULL) //null테스트
		exit(1);

	p[0] = p[1] = NULL;

	printf("Enter first string.\n");
	for (i = 0;; i++) {
		p[0] = realloc(p[0], sizeof(char)*(i + 1));
		if((ch = getchar())=='\n')
			break;
		p[0][i] = ch;
	}
	p[0][i] = '\0';

	printf("Enter second string.\n");
	for (i = 0;; i++) {
		p[1] = realloc(p[1], sizeof(char)*(i + 1));
		if ((ch = getchar()) == '\n')
			break;
		p[1][i] = ch;
	}
	p[1][i] = '\0';

	temp = p[0]; // 배열을 바꾸기보다는 포인터를 바꿔서 쉽게 내용을 교환!!
	p[0] = p[1];
	p[1] = temp;

	printf("%s\n", p[0]);
	printf("%s\n", p[1]);

	free(p[0]);
	free(p[1]);
	free(p);
	p = NULL;

	return 0;
}