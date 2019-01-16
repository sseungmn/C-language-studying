#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j; //i=row, j=column
	int** p;
	int row, column;
	printf("Enter row and column.\n");
	scanf("%d %d", &row, &column);
	p = (int**)malloc(sizeof(int)*row);
	for (i = 0; i < row; i++) {
		*(p + i) = (int*)malloc(sizeof(int)*column);
	}
	printf("Enter the value of array elements.\n");
	for (i = 0; i < row; i++) {
		for (j = 0; j < column; j++) {
			scanf("%d", p[i] + j);
		}
	}
	printf("The result is\n");
	for (i = 0; i < row; i++) {
		for (j = 0; j < column; j++) {
			printf("%d ", (*(p[i] + j))*(*(p[i] + j)));
		}
		printf("\n");
	}
}