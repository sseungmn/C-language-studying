#include<stdio.h>
typedef struct {
	int addition; int subtraction; int multiplication;
}calcType;

calcType calc_all(int a, int b) {
	calcType calc;
	calc.addition = a + b;
	calc.subtraction = a - b;
	calc.multiplication = a * b;
	return calc;
}

int main()
{
	int a, b;
	calcType calc_main;
	printf("Enter two integer number.\n");
	scanf("%d %d", &a, &b);
	calc_main=calc_all(a, b);
	printf("%d %d %d", calc_main.addition, calc_main.subtraction, calc_main.multiplication);

	return 0;

}