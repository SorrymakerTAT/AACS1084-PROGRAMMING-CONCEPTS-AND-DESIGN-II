#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#pragma warning(disable:4996)

void displayRecords();

void displayRecords() {

	FILE* file;

	file = fopen("P3Q4mixed.txt", "r");

	int mark, count = 0;
	char name[30];

	if (file == NULL) {
		printf("File open error!!!\n");
		exit(-1);
	}
	printf("LIST OF RECORDS - mixed.txt\n");
	printf("Name\t\t\tMark\n");
	printf("====\t\t\t===\n");

	while (fscanf(file, "%[^\n]\n%d\n", &name, &mark) != EOF) {
		printf("%s\t\t%d\n", name, mark);
		count++;
	}

	printf("\n\nNumber of record(s) = %d\n\n", count);

	fclose(file);
	system("pause");
}

void main() {
	displayRecords();

	system("pause");
}