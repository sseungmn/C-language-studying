#include<stdio.h>
void reverse_it(int num);
int main()
{
	int num=1;
	while (num > 0) { //0�̳� ������ �Էµ� �� ���� �ݺ��Ѵ�.
		printf("Enter a natural number.\n");
		scanf("%d", &num);
		reverse_it(num);
	}
	return 0;
}
void reverse_it(int num) //�־��� ���� 10���� ���� ������ ��, 1���ڸ��� ����ϴ°��� �ݺ��Ѵ�.
{
	int n_temp = num;
	while (n_temp > 0) {
		printf("%d", n_temp % 10);
		n_temp = n_temp / 10;
	}
	printf("\n");
	return;
}