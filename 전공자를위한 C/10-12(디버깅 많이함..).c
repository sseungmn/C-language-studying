#include<stdio.h>
void swap(int* a, int* b); 
void insertion_sort(int arr[], int length);

int has_element(int value, int set[], const int *cp);
void add_element(int value, int set[], int *cp);
void delete_element(int value, int set[], int *cp);

int main()
{
	int arr[10]; int value; int count = 0; int i;
	char com;
	while (1)
	{
		printf("Enter commands: a 5 adds 5 to the set, d 5 deletes 5 from the set.\n");
		scanf("%c %d", &com, &value);
		if (com == 'a'){
			add_element(value, arr, &count);
			insertion_sort(arr, count); //�������� ����
		}
		else if (com == 'd')
			delete_element(value, arr, &count);
		else if (com == 'q')
			break;
		for (i = 0; i < count; i++) { // ���泻�� ���
			printf("%d ", arr[i]);
		}
		printf("\n");
		getchar();
	}

}

int has_element(int value, int set[], const int *cp)
{
	int i;
	for (i = 0; i < *cp; i++) {
		if (set[i] == value)
			return i; //true
	}
	return -1; //false
}
void add_element(int value, int set[], int *cp)
{
	set[(*cp)] = value; 
	++(*cp); //count�� ������ ����
}
void delete_element(int value, int set[], int *cp)
{
	int i;
	if (has_element(value, set, cp) != -1) // ������ ���Ұ� �����ϴ��� Ȯ��
	{
		for (i = has_element(value, set, cp) ; i < *cp - 1; i++) { //�������ε��� ������ ����
			swap(&set[i], &set[i + 1]); //�̹� ���ҿ� �������Ҹ� �ٲ�->��ĭ�� �پ��� ����
		}
		--(*cp); //count ����
	}
	else
		exit();
}

void insertion_sort(int arr[], int length) { //length�� ������ ����
	int part,i,min;
	for (part = 0; part < length - 1; part++) { // part�� �������ε��� �������� ����
		min = length - 1;
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