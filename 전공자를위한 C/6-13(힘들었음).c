#include<stdio.h>
#include<math.h>
int narciss(int n); //returns 1 if narcissistic number.
int main()
{
	unsigned int num;
	printf("Enter a number.\n");
	scanf("%d", &num);
	if (narciss(num) == 1)
		printf("Yes, %d is a narcissistic number.\n", num);
	else
		printf("No, %d is not a narcissistic number.\n", num);
	return 0;
}

int narciss(int n)
{
	int e;//�ڸ����� ��Ÿ���� ����
	int n_temp=n; //n�� �ʱⰪ�� ��� ���� n_temp ����
	int result=0,temp=1; //result�� ���ڸ�����e������ ��� temp���� �ʱ�ȭ

	for (e = 0;; e++) {
		if (n_temp < (int)pow(10, e )) {
			break; //e�� n�� �ڸ����� ���鼭 for�� ����.
		}
	}
	
	int i,j;
	for (i = e; i >= 0; i--) {
		n_temp = n_temp % ((int)pow(10, i + 1)); //n�� ������ ���� �ִ��ڸ����� ������ �������� �����.

		for (j = 1; j <= e; j++) {
			temp = temp * (n_temp / (int)pow(10, i)); //�� �ڸ����� e�� �����Ѵ�.
		}

		result = result + temp; //result�� ���ڸ��� e������ ���� �ְ�
		temp = 1; //temp �ʱ�ȭ
	}
	
	if (result == n) //�ھƵ�������� Ȯ�� �� ������ 1����.
		return 1;
	else
		return 0;
}