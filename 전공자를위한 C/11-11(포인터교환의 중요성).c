#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch; int i; char *temp;
	char** p = (char**)malloc(2 * sizeof(char*)); // 2���� �����޸𸮸� ����Ű�� ���������� ����.
	if (p == NULL) //null�׽�Ʈ
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

	temp = p[0]; // �迭�� �ٲٱ⺸�ٴ� �����͸� �ٲ㼭 ���� ������ ��ȯ!!
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