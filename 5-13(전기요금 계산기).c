//사용량에따른 가격 계산 함수
//	200kmh 이하 - 기본요금 910원 단가 93.3
//	210~400 -기본요금 1600원 단가 187.9
//	401이상 기본요금 7300원 단가 280.6
//	여름과 겨울에는 1000이상 기본요금 7300원 단가 709.5

//청구액 계산 함수
//	세금 13.7% 추가 계산

//사용량을 입력받아서 청구액을 계산

#include<stdio.h>
double Charge_use(int season, double use);
int Computer_pay(double cg_use);

int main()
{
	int use,season,pay;
	double charge_use;

	printf("Enter monthly amount in Kwh.\n");
	scanf("%d", &use);
	printf("Enter 1 if summer or winter, 0 if not.\n");
	scanf("%d", &season);

	charge_use = Charge_use(season, use);
	pay = Computer_pay(charge_use);

	printf("Including tax, you pay %d원", pay);

	return 0;
}

double Charge_use(int season, double use)
{
	double result;

	if (use <= 200)
		result = 910 + 93.3*use;
	else if (use >= 201 && use <= 400)
		result = 1600 + 187.9*use;
	else if (use >= 401 && use < 1000)
		result = 7300 + 280.6*use;
	else {
		if (season == 1)
			result = 7300 + 709.5*use;
		else
			result = 7300 + 280.6*use;
	}
	
	return result;
}
int Computer_pay(double cg_use)
{
	int result;
	result = (int)(cg_use*1.137);
	return result;
}