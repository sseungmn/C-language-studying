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
	pa = (int*)malloc(sizeof(int)*num_a); //�迭������ŭ �����޸� �Ҵ�
	if (pa = NULL) //NULL����
		exit(1);
	printf("Enter data to be inserted int array a. It must be in sorted order.\n");
	for (i = 0; i < num_a; i++) {
		scanf("%d", &temp); //�Ҵ���� �޸𸮿� ���� �迭 ����
		*(pa+i) = temp;
	}  
	//b
	printf("Enter number of elements in array b.\n");
	scanf("%d", &num_b);
	pb = (int*)malloc(sizeof(int)*num_b); //�迭������ŭ �����޸� �Ҵ�
	if (pb = NULL) //NULL����
		exit(1);
	printf("Enter data to be inserted int array b. It must be in sorted order.\n");
	for (i = 0; i < num_b; i++) {
		scanf("%d", &temp); //�Ҵ���� �޸𸮿� ���� �迭 ����
		*(pb + i) = temp;
	}
	//m
	pm = (int*)malloc(sizeof(int)*(num_a + num_b)); //a,b�� �迭 ���� �ո�ŭ ���� �޸� �Ҵ�
	for (i = 0; i < num_a; i++) {
		for (j = 0; j < num_b; j++) {
			if (pa[i] < pb[j]) { //a�ǿ�Ұ� ������ m�� a�� ���� �� a�ε����� �ø�
				pm[k++] = pa[i];
				break;
			}
			else {
				pm[k++] = pb[j];
			}
		}
	}
	//m���
	printf("Result of merging is,\n");
	for (i = 0; i < k; i++) {
		printf("%d ", pm[i]);
	}
	//�޸� �Ҵ�����&������ ����
	free(pa);
	free(pb);
	free(pm);
	pa = NULL;
	pb = NULL;
	pm = NULL;

	return 0;
}