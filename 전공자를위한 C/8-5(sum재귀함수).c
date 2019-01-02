#include<stdio.h>
int sum(int n);
int main()
{
	unsigned int num;
	printf("Enter a natural number.\n");
	scanf("%d", &num);
	printf("%d", sum(num));
	return 0;
}

int sum(int n)
{
	if (n == 1)
		return 1;
	else 
		return n + sum(n - 1);
	
}
