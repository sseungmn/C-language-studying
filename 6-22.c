#include<stdio.h>
int main()
{
	int max;
	printf("Enter a number.\n");
	scanf("%d", &max);

	int i,life;
	for (i = 1; i <= max; i++) {
		if (game(i) > 0) {
			life = game(i);
			for (; life >= 0; life--) {
				printf("! ");
				life--;
			}
		}
			
		else
			printf("%d ", i);
	}
	return 0;
}

int game(int n)
{
	int count = 0, i;
	while (n != 0)
	{
		if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9)
			count++;
		n = n / 10;
	}
	return count;
}