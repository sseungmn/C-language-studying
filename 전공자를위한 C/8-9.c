#include<stdio.h>

int sum(int n);

int main()
{
	int num;
	printf("Enter a natural number.\n");
	scanf("%d", &num);
	printf("The result is %d", sum(num));

	return 0;
}

int sum(int n)
{
	if (n == 1)
		return 12;
	else {
		return (10 * n + 2) + sum(n - 1);
	}
}