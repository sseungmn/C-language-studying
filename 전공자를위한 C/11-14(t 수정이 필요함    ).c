#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k = 0;
	int num_a; int num_b;
	int* pa = NULL; int* pb = NULL; int* pm = NULL; int temp;
	//a
	printf("Enter number of elements in array a.\n");
	scanf("%d", &num_a);
	pa = (int*)malloc(sizeof(int)*num_a); //배열개수만큼 동적메모리 할당
	if (pa = NULL) //NULL판정
		exit(1);
	printf("Enter data to be inserted int array a. It must be in sorted order.\n");
	for (i = 0; i < num_a; i++) {
		scanf("%d", &temp); //할당받은 메모리에 정수 배열 저장
		*(pa+i) = temp;
	}  
	//b
	printf("Enter number of elements in array b.\n");
	scanf("%d", &num_b);
	pb = (int*)malloc(sizeof(int)*num_b); //배열개수만큼 동적메모리 할당
	if (pb = NULL) //NULL판정
		exit(1);
	printf("Enter data to be inserted int array b. It must be in sorted order.\n");
	for (i = 0; i < num_b; i++) {
		scanf("%d", &temp); //할당받은 메모리에 정수 배열 저장
		*(pb + i) = temp;
	}
	//m
	pm = (int*)malloc(sizeof(int)*(num_a + num_b)); //a,b의 배열 개수 합만큼 동적 메모리 할당
	for (i = 0; i < num_a; i++) {
		for (j = 0; j < num_b; j++) {
			if (pa[i] < pb[j]) { //a의요소가 작으면 m에 a를 넣은 후 a인덱스를 늘림
				pm[k++] = pa[i];
				break;
			}
			else {
				pm[k++] = pb[j];
			}
		}
	}
	//m출력
	printf("Result of merging is,\n");
	for (i = 0; i < k; i++) {
		printf("%d ", pm[i]);
	}
	//메모리 할당해제&포인터 해제
	free(pa);
	free(pb);
	free(pm);
	pa = NULL;
	pb = NULL;
	pm = NULL;

	return 0;
}