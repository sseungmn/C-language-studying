#define MAX 6
#include<stdio.h>
#include<stdlib.h> //srand, rand
#include<time.h> //time함수
#include<Windows.h>//sleep함수

void print_array(const int*, int);
void swap(int*, int*);
void bubble_sort(int*, int);
int is_duplicated(const int*, int, int);
void set_numbers(int*);

void print_array(const int* arr, int length) {
	int i;
	for (i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
}

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int* arr, int length) {
	int current, pass, sorted = 0; //sort전
	for (pass = 1; (pass < length)&&(!sorted); pass++) {
		sorted = 1;
		for (current = 0; current < length - pass; current++) {
			if (arr[current] > arr[current + 1]) {
				swap(&arr[current], &arr[current + 1]);
				sorted = 0;
			}
		}
	}
}

int main()
{
	int money; int lottery[MAX]; int i;
	while (1) {
		printf("Enter available money.\n");
		scanf("%d", &money);
		if (money == 0)
			break;
		printf("Possible sets of lottery numbers are,\n");
		for (i = 0; i < money / 1000; i++) { //로또번호 출력 횟수
			set_numbers(lottery);
			bubble_sort(lottery, MAX);
			print_array(lottery, MAX);
			printf("\n");
		}
	}
	return 0;
}

int is_duplicated(const int* arr, int length, int num) {
	int i;
	for (i = 0; i < length; i++) {
		if (arr[i] == num)
			return 1;
	}
	return 0;
}

void set_numbers(int* lotto) {
	int i; int num;
	Sleep(1000);
	srand(time(NULL));

	for (i = 0; i < 6; i++) {
		num = 1 + rand() % 45;
		if (!is_duplicated(lotto, i, num))
			lotto[i] = num;
	}
}
