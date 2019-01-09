/*  숫자 배열 입력을 받음 index 1부터.
	음수를 입력받으면 입력 종료.
	정렬되기전의 배열을 출력(출력함수를 이용)
	selection sort 함수로 솔팅
		마지막인덱스를 지정.
		첫 인덱스부터 마지막 인덱스까지 확인하면서 최댓값의 인덱스을 저장
		최댓값의 인덱스의 값과 마지막인덱스의 값을 교환

		마지막인덱스를 --
		반복.
	정렬후의 배열을 출력.
*/
#define MAX 100
#include<stdio.h>

void swap(int*a, int*b);
void selection_solt(int arr[], int length);
void print_array(const int data[], int length);

int main()
{
	int i = 0; int data[MAX]; int temp;
	printf("Enter integers saperated by space.\n");
	while (1) {
		scanf("%d", &temp);
		if (temp < 0)
			break;
		data[i++] = temp; //i에 1부터 arr의 개수가 저장됨
	}
	printf("Before sorting : ");
	print_array(data, i);
	printf("\n");

	selection_solt(data, i);
	printf("After sorting : ");
	print_array(data, i);
	printf("\n");
	return 0;

}

void print_array(const int arr[], int length)
{
	int i;
	for (i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
}

void swap(int*a, int*b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void selection_solt(int arr[], int length)
{
	int last, largest, current;
	

	for (last = length - 1; last > 0; last--) {
		largest = 0;
		for (current = 1; current <= last; current++)
		{
			if (arr[current] > arr[largest])
				largest = current;	
		}
		swap(&arr[last], &arr[largest]);
	}
}