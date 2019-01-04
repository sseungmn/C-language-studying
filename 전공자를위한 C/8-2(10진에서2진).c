#include<stdio.h>
int main()
{
	int bin[30];
	int dec, temp_dec;
	int i;

	printf("Enter a natural number.\n");
	scanf("%d", &dec);
	temp_dec = dec;

	for (i = 0;;) {
		if (temp_dec == 1) {
			bin[i] = temp_dec;
			break;
		}
		else {
			bin[i] = temp_dec % 2;
			temp_dec /= 2;
			i++;
		}
	}
	for (; i >= 0; i--) {
		printf("%d", bin[i]);
	}
	printf("\n");
	return 0;
}