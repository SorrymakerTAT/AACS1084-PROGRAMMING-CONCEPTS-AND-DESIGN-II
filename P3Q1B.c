#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#pragma warning(disable:4996)

void main() {
	int sum = 0, i, num,count;
	double average;

	FILE* fp;

	fp = fopen("P3Q1numbers.txt", "r");

	if (fp == NULL) {
		printf("File open error!!!\n");
		exit(-1);
	}

	while (fscanf(fp, "%d", &num) != EOF) {
		sum += num;
		count++;
	}

	average = (double)sum / count;

	printf("\nSum = %d\n", sum);
	printf("Average = %.2f", average);

	system("pause");
}
