#include<stdio.h>
int main()
{
	int i; //index�� ����.
	char ch[100];
	int max; //index�� �������� ����.
	printf("Enter a sentence.\n");
	for (i = 0;;)
	{
		scanf("%c", &ch[i]);
		if (ch[i] == '\n') //Enter �Է½� �Է�����.
			break;

		if (ch[i - 1] == ' '&&ch[i] == ' ') //������ 2�������� ��ĭ�� ����
		{
			i = i -1;
		}
		i++;
	}
	max = i;

	for (i = 0; i <= max; i++) { //���.
		printf("%c", ch[i]);
	}

	return 0;
}