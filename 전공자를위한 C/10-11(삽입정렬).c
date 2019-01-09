#include<stdio.h>
void swap(int* a, int* b); 
void insertion_sort(int arr[], int length);
int main()
{
	int arr[10];
	int i;
	printf("Enter input numbers.\n");
	for (i = 0;; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == -1)
			break;
	}
	insertion_sort(arr, i); //length는 원소의 개수
	for (i = 0;arr[i]!=-1; i++) {
		printf("%d ", arr[i]);
	}
}
void insertion_sort(int arr[], int length) {
	int part,i,min=length-1;
	for (part = 0; part < length - 1; part++) { //part는 마지막인덱스 전까지만 증가
		for (i = length-1; i>=part; i--) {
			if (arr[i] < arr[min]) 
				min = i;
		}
		swap(&arr[min], &arr[part]);
	}

}

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}