#include<stdio.h>
int move(int n, char x, char y, char z);
int main()
{
	int num; //원반의 개수
	int x='X', y='Y', z='Z'; //축의 이름
	printf("Enter the number of disks.\n");
	scanf("%d", &num);
	printf("%d", move(num, x, y, z));
	return 0;
}

int move(int n, char x, char y, char z) //x:출발지 y:도착지 z:경유지
{
	static count = 0;
	
	if (n == 1) {
		printf("move a disk from %c to %c \n", x, y); //원반을 x에서 y로 옯긴다.(z를 매개로)
		count++;
		return count;
	}
	else {
		move(n - 1, x, z, y); //가장 큰거 위의 n-1개를 원래의 경유지로 옮긴다.
		move(1, x, y, z); //가장 큰 것을 도착지로 옮긴다.
		move(n - 1, z, y, x); //경유지에 있던 n-1개를 도착지로 옮긴다.
	}
	
}