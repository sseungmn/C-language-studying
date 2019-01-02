#include<stdio.h>
#include<stdarg.h>

double average(int count, ...);

int main()
{
	int count;
	int a, b, c;
	printf("Enter number of arguments. It must be 2 or 3.\n");
	scanf("%d", &count);
	if (count == 3) {
		printf("Enter three integers.\n");
		scanf("%d %d %d", &a, &b, &c);
		printf("Average valuse is %lf",average(count, a, b, c));
	}
	else if (count == 3) {
		printf("Enter two integers.\n");
		scanf("%d %d", &a, &b);
		printf("Average valuse is %lf", average(count, a, b));
	}
	return 0;
}

double average(int count, ...)
{
	int i,total=0;
	va_list(p);
	va_start(p, count);
	for (i = 1; i <= count; i++) {
		total = total + va_arg(p, int);
	}
	return (double)(total / count);
}