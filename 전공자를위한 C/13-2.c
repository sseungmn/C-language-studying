#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
	char *name;
	int age;
}personType;

void copy_structure(personType *to, const personType *from); //반드시 깊은복사를 해야함
void print_structure(const personType *p);
int main()
{
	personType a, b = { "Park",19 };
	print_structure(&b);
	copy_structure(&a, &b);
	print_structure(&a);
	return 0;
}

void copy_structure(personType *to, const personType *from) {
	to->name = (char*)malloc(sizeof(char)*(strlen(from->name) + 1));
	*to = *from; //구조체 복사
}

void print_structure(const personType *p) {
	printf("%s\n", p->name);
	printf("%d\n", p->age);
}
