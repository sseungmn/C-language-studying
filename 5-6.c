// 가장 높은 점수와 가장 낮은 점수를 제외하고
// 나머지 점수의 합
// 1~10까지의 점수를 줄 수 있음.
// 최대나 최소의 점수는 0으로  간주해서 계산에서 제외할 수 있음. - 함수를 통해 구현

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