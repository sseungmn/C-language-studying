#include<stdio.h>
#include<time.h>
long long fib(long long n) {
	if (n < 3)
		return 1;
	else
		return (fib(n - 1) + fib(n - 2));
}

int main() {
	long long num;
	float start, end;
	printf("Enter a number. N.\n");
	scanf("%lld", &num);
	start = (float)clock();
	printf("%lldth fibonacci number is %lld.\n", num, fib(num));
	end = (float)clock();
	printf("Time elapsed for fibonacci is %.3f seconds.\n",(end-start)/CLOCKS_PER_SEC);
	return 0;
}