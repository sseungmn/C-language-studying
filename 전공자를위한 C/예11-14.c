/*  포인터 p변수에 char형 동적메모리를 1번 할당
	\n이 입력될때까지 입력을 받고 char형 ch배열에 저장
	realloc으로 char*1을 늘림

	마지막인덱스에 \0삽입
	스트링으로 출력
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