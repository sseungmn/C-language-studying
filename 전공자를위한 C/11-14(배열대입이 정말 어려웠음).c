#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k = 0;
	int num_a; int num_b;
	int* a = NULL; int* b = NULL; int* m = NULL; int temp;
	//a
	printf("Enter number of elements in array a.\n");
	scanf("%d", &num_a);
	a = (int*)malloc(sizeof(int)*num_a); //배열개수만큼 동적메모리 할당
	if (a == NULL) //NULL판정
		exit(1);
	printf("Enter data to be inserted int array a. It must be in sorted order.\n");
	for (i = 0; i < num_a; i++) {
		scanf("%d", &temp); //할당받은 메모리에 정수 배열 저장
		*(a + i) = temp;
	}
	//b
	printf("Enter number of elements in array b.\n");
	scanf("%d", &num_b);
	b = (int*)malloc(sizeof(int)*num_b); //배열개수만큼 동적메모리 할당
	if (b == NULL) //NULL판정
		exit(1);
	printf("Enter data to be inserted int array b. It must be in sorted order.\n");
	for (i = 0; i < num_b; i++) {
		scanf("%d", &temp); //할당받은 메모리에 정수 배열 저장
		*(b + i) = temp;
	}
	//m
	m = (int*)malloc(sizeof(int)*(num_a + num_b)); //a,b의 배열 개수 합만큼 동적 메모리 할당
	i = j = k = 0;
	while (1) {
		if (k > num_a + num_b) {
			break;
		}
		else
		{
			if (i == num_a)
			m[k++] = b[j++];
			else if (j == num_b)
			m[k++] = a[i++];
			else {
				if (a[i] < b[j])
					m[k++] = a[i++];
				else
					m[k++] = b[j++];
			}
		}
	}

	//m출력
	printf("Result of merging is,\n");
	for (i = 0; i < k-1; i++) {
		printf("%d ", m[i]);
	}
	//메모리 할당해제&포인터 해제
	free(a);
	free(b);
	free(m);
	a = NULL;
	b = NULL;
	m = NULL;

	return 0;
}