#include<stdio.h>
int main()
{
	int key;
	char ch;

	printf("Enter the key \n");
	scanf("%d", &key);
	printf("Enter the text \n");
	getchar();//�տ��� �Է��� enterŰ�� �Ծ�ġ��
	for (ch = getchar(); ch != '\n'; ch = getchar())
	{
		ch = (ch + key) % 128;
		putchar(ch);
	}

	return 0;
}