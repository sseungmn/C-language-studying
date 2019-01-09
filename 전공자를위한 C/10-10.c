#include<stdio.h>
int is_palindrome(const char s[], int first, int last);
int main()
{
	char s[100];
	int i;
	printf("Enter input sentence.\n");
	for (i = 0;; i++) {
		s[i] = getchar();
		if (s[i] == '\n')
			break;
	}
	if (is_palindrome)
		printf("Yes, it is a palindrome.\n");
	else
		printf("No, it is not a palindrome.\n");

	return 0;
}
int is_palindrome(char s[], int first, int last)
{
	if (first > last)
		return 1; // true
	else {
		if (s[first] == s[last])
			is_palindrome(s, ++first, --last);
		else
			return 0; // false
	}
}