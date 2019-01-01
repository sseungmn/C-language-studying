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
	int e;//자리수를 나타내는 변수
	int n_temp=n; //n의 초기값을 담는 변수 n_temp 선언
	int result=0,temp=1; //result와 각자리수의e제곱을 담는 temp변수 초기화

	for (e = 0;; e++) {
		if (n_temp < (int)pow(10, e )) {
			break; //e에 n의 자리수가 담기면서 for문 종료.
		}
	}
	
	int i,j;
	for (i = e; i >= 0; i--) {
		n_temp = n_temp % ((int)pow(10, i + 1)); //n에 이전에 구한 최대자리수를 제외한 나머지를 남긴다.

		for (j = 1; j <= e; j++) {
			temp = temp * (n_temp / (int)pow(10, i)); //각 자리수를 e번 제곱한다.
		}

		result = result + temp; //result에 각자리수 e제곱한 값을 넣고
		temp = 1; //temp 초기화
	}
	
	if (result == n) //자아도취수인지 확인 후 맞으면 1리턴.
		return 1;
	else
		return 0;
}