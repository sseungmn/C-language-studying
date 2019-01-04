//sentinel

#include<stdio.h>
int main()
{
	int i;
	char ch[30];

	printf("Enter input sentence.\n");
	for (i = 0;; i++) {
		scanf("%c", &ch[i]);
		if (ch[i] == '\n') {
			ch[i + 1] = 'e';
			
			break;
		}
	}
	int value = 0; //¾øÀ½.
	for (i=0;;) {
		if (ch[i] == 'e') {
			if (ch[i-1]=='\n') {
				break;
			}
			else {
				value = 1;
				break;
			}
		}
		i++;
	}

	if (value == 0)
		printf("no.\n");
	else
		printf("yes.\n");
}