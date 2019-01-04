#include<stdio.h>
int main()
{
	int i; //index를 저장.
	char ch[100];
	int max; //index의 마지막을 저장.
	printf("Enter a sentence.\n");
	for (i = 0;;)
	{
		scanf("%c", &ch[i]);
		if (ch[i] == '\n') //Enter 입력시 입력종료.
			break;

		if (ch[i - 1] == ' '&&ch[i] == ' ') //공백이 2번나오면 한칸씩 땡김
		{
			i = i -1;
		}
		i++;
	}
	max = i;

	for (i = 0; i <= max; i++) { //출력.
		printf("%c", ch[i]);
	}

	return 0;
}