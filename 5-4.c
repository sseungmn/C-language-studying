//삼각형이 되는지 확인(두 변의 길이가 나머지 한 변의 길이보다 길다.)
//삼각형-세 변의 길이 합. !삼각형 - No such triangle출력
//세변의 길이는 double.
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
	//a,b,c중 한변이라도 0이 아닌지 확인.
	if (a*b*c != 0) 
	{ //삼각형의 가장 기본적인 조건에 해당되지 않는다면 나머지 문장을 실행하지 않아 구동시간 절약.
	double max,total;
	total = a + b + c;
	max = Max(a, b, c);

		//두 변의 길이가 나머지 한 변의 길이(가장 큰 변) 보다 큰지 확인.
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