#include<stdio.h>
int main()
{
	int value=1; //default값으로 1, 즉 palindrome이다.
	int max, i; //max에는 문자열의 마지막 인덱스, i에는 순서
	char palindrome[100];

	while (1) {
		printf("Enter a sentence.\n");
		for (i = 0;; i++) {
			scanf("%c", &palindrome[i]);
			if (palindrome[i] == '\n')
				break; //Enter 가 입력되면 입력종료.
			if (palindrome[i] == 'Q')
				return 0; //Q가 입력되면 프로그램 종료.
		}
		max = i-1; //Enter가 입력된 인덱스 이전값을 대입.

		for (i = 0; i <= max / 2 +1; i++) {
			if (palindrome[i] != palindrome[max - i]) {
				value = 0; //false
				break;
			}
		}

		if (value==1)
			printf("Yes, it is a palindrome.\n");
		else
			printf("No, it is NOT a palindrome.\n");
	}
}