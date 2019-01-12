#include<stdio.h>
void print_array(char*, int);
int main()
{
	char str[10]; char ch; int i;
	printf("Enter a string.\n");
	for (i = 0;; i++) {
		if ((ch = getchar()) == '\n')
			break;
		str[i] = ch;
	}
	str[i] = '\0';
	print_array(str, i);
	return 0;
}

void print_array(char *arr, int length) {
	if (length == 0) {
		return;
	}
	else {
		printf("%c", *(arr+length-1));
		print_array(arr, length - 1);
		
	}
}