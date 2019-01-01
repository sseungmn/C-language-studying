#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number.\n");
	scanf("%d", &num);
	
	int i, j;
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	if (num % 2 == 0) //짝수일때에는 그 전 홀수와 똑같은 모양을 출력한다.
		num = num - 1;
	for (i = 1; (2 * i - 1) <= num; i++) {
		//공백의 개수 정하기
		for (j = 1; j <= (num - (2 * i - 1)) / 2; j++) {
			printf(" ");
		}
		//별의 개수 정하기
		for (j = 1; j <= (2 * i - 1); j++) {
			printf("*");
		}
		printf("\n");
	}
}