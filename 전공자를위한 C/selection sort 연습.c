/*  ���� �迭 �Է��� ���� index 1����.
	������ �Է¹����� �Է� ����.
	���ĵǱ����� �迭�� ���(����Լ��� �̿�)
	selection sort �Լ��� ����
		�������ε����� ����.
		ù �ε������� ������ �ε������� Ȯ���ϸ鼭 �ִ��� �ε����� ����
		�ִ��� �ε����� ���� �������ε����� ���� ��ȯ

		�������ε����� --
		�ݺ�.
	�������� �迭�� ���.
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
		data[i++] = temp; //i�� 1���� arr�� ������ �����
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