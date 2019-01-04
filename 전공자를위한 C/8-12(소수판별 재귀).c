#include<stdio.h>
int is_prime(int n, int harf);

int main()
{
	int num;
	printf("Enter a natural number.\n");
	scanf("%d", &num);
	
	if (is_prime(num, num / 2) == 1)
		printf("소수입니다.\n");
	else
		printf("소수가 아닙니다.\n");
	return 0;
}

int is_prime(int n, int harf)
{
	int value = 1;
	if (harf==1) {
		return value;
	}
	else {
		if (n%harf == 0) {
			value = 0;
			return value;
		}
		else
			is_prime(n, harf - 1);
	}
}