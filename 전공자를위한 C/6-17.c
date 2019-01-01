#include<stdio.h>
int main()
{
	char ch;
	int count = 0; //in�� Ƚ���� ���ִ� ����
	int state = 0; //wait state���� ����.

	printf("Enter a sentence.\n");
	
	
	for (ch=getchar(); ch != '\n'; ch=getchar()) {
		
		switch (state) {
		case 0: //wait state.
			if (ch == 'i')
				state = 1;
			break;
		case 1: //'i' state.
			if (ch == 'n')
				state = 2;
			else
				state = 0;
			break;
		case 2: //'n' state.
			if (ch == ' ') {
				count++;
			}
			state = 0;
			break;
		}
	}
	printf("The preposition 'in' appears %d times.\n", count);
}