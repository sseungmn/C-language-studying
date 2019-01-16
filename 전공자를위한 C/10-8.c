#include<stdio.h>
#define MAX 12
int binary_search(const int arr[], const int val, int first, int last);

int main()
{
	int array[MAX]; int i;
	printf("Enter twelve integers.\n");
	for (i = 0; i < MAX; i++) {
		scanf("%d", &array[i]);
	}
	printf("Enter data to be searched.\n");
	scanf("%d", &value);
	if (binary_search(array,value,0,MAX-1) == -1)
		printf("No such data.\n");
	printf("It is in index %d", binary_search(array, value, 0, MAX - 1));

	return 0;
}

int insert_sort(const int arr[], const int length) {
	int current, part, max=0;
	for (part = 1; part < length; part++) {
		for (current - 0; current < length - part; current++) {
			if (arr[max] < arr[current]) {
				max = current;
			}
		}
		swap(arr[max], arr[length]);
	}
}

int binary_search(const int arr[],const int value, int first, int last)
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