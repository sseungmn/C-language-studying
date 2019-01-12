/*  ������ p������ char�� �����޸𸮸� 1�� �Ҵ�
	\n�� �Էµɶ����� �Է��� �ް� char�� ch�迭�� ����
	realloc���� char*1�� �ø�

	�������ε����� \0����
	��Ʈ������ ���
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char* p; int last = 0; char ch;

	p = (char*)malloc(sizeof(char));
	if (p == NULL)
		exit(1);
	
	printf("Enter a character string.\n");
	while (1) {
		if ((ch = getchar()) == '\n')
			break;
		*(p + last) = ch;
		last++;
		p = (char*)realloc(p, sizeof(char)*(last + 1));
		if (p == NULL)
			exit(1);
	}
	*(p + last) = '\0';

	printf("%s\n", p);

	free(p);
	p = NULL;
	return 0;
}