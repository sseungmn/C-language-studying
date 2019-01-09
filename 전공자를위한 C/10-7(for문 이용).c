#include<stdio.h>
#include<ctype.h> //atoi

int modulo(int a[], const int m, const int size);

int main()
{
	int i, mod, arr[1000];
	char ch;
	printf("Enter a big positive integer.\n");
	i = 0;
	while ((ch = getchar()) != '\n') {
		arr[i] = atoi(&ch);
		i++; // 원소의 개수
	}
	printf("Enter a modulus number.\n");
	scanf("%d", &mod);
	printf("The result of modulo is %d.\n", modulo(arr, mod, i));

	return 0;
}

int modulo(int a[], const int m, const int size)
{
	int reminder, i;
	reminder = a[0] % m;
	for (i = 1; i < size; i++) {
		reminder = (reminder * 10 + a[i]) % m;
	}
	return reminder;
}