#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp = fopen(__FILE__, "r");
	char ch;
	int l_parenthesis = 0, r_parenthesis=0;
	int l_brace = 0,r_brace=0;
	while ((ch = fgetc(fp)) != EOF) {
		if (ch == '{')
			l_brace++;
		else if (ch == '}')
			r_brace++;
		else if (ch == '(')
			l_parenthesis++;
		else if (ch == ')')
			r_parenthesis++;
	}
	if (feof(fp)) {
		printf("left_parenthesis : %d right_parenthesis : %d \nleft_brace : %d right_brace : %d \n",l_parenthesis,r_parenthesis,l_brace,r_brace);
	}
	else {
		fprintf(stderr, "Error while reading file.\n");
		exit(1);
	}
	fclose(fp);
	return 0;
}