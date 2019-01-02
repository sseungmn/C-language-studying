#include<stdio.h>
void asterisk(int n);
int main()
{
	int num;
	printf("Enter a natural number.\n");
	scanf("%d", &num);
	asterisk(num);

	return 0;
}

void asterisk(int n)
{
	if (n == 0)
		return;
	else {
		asterisk(n - 1); //head tail 상관없음.
		printf("*");
	}
}