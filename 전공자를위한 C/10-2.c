#include<stdio.h>
int count(const int a[], const int comp, int last);
int main()
{
	int arr[10];
	int i,temp,comp,last=0;
	printf("Enter input numbers.\n");
	for (i = 0; i < 10; i++) {
		scanf("%d", &temp);
		if (temp == -1) //-1�� �ԷµǸ� �Է�����
			break;
		arr[i] = temp;
		last++; //�迭�� ������ �ε��� ����
	}
	printf("Enter a number to search.\n");
	scanf("%d", &comp); //ã����� �� �Է�.
	
	printf("%d appear %d times.\n",comp,count(arr, comp, last));

	return 0;
}
int count(const int a[], const int comp, int last)
{
	
	if (last == -1) {
		return 0;
	}
	else {
		if (a[last] == comp) {
			
			return count(a, comp, last-1)+1;
		}
		else
			return count(a, comp, last-1);
	}
}