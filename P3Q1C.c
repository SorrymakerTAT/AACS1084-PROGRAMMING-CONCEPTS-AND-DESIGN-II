#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#pragma warning(disable:4996)

void main() {
	int sum = 0, num, count = 0;
	double average;

	FILE* fp, *ofp;

	fp = fopen("P3Q1numbers.txt", "r");
	ofp = fopen("P3Q1results.txt", "w");

	if (fp == NULL || ofp == NULL) {
		printf("File open error!!!\n");
		exit(-1);
	}

	while (fscanf(fp, "%d", &num) != EOF) {
		sum += num;
		count++;
	}

	average = (double)sum / count;

	fprintf(ofp, "\nSum = %d\n", sum);
	fprintf(ofp,"Average = %.2f", average);

	printf("\n\nProcess Completed\n\n");

	fclose(fp);
	fclose(ofp);

	system("pause");
}