#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	char word[20];
	char meaning[100];
}wordType;

char *search(char *w, wordType dict[], int count) {
	int i;
	for (i = 0; i < count; i++) {
		if ((strcmp(dict->word, w)) == 0)
			return dict->meaning;
	}
	return NULL;
}

void insert(char* w, char* m, wordType dict[], int * cptr) {
	strcpy(dict[*cptr + 1].word, w);
	strcpy(dict[*cptr + 1].meaning, m);
	*cptr++;
}

void save_dictionary(FILE *fp, wordType dict[], int oldcnt, int newcnt) {
	int i;
	fseek(fp, 0, SEEK_END);
	for (i = oldcnt; i < newcnt; i++) {
		if ((fwrite((void*)&dict[i], sizeof(wordType), 1, fp)) < 1) {
			fprintf(stderr, "Error writing a structure.\n");
			exit(1);
		}
	}
}

void read_dictionary(FILE *fp, wordType dict[],int *cptr){
	*cptr = 0;
	rewind(fp);
	while (fread((void*)dict, sizeof(wordType), 1, fp))
		(*cptr)++;
	if(!feof(fp)){
		fprintf(stderr, "Error while reading file.\n");
		exit(1);
	}
}

int main()
{
	char word[20], *there;
	char meaning[100];
	int count, old_count;
	wordType mydict[5000];

	FILE *fp = fopen("dictionary.bin", "r+wb");

	read_dictionary(fp,mydict,&count);
	old_count = count; //읽어온 파일 단어 개수를 old_count에 저장

	while (1) {
		printf("Enter a word to search.\n");
		gets(word);
		if (strcmp(word, "quit") == 0) {
			save_dictionary(fp,mydict,old_count,count); //빠져나가기 전에 추가단어를 이전 파일 끝에 이어붙임.
			break;
		}
		there = search(word, mydict, count);
		if (there != NULL)
			puts(there);
		else {
			puts("No such word in current dictionary. Enter the meaning.\n");
			gets(meaning);
			insert(word,meaning,mydict,&count); //새로운 단어를 배열 끝에 추가.
		}
	}
	fclose(fp);
	return 0;
}