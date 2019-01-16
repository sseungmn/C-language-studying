#include<stdio.h>
#define MAX 12
int binary_search(const int arr[], const int val, int first, int last);
void insert_sort(int arr[], const int length);
void swap(int* a, int* b);

int main()
{
	int array[MAX];
	int i, value;

	printf("Enter twelve integers.\n");
	for (i = 0; i < MAX; i++) {
		scanf("%d", &array[i]);
	}

	insert_sort(array, MAX);
	for (i = 0; i < MAX; i++) {
		printf("%d ", array[i]);
	}

	printf("Enter data to be searched.\n");
	scanf("%d", &value);

	if (binary_search(array, value, 0, MAX - 1) == -1)
		printf("No such data.\n");
	printf("It is in index %d", binary_search(array, value, 0, MAX - 1));

	return 0;
}

void insert_sort(int arr[], const int length) {
	int current, max, last;
	for (last = length - 1; last > 0;last--) { //마지막 인덱스를 1씩 감소시킨다
		max = 0; //max의 인덱스 초기화
		for (current = 0; current <= last; current++) { //인덱스 0부터 마지막인덱스까지 max와 비교
			if (arr[max] < arr[current]) {
				max = current;
			}
		}
		swap(&arr[max], &arr[last]);
	}
}

int binary_search(const int arr[], const int value, int first, int last)
{
	if (first <= last) {
		int middle;
		middle = (first + last) / 2;
		if (value == arr[middle])
			return middle;
		else
		{
			if (value > arr[middle]) {
				first = middle + 1;
				binary_search(arr, value, first, last);
			}
			else {
				last = middle - 1;
				binary_search(arr, value, first, last);
			}
		}
	}
	else
		return -1;
}

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}