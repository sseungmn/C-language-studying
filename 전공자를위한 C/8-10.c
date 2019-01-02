#include<stdio.h>
int power(int a, int b);

int main()
{
	int base, multiplier;
	printf("Enter base and muliplier.\n");
	scanf("%d %d", &base, &multiplier);
	printf("%d to the power of %d is %d", base, multiplier, power(base, multiplier));

	return 0;
}

int power(int a, int b)
{
	if (b == 1)
		return a;
	else 
		return a * power(a, b - 1);
	
}