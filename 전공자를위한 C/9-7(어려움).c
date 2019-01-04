#include<stdio.h>
int main()
{
	int vote[10];
	int clone[10] = {1,1,1,1,1,1,1,1,1,1};
	int i,j,count=0;

	printf("Enter the result of voting.\n");
	scanf("%d %d %d %d %d %d %d %d %d %d", &vote[0], &vote[1], &vote[2] , & vote[3], &vote[4], &vote[5], &vote[6], &vote[7], &vote[8], &vote[9]);
	
	for (i = 0; i < 10; i++) {//비교대상 1번
		for (j = 0; j < 10; j++) {
			if (i != j && clone[i] != 0 && clone[j] != 0) { //동일한 대상이 아니고, 이미 지워진 대상이 아닐때.
				if (vote[i] != vote[j]) { //서로 다르면 소거한다.
					clone[i] = 0; 
					clone[j] = 0;
				}
			}
		}
	}

	for (i = 0; i < 10; i++) {
		if (clone[i] != 0) { //살아남은 경우.
			for (j = 0; j < 10; j++) {
				if (vote[i] == vote[j]) //최다득표자의 득표수 카운트
					count++;
			}
			if (count >= 5) { //과반수 이상인 경우.
				printf("Number %d is the winner.\n", vote[i]);
				break;
			}
			
		}
	}
	return 0;
	
}