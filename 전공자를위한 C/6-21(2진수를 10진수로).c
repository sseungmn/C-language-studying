#include<stdio.h>
int main()
{
	int max;
	printf("Enter a number.\n");
	scanf("%d", &max);

	int i;
	for (i = 1; i <= max; i++) {
		if (game(i) > 0)
			for (; game(i) >= 0; game(i)--) {
				printf("! ");
			}
		else
			printf("%d ", i);
	}
	return 0;
}

int game(int n)
{
	int count=0, i;
	while (n != 0)
	{
		if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9)
			count++;
		n = n / 10;
	}
	return count;
}