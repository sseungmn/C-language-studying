#include<stdio.h>
#include<stdlib.h>
void min_max(int *arr, int*min, int *max, int length);
int main()
{
	int num, i = 0; int min=10000, max=0;
	int* p = NULL;//���� �޸𸮸� ����Ű�� ������ p
	printf("Enter a sequence of positive integers.\n");
	while (1) {
		scanf("%d", &num);
		if (num < 0)
			break;
		p = (int*)realloc(p, sizeof(int)*(i + 1)); //�޸𸮸� ��ĭ �÷��ش�.
		if (p == NULL)
			exit(1);
		*(p + i) = num;
		i++;
	} //i�� �迭�� ����
	min_max(p, &min, &max, i);
	printf("Minimum is %d, Maximum is %d.\n", min, max);

	free(p);
	p = NULL;
	return 0;
}
void min_max(int *arr, int*min, int *max, int length) {
	for (int i = 0; i < length; i++) {
		if (*min > arr[i])
			*min = arr[i];
		if (*max < arr[i])
			*max = arr[i];
	}
}