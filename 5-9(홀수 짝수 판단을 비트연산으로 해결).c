#include<stdio.h>
void is_odd(int n);

int main()
{
	int num;
	printf("Enter an integer.\n");
	scanf("%d", &num);

	is_odd(num);

	return 0;
}

void is_odd(int n)
{
	if (n & 1 == 1)
		printf("It is an odd number.\n");
	else
		printf("It is an even number.\n");
}