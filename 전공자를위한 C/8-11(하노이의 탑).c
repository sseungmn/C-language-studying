#include<stdio.h>
int move(int n, char x, char y, char z);
int main()
{
	int num; //������ ����
	int x='X', y='Y', z='Z'; //���� �̸�
	printf("Enter the number of disks.\n");
	scanf("%d", &num);
	printf("%d", move(num, x, y, z));
	return 0;
}

int move(int n, char x, char y, char z) //x:����� y:������ z:������
{
	static count = 0;
	
	if (n == 1) {
		printf("move a disk from %c to %c \n", x, y); //������ x���� y�� �����.(z�� �Ű���)
		count++;
		return count;
	}
	else {
		move(n - 1, x, z, y); //���� ū�� ���� n-1���� ������ �������� �ű��.
		move(1, x, y, z); //���� ū ���� �������� �ű��.
		move(n - 1, z, y, x); //�������� �ִ� n-1���� �������� �ű��.
	}
	
}