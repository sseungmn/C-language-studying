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
	day = total % 7; //요일을 저장
	
	int date; //일 수를 저장.
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
		printf("%d월은 존재하지 않습니다.", month);
	
	//달력을 출력
	printf("%d월\n", month);
	printf("일  월  화  수  목  금  토 \n");
	int temp_date=date;//date의 임시변수
	int temp_day = day;//day의 임시변수
	for (temp_date=1; temp_date<=date; temp_date++) {
		for (; temp_day > 0; temp_day--) //시작요일이 day변수의 값과 맞게끔 공백을 삽입.
			printf("    ");
		printf("%-3d ", temp_date); //좌로 정렬
		if ((day + temp_date) % 7 == 0) { //일주일이 지나면 개행.
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