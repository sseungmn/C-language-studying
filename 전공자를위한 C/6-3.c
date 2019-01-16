#include<stdio.h>
int main()
{
	int num, i, result = 0;
	printf("Enter a natural number.\n");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		if (i % 5 == 0)
			continue;
		result = result + i;
	}
	printf("The sum is %d", result);
}