#include<stdio.h>
int main()
{
	int vote[10];
	int clone[10] = {1,1,1,1,1,1,1,1,1,1};
	int i,j,count=0;

	printf("Enter the result of voting.\n");
	scanf("%d %d %d %d %d %d %d %d %d %d", &vote[0], &vote[1], &vote[2] , & vote[3], &vote[4], &vote[5], &vote[6], &vote[7], &vote[8], &vote[9]);
	
	for (i = 0; i < 10; i++) {//�񱳴�� 1��
		for (j = 0; j < 10; j++) {
			if (i != j && clone[i] != 0 && clone[j] != 0) { //������ ����� �ƴϰ�, �̹� ������ ����� �ƴҶ�.
				if (vote[i] != vote[j]) { //���� �ٸ��� �Ұ��Ѵ�.
					clone[i] = 0; 
					clone[j] = 0;
				}
			}
		}
	}

	for (i = 0; i < 10; i++) {
		if (clone[i] != 0) { //��Ƴ��� ���.
			for (j = 0; j < 10; j++) {
				if (vote[i] == vote[j]) //�ִٵ�ǥ���� ��ǥ�� ī��Ʈ
					count++;
			}
			if (count >= 5) { //���ݼ� �̻��� ���.
				printf("Number %d is the winner.\n", vote[i]);
				break;
			}
			
		}
	}
	return 0;
	
}