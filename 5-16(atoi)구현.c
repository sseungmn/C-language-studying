#include<stdio.h>
int main()
{
	char ch; int sum = 0;
	int value;
	printf("Enter a natural number.\n");
	while (1) {
		scanf("%c", &ch);
		if (ch == '\n')
			break;
		value = ch-'0';
		sum = sum * 10 + value;
	}
	printf("You entered %d in decimal.\n", sum);
	return 0;
}