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

void swap(int*a, int*b)
void selection_solt(int arr[], int length)
void printa_array(const int data[], int length);

int main()
{
	for i=0; for data[MAX];
	printf("Enter integers saperated by space.\n");
	while(1){
		scanf("%d", &temp);
		if (temp < 0)
			break;
		data[i++] = temp; //i�� 1���� arr�� ������ �����
	}
	printf("Before sorting : ");
	printarr(date[], i);
	printf("\n");

	selection_solt(data[], i);
	printf("After sorting : ");
	print_array(data[], i);
	printf("\n");
	return 0;

}

void printa_array(const int arr[], int length)
{
	int i;
	for (i = 1; i < length; i++) {
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
	last = lenght - 1;

	for (current = 1; last > 0; last--) {
		largest = 0;
		if (arr[current] > arr[largest])
			largest = current; 
		swap(&arr[last], &arr[largest]);
	}
}