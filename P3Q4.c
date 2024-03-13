#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#pragma warning(disable:4996)


void addRecords();

void addRecords() {
	char name[30], cont;
	int mark, count = 0;

	FILE* file;

	file = fopen("P3Q4mixed.txt", "a");

	if (file == NULL) {
		printf("File open error!!!\n");
		exit(-1);
	}

	printf("\nAdd Records:\n");
	printf("==============\n");
	printf("Add another record (Y = yes)?\n");
	rewind(stdin);
	scanf("%c", &cont);

	while (toupper(cont) == 'Y') {
		printf("\tName : ");
		rewind(stdin);
		gets(name);
		printf("\tMark : ");
		scanf("%d", &mark);
		
		fprintf(file, "%s\n%d\n", name, mark);
		count++;
		printf("\nRecord successfully added...\n");

		printf("Add another reocrd (Y = yes)?\n");
		rewind(stdin);
		scanf("%c", &cont);
	}
	printf("\n%d records have  been added to mixed.txt\n\n", count);
	fclose(file);
};


void main() {
	addRecords();

	system("pause");
}