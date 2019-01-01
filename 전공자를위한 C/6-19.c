#include<stdio.h>

int is_vowel(char ch);

int main()
{
	char ch;
	int count=0;

	printf("Enter a sentence.\n");
	for (ch = getchar(); ch != '\n'; ch = getchar()) {
		if (is_vowel(ch) == 1)
			count++;
	}

	printf("Vowel appears %d times.\n", count);
}

int is_vowel(char ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		return 1;
	else
		return 0;
}