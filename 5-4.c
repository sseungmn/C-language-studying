//�ﰢ���� �Ǵ��� Ȯ��(�� ���� ���̰� ������ �� ���� ���̺��� ���.)
//�ﰢ��-�� ���� ���� ��. !�ﰢ�� - No such triangle���
//������ ���̴� double.
#include<stdio.h>
void is_triangle(double a, double b, double c);
double Max(double a, double b, double c);

int main()
{
	double num1, num2, num3;
	printf("Enter three real numbers.\n");
	scanf("%lf %lf %lf", &num1, &num2, &num3);
	is_triangle(num1, num2, num3);

	return 0;
}

void is_triangle(double a, double b, double c)
{
	//a,b,c�� �Ѻ��̶� 0�� �ƴ��� Ȯ��.
	if (a*b*c != 0) 
	{ //�ﰢ���� ���� �⺻���� ���ǿ� �ش���� �ʴ´ٸ� ������ ������ �������� �ʾ� �����ð� ����.
	double max,total;
	total = a + b + c;
	max = Max(a, b, c);

		//�� ���� ���̰� ������ �� ���� ����(���� ū ��) ���� ū�� Ȯ��.
		if (total - max > max)
			printf("total is %lf", total);
		else
			printf("'No such triangle'");
	}
	else
		printf("'No such triangle'");

	return;
}

double Max(double a, double b, double c)
{
	if (a > b&&a > c)
		return a;
	else if (b > a&&b > c)
		return b;
	else
		return c;
}