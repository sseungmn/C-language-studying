#include<stdio.h>
#include<ctype.h>
int main()
{
	int i;
	char ch;
	int bool_1=1; // default=true=1, false=0; // ù���ڰ� �ҹ������� �ǵ��ϴ� ����.
	int bool_2=0; // default=false=0; //���ڰ� ���Դ��� �ǵ��ϴ� ����.

	printf("Enter an identifier.\n");
	scanf("%c", &ch);
	if (!islower(ch))
		bool_1 = 0;

	for (i = 2; i <= 8; i++) {
		scanf("%c", &ch);
		if (ch == '\n')
			break;
		if (ch >= '0'&&ch <= '9')
			bool_2 = 1;
	}

	if (bool_1 == 1 && bool_2 == 1)
		printf("It's a legal ID\n");
	else
		printf("It's not a legal ID\n");

	return 0;
}