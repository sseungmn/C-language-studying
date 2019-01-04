#include<stdio.h>
int main()
{
	char ch1[30];
	char ch2[30];
	int i, j;

	printf("Enter the first string.\n");
	for (i = 0;; i++) {
		scanf("%c", &ch1[i]);
		if (ch1[i] == '\n')
			break;
	}
	printf("Enter the second string.\n");
	for (j = 0;; j++) {
		scanf("%c", &ch2[j]);
		if (ch2[j] == '\n')
			break;
	}

	for (i = 0; ch1[i] != '\n'; i++) {
		if (ch1[i] == ' ')
			continue;

		for (j = 0; ch2[j] != '\n'; j++) {
			if (ch2[j] == ' ')
				continue;

			if (ch1[i] == ch2[j])
				ch1[i] = ch2[j] = '*';
		}

	}
	for (i = 0; ch1[i] != '\n'; i++) {
		if (ch1[i] == ' ')
			continue;

		if (ch1[i] != '*') {
			printf("No, they are not anagrams.\n");
			return 0;
		}
	}
	printf("Yes, they are anagrams.\n");
	return 0;
}

