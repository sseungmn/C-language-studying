#include<stdio.h>
void move(int n, char x, char y, char z);
int main()
{
	int num; //������ ����
	int x, y, z; //���� �̸�
	printf("Enter the number of disks.\n");
	scanf("%d", &num);
	move(num, x, y, z);
	return 0;
}

void move(int n, char x, char y, char z) //x:����� y:������ z:������
{
	if (n == 1) {
		printf("move a disk from %c to %c", x, y); //������ x���� y�� �����.(z�� �Ű���)
		return;
	}
	else {
		move(n-1, 'X', 'Z', 'Y');
		move(1, 'X', 'Y', 'Z');
		move(n - 1, 'Z', 'Y', 'X');
	}
}