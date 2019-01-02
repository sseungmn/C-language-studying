#include<stdio.h>
#define true 1
#define false 0

int leap_year(int y) {
	if ((y % 4 == 0 && y % 100 != 0) || (y % 4 == 0 && y % 400 == 0))
		return true;
	else
		return false;
}

int to_last_year(int year) {
	int i, total = 0;

	for (i = 1; i <= (year - 1); i++) {
		if (leap_year(i))
			total += 366;
		else
			total += 365;
	}
	return total;
}

int to_last_month(int year, int month) {
	int i, total = 0;

	for (i = 1; i <= (month - 1); i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
			total += 31;
		else if (i == 4 || i == 6 || i == 9 || i == 11)
			total += 30;
		else {
			if (leap_year(year))
				total += 29;
			else
				total += 28;
		}
	}
	return total;
} 

void print_calander(int year, int month)
{
	int total,day;
	total = to_last_year(year) + to_last_month(year, month)+1;
	day = total % 7; //������ ����
	
	int date; //�� ���� ����.
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
		date = 31;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		date = 30;
	else if (month == 2) {
		if (leap_year(year))
			date = 29;
		else
			date = 28;
	} 
	else
		printf("%d���� �������� �ʽ��ϴ�.", month);
	
	//�޷��� ���
	printf("%d��\n", month);
	printf("��  ��  ȭ  ��  ��  ��  �� \n");
	int temp_date=date;//date�� �ӽú���
	int temp_day = day;//day�� �ӽú���
	for (temp_date=1; temp_date<=date; temp_date++) {
		for (; temp_day > 0; temp_day--) //���ۿ����� day������ ���� �°Բ� ������ ����.
			printf("    ");
		printf("%-3d ", temp_date); //�·� ����
		if ((day + temp_date) % 7 == 0) { //�������� ������ ����.
			printf("\n");
		}
	}
	printf("\n");
	return;
}

int main()
{
	int year, month;
	while (1) {
		printf("Enter year and month.\n");
		scanf("%d%d", &year, &month);
		print_calander(year, month);

		if (month == 0)
			break;
	}
	return 0;
}