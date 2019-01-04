#include<stdio.h>
void move(int n, char x, char y, char z);
int main()
{
	int num; //원반의 개수
	int x, y, z; //축의 이름
	printf("Enter the number of disks.\n");
	scanf("%d", &num);
	move(num, x, y, z);
	return 0;
}

void move(int n, char x, char y, char z) //x:출발지 y:도착지 z:경유지
{
	if (n == 1) {
		printf("move a disk from %c to %c", x, y); //원반을 x에서 y로 옯긴다.(z를 매개로)
		return;
	}
	else {
		move(n-1, 'X', 'Z', 'Y');
		move(1, 'X', 'Y', 'Z');
		move(n - 1, 'Z', 'Y', 'X');
	}
}