// ���� ���� ������ ���� ���� ������ �����ϰ�
// ������ ������ ��
// 1~10������ ������ �� �� ����.
// �ִ볪 �ּ��� ������ 0����  �����ؼ� ��꿡�� ������ �� ����. - �Լ��� ���� ����

#include<stdio.h>
void Player_sco(int* a, int* b, int* c);
int* Min(int* a, int* b, int* c);
int* Max(int* a, int* b, int* c);

int main()
{
	static int sco1, sco2, sco3;
	printf("Enter scores of three judges.\n");
	scanf("%d %d %d", &sco1, &sco2, &sco3);
	Player_sco(&sco1, &sco2, &sco3);
	printf("The player gets %d", sco1 + sco2 + sco3);
	
	return 0;
}
void Player_sco(int* a, int* b, int* c)
{
	int* max=NULL;
	int* min=NULL;
	max = Max(a, b, c);
	min = Min(a, b, c);
	*max = 0;
	*min = 0;
}

int* Min(int* a, int* b, int* c)
{
	if (*a < *b&&*a < *c)
		return a;
	else if (*b < *a&&*b < *c)
		return b;
	else
		return c;
}

int* Max(int* a, int* b, int* c)
{
	if (*a > *b&&*a > *c)
		return a;
	else if (*b > *a&&*b > *c)
		return b;
	else
		return c;
}