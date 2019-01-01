#include<stdio.h>
void reverse_it(int num);
int main()
{
	int num=1;
	while (num > 0) { //0이나 음수가 입력될 때 까지 반복한다.
		printf("Enter a natural number.\n");
		scanf("%d", &num);
		reverse_it(num);
	}
	return 0;
}
void reverse_it(int num) //주어진 수를 10으로 나눈 나머지 즉, 1의자리를 출력하는것을 반복한다.
{
	int n_temp = num;
	while (n_temp > 0) {
		printf("%d", n_temp % 10);
		n_temp = n_temp / 10;
	}
	printf("\n");
	return;
}