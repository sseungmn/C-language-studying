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
	a = (int*)malloc(sizeof(int)*num_a); //�迭������ŭ �����޸� �Ҵ�
	if (a == NULL) //NULL����
		exit(1);
	printf("Enter data to be inserted int array a. It must be in sorted order.\n");
	for (i = 0; i < num_a; i++) {
		scanf("%d", &temp); //�Ҵ���� �޸𸮿� ���� �迭 ����
		*(a + i) = temp;
	}
	//b
	printf("Enter number of elements in array b.\n");
	scanf("%d", &num_b);
	b = (int*)malloc(sizeof(int)*num_b); //�迭������ŭ �����޸� �Ҵ�
	if (b == NULL) //NULL����
		exit(1);
	printf("Enter data to be inserted int array b. It must be in sorted order.\n");
	for (i = 0; i < num_b; i++) {
		scanf("%d", &temp); //�Ҵ���� �޸𸮿� ���� �迭 ����
		*(b + i) = temp;
	}
	//m
	m = (int*)malloc(sizeof(int)*(num_a + num_b)); //a,b�� �迭 ���� �ո�ŭ ���� �޸� �Ҵ�
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

	//m���
	printf("Result of merging is,\n");
	for (i = 0; i < k-1; i++) {
		printf("%d ", m[i]);
	}
	//�޸� �Ҵ�����&������ ����
	free(a);
	free(b);
	free(m);
	a = NULL;
	b = NULL;
	m = NULL;

	return 0;
}