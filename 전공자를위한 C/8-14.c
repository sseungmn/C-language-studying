#include<stdio.h>
int main()
{
	int num; int i;
	printf("Enter a natrual number.\n");
	scanf("%d", &num);

	for (i = num; i <= 10; i++) {
		printf("%d.\n", i);
	}

	return 0;
}