#include<stdio.h>
int main()
{
	int num[5]; int i; int min, max;
	printf("Enter five integers separated by blanks.\n");
	scanf("%d %d %d %d %d", &num[0],&num[1],&num[2],&num[3],&num[4]);

	min = max = num[0];
	for (i = 0; i < 5; i++) {
			if (num[i] >= max)
				max = num[i];
			if (num[i] <= min)
				min = num[i];
	}
	
	printf("min is %d. max is %d", min, max);
	
	return 0;
}