#include<stdio.h>
int current_min(int n);
int main()
{
	int num;
	while (1) {
		printf("Enter a number.\n");
		scanf("%d", &num);
		if (num < 0)
			break;
		printf("Current min is %d.\n", current_min(num));
	}
	return 0;
}

int current_min(int n)
{
	static int min=100;
	min = min > n ? n : min;
	return min;
}