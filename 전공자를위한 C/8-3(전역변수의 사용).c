#include<stdio.h>

int min, max;

int min_max(int a, int b, int c)
{
	if (a <= b&&a <= c)
		min = a;
	else if (b <= a&&b <= c)
		min = b;
	else
		min = c;

	if (a >= b&&a >= c)
		max = a;
	else if (b >= a&&b >= c)
		max = b;
	else
		max = c;
	
}

int main()
{
	int a, b, c;
	printf("Enter three integers.\n");
	scanf("%d %d %d", &a, &b, &c);
	min_max(a, b, c);
	printf("min is %d, max is %d", min, max);

	return 0;
}