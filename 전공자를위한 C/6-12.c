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
	if (num % 2 == 0) //¦���϶����� �� �� Ȧ���� �Ȱ��� ����� ����Ѵ�.
		num = num - 1;
	for (i = 1; (2 * i - 1) <= num; i++) {
		//������ ���� ���ϱ�
		for (j = 1; j <= (num - (2 * i - 1)) / 2; j++) {
			printf(" ");
		}
		//���� ���� ���ϱ�
		for (j = 1; j <= (2 * i - 1); j++) {
			printf("*");
		}
		printf("\n");
	}
}