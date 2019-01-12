#include<stdio.h>
#include<stdlib.h>

int* reverse_array(int*, int);
int main()
{
	int i=0, num, length; int original[100], *reversed;
	printf("Enter a sequence of positive integers.\n");
	while (1) {
		scanf("%d", &num);
		if (num <= 0)
			break;
		original[i++] = num;
	}
	length = i;

	reversed = reverse_array(original, length);
	for(i=0;i<length;i++){
		printf("%d ", reversed[i]);
	}
	printf("\n");
	free(reversed);
	return 0;
}

int* reverse_array(int* a, int length) {
	int* p = (int*)malloc(sizeof(int));
	for (int i = 0; i < length; ) {
		*(p + i) = *(a + (length - i - 1));
		i++;
		p = (int*)realloc(p, sizeof(int)*(i + 1));
	}
	return p;
}