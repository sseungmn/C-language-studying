#include<stdio.h>
int main()
{
	int value=1; //default������ 1, �� palindrome�̴�.
	int max, i; //max���� ���ڿ��� ������ �ε���, i���� ����
	char palindrome[100];

	while (1) {
		printf("Enter a sentence.\n");
		for (i = 0;; i++) {
			scanf("%c", &palindrome[i]);
			if (palindrome[i] == '\n')
				break; //Enter �� �ԷµǸ� �Է�����.
			if (palindrome[i] == 'Q')
				return 0; //Q�� �ԷµǸ� ���α׷� ����.
		}
		max = i-1; //Enter�� �Էµ� �ε��� �������� ����.

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