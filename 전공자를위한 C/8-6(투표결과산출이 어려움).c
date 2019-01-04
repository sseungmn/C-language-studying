#include<stdio.h>
int main()
{
	int vote[10];
	int count[8] = { 0 };
	int i;

	printf("Enter the result of voting.\n");
	scanf("%d %d %d %d %d %d %d %d %d %d", &vote[0], &vote[1],&vote[2] , & vote[3], &vote[4], &vote[5], &vote[6], &vote[7], &vote[8], &vote[9]);
	for (i = 0; i <= 10; i++) {
		switch (vote[i]) {
		case 1:
			count[0]++;
			break;
		case 2:
			count[1]++;
			break;
		case 3:
			count[2]++;
			break;
		case 4:
			count[3]++;
			break;
		case 5:
			count[4]++;
			break;
		case 6:
			count[5]++;
			break;
		case 7:
			count[6]++;
			break;
		case 8:
			count[7]++;
			break;
		}
	}
	int max = count[0];
	int max_num;
	for (i = 0; i <= 8; i++) {
		if (max <= count[i]) {
			max = count[i];
			max_num = i + 1;
		}
	}
	printf("Number %d is the winner.\n", max_num);
	return 0;
	
}