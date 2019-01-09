#include<stdio.h>
int main()
{
	char pw[8];
	int i; //index
	int end;
	printf("Enter password(maximum 8 character).\n");
	for (i = 0; i < 8; i++) {
		scanf("%c", &pw[i]);
		if (pw[i] == '\n')
			break;
	}
	end = i; //마지막 인덱스를 집어넣음
	printf("Your password is ");
	for (i = 0; i < end; i++) {
		printf("%c", pw[i]);
	}
	return 0;
}